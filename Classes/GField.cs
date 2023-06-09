using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSDKGenerator.Classes
{
    internal class GField
    {
        public bool referenceType = false;
        public bool Included = true;

        private GType _parent;
        private FieldDef _field;

        private GType _fieldType = null;
        private string _sdkTypeFullName;

        private string _name;
        private string _fullName;

        private string _sdkName;
        private bool initialized = false;
        public GField(GType parent, FieldDef field, bool included)
        {
            if (!parent.IsValueType)
                Included = included;

            this._parent = parent;
            this._field = field;

            this._name = field.Name;
            this._fullName = field.FullName;

            this._sdkName = Utils.GetName(field.Name).Replace("k__BackingField", "").Replace("<", "").Replace(">", "");
        }

        public bool Initialize()
        {
            if (initialized)
                return referenceType;
            _sdkTypeFullName = Utils.GetTypeFullName(_field.FieldType, Parent.Parent, out referenceType);
            Utils.TypeIsRegistered(_field.FieldType, Parent.Parent, out _fieldType);
            Console.WriteLine(_sdkTypeFullName);
            initialized = true;
            return referenceType;
        }

        public void WriteDeclaration(StreamWriter sw)
        {
            Initialize();
            if (!_field.IsStatic && _field.DeclaringType.IsValueType)
            {
                if (referenceType || _field.FieldType.IsPrimitive)
                    sw.WriteLine($"{_sdkTypeFullName} {_sdkName};");
                else
                    sw.WriteLine($"unknown_type unknown_{_sdkName};"); // warn user that stuff brokey and/or somehow figure out size of type
                return;
            }

            string line = "";
            if (_field.IsStatic)
                line += "static ";

            line += $"{_sdkTypeFullName} {_sdkName}_G();";
            sw.WriteLine(line + new string(' ', Utils.ClampMin(80 - line.Length)) + $"// {_field.FieldType.FullName}");

            if (_field.IsStatic)
                sw.Write("static ");

            sw.WriteLine($"void {_sdkName}_S({_sdkTypeFullName} value);");
        }

        public void WriteDefinition(StreamWriter sw)
        {
            if (!_field.IsStatic && _field.DeclaringType.IsValueType)
                return;

            string instance = _field.IsStatic ? "StaticInstance()" : "THIS_PTR";

            #region read
            sw.WriteLine($"{_sdkTypeFullName} {Parent.SDKFullName}::{_sdkName}_G()");
            sw.WriteLine("{");
            sw.WriteLine($"static uintptr_t _offset = Mono::field_offset(\"{Parent.Assembly}\", \"{Parent.Namespace}\", \"{Parent.Name}\", \"{_field.Name}\");");
            sw.WriteLine($"return Memory::read<{_sdkTypeFullName}>({instance} + _offset);");
            sw.WriteLine("}");
            #endregion
            #region write
            sw.WriteLine($"void {Parent.SDKFullName}::{_sdkName}_S({_sdkTypeFullName} value)");
            sw.WriteLine("{");
            sw.WriteLine($"static uintptr_t _offset = Mono::field_offset(\"{Parent.Assembly}\", \"{Parent.Namespace}\", \"{Parent.Name}\", \"{_field.Name}\");");
            sw.WriteLine($"Memory::write<{_sdkTypeFullName}>(value, {instance} + _offset);");
            sw.WriteLine("}");
            #endregion
        }

        public GType Parent { get => _parent; }

        public string FullName { get => _fullName; }
        public bool Static { get => _field.IsStatic; }
        public GType ReturnType { get => _fieldType; }
        public string SDKFullName { get => Parent.SDKFullName + "." + _sdkName; }
    }
}
