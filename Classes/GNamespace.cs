using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSDKGenerator.Classes
{
    internal class GNamespace
    {
        public Dictionary<string, GType> Types = new Dictionary<string, GType>(); // string is full name

        private readonly GInstance _parent;
        private readonly string _name;
        public GNamespace(GInstance parent, string name)
        {
            _parent = parent;
            _name = name;
        }

        public GType FindType(string internalFullName)
        {
            if (Types.TryGetValue(internalFullName, out var type))
                return type;
            return null;
        }

        public void Initialize()
        {
            foreach (var type in Types.Values)
                type.Initialize();
        }

        public void Generate(string path, StreamWriter sw, bool enums)
        {
            if (enums)
            {
                foreach (var type in Types.Values.Where(x => x.IsEnum))
                    type.Generate(path, sw);
            }
            else
                foreach (var type in Types.Values.Where(x => !x.IsValueType))
                    type.Generate(path, sw);
        }

        // must be declared in specific order
        /*private void GenerateValues(string path, StreamWriter sw)
        {
            List<GType> registeredVTypes = new List<GType>();
            foreach (var item in Types.Values)
            {
                if (item.IsValueType)
                    registeredVTypes.Add(item);
            }

            HashSet<GType> valueTypes = new HashSet<GType>();
            while (valueTypes.Count != registeredVTypes.Count)
            {
                Console.WriteLine($"{registeredVTypes.Count} != {valueTypes.Count}");
                foreach (var type in registeredVTypes)
                {
                    if (valueTypes.Contains(type))
                        continue;

                    bool didPass = true;
                    foreach (var item in type.Fields.Values)
                    {
                        if (!item.referenceType)
                            continue;

                        if (!valueTypes.Contains(item.Parent))
                            didPass = false;
                    }

                    if (didPass)
                    {
                        valueTypes.Add(type);
                        type.Generate(path, sw);
                    }
                }
            }
        }
*/
        public GInstance Parent { get { return _parent; } }
    }
}
