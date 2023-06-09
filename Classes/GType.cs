using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSDKGenerator.Classes
{
    internal class GType
    {
        public Dictionary<string, GField> Fields = new Dictionary<string, GField>();
        public Dictionary<string, GMethod> Methods = new Dictionary<string, GMethod>();

        public bool Included = true;

        private GInstance _parent;
        private TypeDef _def;

        private string _sdkFullName;

        public GType(GInstance parent, TypeDef def, bool included)
        {
            Included = included;
            _parent = parent;
            _def = def;

            _sdkFullName = Utils.GetName(def.FullName).Replace(".", "_").Replace("<", "").Replace(">", "").Replace("`", "");

            // populate
            if (_def.IsEnum)
                return;

            foreach (var field in _def.Fields)
                Fields.Add(field.FullName, new GField(this, field, included));

            if (!Parent.external)
                foreach (var method in _def.Methods)
                    if (!method.HasGenericParameters && !method.IsRuntimeSpecialName) // fix later?
                        new GMethod(this, method, included);
        }

        public void Generate(string path, System.IO.StreamWriter sw)
        {
            #region sdk.h
            if (!_def.IsEnum)
            {
                sw.WriteLine($"class {_sdkFullName}");
                sw.WriteLine("{\nstatic uintptr_t StaticInstance();\npublic:");
                foreach (var field in Fields)
                    field.Value.WriteDeclaration(sw);
                foreach (var method in Methods)
                    method.Value.WriteDeclaration(sw);
                sw.WriteLine("};");
            }
            else
            {
                var tName = Utils.GetNativeType(_def.GetEnumUnderlyingType().TypeName);
                sw.WriteLine($"struct {_sdkFullName}");
                sw.WriteLine("{");
                sw.WriteLine($"{tName} value;");
                for (int i = 1; i < _def.Fields.Count; i++)
                {
                    var field = _def.Fields[i];
                    sw.WriteLine($"static const {tName} {Utils.ValidName(field.Name)} = {field.Constant.Value};");
                }
                sw.WriteLine("};");
            }
            #endregion

            if (_def.IsEnum)
                return;

            #region whateverclass.cpp
            var classPath = $@"{path}\{_sdkFullName}.cpp";
            File.WriteAllText(classPath, "");
            using (StreamWriter classStream = new StreamWriter(new FileStream(classPath, FileMode.Append, FileAccess.Write)))
            {
                classStream.WriteLine("#include \"../../sdk.h\"\nnamespace SDK\n{");
                classStream.WriteLine($"uintptr_t {_sdkFullName}::StaticInstance()");
                classStream.WriteLine("{");
                classStream.WriteLine($"static mono_class_t* _class = Mono::find_class(\"{_def.DefinitionAssembly.Name}\", \"{_def.Namespace}\", \"{_def.Name}\");");
                classStream.WriteLine("static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();");
                classStream.WriteLine("return _instance;");
                classStream.WriteLine("}");

                foreach (var field in Fields.Values)
                    field.WriteDefinition(classStream);

                foreach (var method in Methods.Values)
                    method.WriteDefinition(classStream);

                classStream.WriteLine("};");
            }
            #endregion

        }

        public GInstance Parent { get => _parent; }

        public string SDKFullName { get => _sdkFullName; }

        public bool IsStruct { get => _def.IsValueType && !_def.IsEnum; }
        public bool IsEnum { get => _def.IsEnum; }
        public bool IsValueType { get => _def.IsValueType; }
        public string Namespace { get => _def.Namespace; }
        public string Name { get => _def.Name; }
        public string FullName { get => _def.FullName; }
        public string Assembly { get => _def.DefinitionAssembly.Name; }

        public TypeSig Sig { get => _def.ToTypeSig(); }

    }
}
