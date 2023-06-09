using dnlib.DotNet;
using MonoSDKGenerator.Classes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoSDKGenerator
{
    internal class Utils
    {
        public static string GetName(string name)
        {
            const int MaxAnsiCode = 255;
            string s = "";

            foreach (var item in name)
            {
                if (item > MaxAnsiCode)
                    s += "u" + string.Format(@"{0:x4}", (int)item).ToUpper();
                else
                    s += item;
            }

            return s;
        }

        public static string GetTypeFullName(TypeSig typesig, GInstance inst, out bool exists)
        {
            exists = false;
            string _sdkTypeFullName;
            if (typesig.IsPrimitive || (typesig.IsPointer && typesig.Next != null && typesig.Next.IsPrimitive))
                _sdkTypeFullName = Utils.GetNativeType(typesig.TypeName.Replace("*", ""));
            else if (TypeIsRegistered(typesig, inst, out GType type))
            {
                exists = true;
                _sdkTypeFullName = type.SDKFullName;
                if (!type.IsValueType)
                    _sdkTypeFullName += "*";
            }
            else
                _sdkTypeFullName = "unknown_type";
            return _sdkTypeFullName;
        }

        public static bool TypeIsRegistered(TypeSig typesig, GInstance inst, out GType gType)
        {
            gType = null;
            if (inst.Types.TryGetValue(typesig.FullName.Replace("&", "").Replace("*", ""), out var type) && type.Included)
            {
                gType = type;
                return true;
            }
            return false;
        }
        public static string ValidName(string name)
        {
            switch (name)
            {
                case "auto":
                case "delete":
                case "register":
                case "export":
                case "class":
                case "template":
                case "inline":
                case "private":
                case "virtual":
                case "public":
                case "static":
                case "void":
                case "IGNORE": //
                case "DELETE": //
                    return name + "_";
            }
            return name;
        }

        public static int ClampMin(int val)
        {
            if (val <= 0)
                return 1;
            return val;
        }

        public static string GetNativeType(string type)
        {
            switch (type)
            {
                case "Boolean":
                    return "bool";
                case "Int64":
                    return "int64_t";
                case "UInt64":
                    return "uint64_t";
                case "Int32":
                    return "int32_t";
                case "UInt32":
                    return "uint32_t";
                case "Int16":
                    return "int16_t";
                case "UInt16":
                    return "uint16_t";
                case "IntPtr":
                    return "intptr_t";
                case "UIntPtr":
                    return "uintptr_t";
                case "Byte":
                    return "uint8_t";
                case "SByte":
                    return "int8_t";
                case "Char":
                    return "char";
                case "Single":
                    return "float";
                case "Double":
                    return "double";
                default:
                    return type;
            }
        }
    }
}
