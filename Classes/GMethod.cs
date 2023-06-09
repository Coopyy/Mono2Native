using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSDKGenerator.Classes
{
    internal class GMethod
    {
        public bool Included = true;
        private GType _parent;
        private MethodDef _method;

        private string _sdkReturnTypeFullName = "void";
        private List<Tuple<string, string>> _parameters = new List<Tuple<string, string>>(); // name, type sdk name

        private string _fullName;
        private string _sdkName;

        public GMethod(GType parent, MethodDef method, bool included)
        {
            Included = included;
            this._parent = parent;
            this._method = method;

            this._fullName = method.FullName;

            var name = Utils.GetName(method.Name).Replace("k__BackingField", "").Replace("<", "").Replace(">", "").Replace("|", "").Replace(".", "_");
            var newName = name;
            int i = 0;
            while (parent.Methods.TryGetValue(newName, out var m))// && m._method.Parameters.Count == _method.Parameters.Count)
                newName = name + (++i).ToString();
            newName = Utils.ValidName(newName);
            parent.Methods.Add(newName, this);
            _sdkName = newName;
        }

        public void Initialize()
        {
            if (_method.HasReturnType)
                _sdkReturnTypeFullName = Utils.GetTypeFullName(_method.ReturnType, Parent.Parent, out bool _);

            bool hasSkippedInstance = false;
            foreach (var param in _method.Parameters)
            {
                if (!_method.IsStatic && !hasSkippedInstance)
                {
                    hasSkippedInstance = true;
                    continue;
                }

                string tName = Utils.GetTypeFullName(param.Type, Parent.Parent, out bool exists);
                if (exists && param.Type.TypeName.Contains("&"))
                    tName += "&";
                else if (param.Type.IsPointer)
                    tName += "*";

                _parameters.Add(new Tuple<string, string>(Utils.ValidName(param.Name), tName));
            }
        }

        public void WriteDeclaration(StreamWriter sw)
        {
            Initialize();
            if (_method.IsStatic)
                sw.Write("static ");
            sw.Write($"{_sdkReturnTypeFullName} {_sdkName}(");

            bool hasFirst = false;
            foreach (var param in _parameters)
            {
                if (hasFirst)
                    sw.Write(", ");
                hasFirst = true;

                sw.Write($"{param.Item2} {param.Item1}");
            }

            sw.WriteLine(");");
        }

        public void WriteDefinition(StreamWriter sw)
        {
            sw.Write($"{_sdkReturnTypeFullName} {Parent.SDKFullName}::{_sdkName}(");

            bool hasFirst = false;
            foreach (var param in _parameters)
            {
                if (hasFirst)
                    sw.Write(", ");
                hasFirst = true;

                sw.Write($"{param.Item2} {param.Item1}");
            }

            sw.WriteLine(")\n{");
            hasFirst = false;

            string prms = "";
            string prmsNames = "";
            if (!_method.IsStatic)
            {
                prms += Parent.SDKFullName + "*";
                prmsNames = "this";
                hasFirst = true;
            }

            foreach (var param in _parameters)
            {
                if (hasFirst)
                {
                    prms += ", ";
                    prmsNames += ", ";
                }
                hasFirst = true;

                prmsNames += param.Item1;
                prms += param.Item2;
            }
            sw.WriteLine($"using method_t = {_sdkReturnTypeFullName}(*)({prms});");
            sw.WriteLine($"static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token(\"{Parent.Assembly}\", \"{Parent.Namespace}\", \"{Parent.Name}\", 0x{_method.MDToken}));");
            sw.WriteLine($"return _method({prmsNames});");
            sw.WriteLine("}");
            if (_method.IsUnmanagedExport)
                Console.WriteLine(_sdkReturnTypeFullName);
        }

        public GType Parent { get => _parent; }

        public string FullName { get => _fullName; }
        public string SDKFullName { get => Parent.SDKFullName + "::" + _sdkName; }
    }
}
