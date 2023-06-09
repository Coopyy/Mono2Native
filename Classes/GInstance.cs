using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSDKGenerator.Classes
{
    internal class GInstance
    {
        public Dictionary<string, GType> Types = new Dictionary<string, GType>(); // string is full name
        public bool external;
        public GInstance(ModuleDefMD[] assemblies, bool external, bool included)
        {
            this.external = external;

            foreach (var assembly in assemblies)
                foreach (var type in assembly.Types)
                    if (!type.CustomAttributes.IsDefined("System.Runtime.CompilerServices.CompilerGeneratedAttribute") && !type.IsDelegate && type.DeclaringType == null)
                    {
                        if (!Types.ContainsKey(type.FullName))
                            Types.Add(type.FullName, new GType(this, type, included));
                        else
                        {
                            var temp = new GType(this, type, included);
                            temp.Fields.ToList().ForEach(x =>
                            {
                                if (!Types[type.FullName].Fields.ContainsKey(x.Key))
                                    Types[type.FullName].Fields.Add(x.Key, x.Value);
                            });
                            if (!external)
                                temp.Methods.ToList().ForEach(x =>
                                {
                                    if (!Types[type.FullName].Methods.ContainsKey(x.Key))
                                        Types[type.FullName].Methods.Add(x.Key, x.Value);
                                });
                        }
                    }
        }

        public void Generate(string path)
        {
            // copy in mono files?

            var outPath = path + $@"\sdk\classes";
            var sdkhPath = path + $@"\sdk.h";

            if (!Directory.Exists(outPath))
                Directory.CreateDirectory(outPath);

            File.WriteAllText(sdkhPath, "");
            File.WriteAllText(path + $@"\sdk\classes.h", "");

            var typesToGen = Types.Values.Where(x => x.Included);
            Console.WriteLine($"Generating {typesToGen.Count()} Classes");

            using (StreamWriter sw = new StreamWriter(new FileStream(sdkhPath, FileMode.Append, FileAccess.Write)))
            {
                sw.WriteLine($"// Generated: {DateTime.Now.ToString("MM/dd/yyyy h:mm tt")}");
                sw.WriteLine($"// Mono2SDK - https://github.com/Coopyy/Mono2Native\n");
                sw.WriteLine("#include \"sdk/mono/mono.h\"\n#define THIS_PTR reinterpret_cast<uintptr_t>(this)\ntypedef uintptr_t unknown_type;\nnamespace SDK\n{");

                foreach (var type in typesToGen.Where(x => !x.IsEnum))
                    sw.WriteLine($"class {type.SDKFullName};");

                foreach (var type in typesToGen.Where(x => x.IsEnum))
                    type.Generate(outPath, sw);
                foreach (var type in typesToGen.Where(x => !x.IsValueType))
                    type.Generate(outPath, sw);

                GenerateValues(outPath, sw); // do vtypes last

                sw.WriteLine("}");
            }
        }

        private void GenerateValues(string path, StreamWriter sw)
        {
            List<GType> registeredVTypes = new List<GType>();
            registeredVTypes.AddRange(Types.Values.Where(x => x.Included && x.IsStruct));

            registeredVTypes.ForEach(x => Console.WriteLine(x.SDKFullName));

            HashSet<GType> valueTypes = new HashSet<GType>();
            bool allTypesProcessed = false;

            while (!allTypesProcessed)
            {
                allTypesProcessed = true; // Assume all types have been processed

                foreach (var type in registeredVTypes)
                {
                    if (valueTypes.Contains(type))
                        continue;

                    bool didPass = true;
                    foreach (var item in type.Fields.Values.Where(y => y.Included && y.referenceType && y.ReturnType.IsStruct && !y.Static))
                        if (item.ReturnType != type && !valueTypes.Contains(item.ReturnType))
                        {
                            didPass = false;
                            break;
                        }

                    if (didPass)
                    {
                        valueTypes.Add(type);
                        type.Generate(path, sw);
                    }
                    else
                        allTypesProcessed = false; // Some types are not processed yet
                }
            }
        }

    }
}

