using dnlib.DotNet;
using MonoSDKGenerator.Classes;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MonoSDKGenerator
{
    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            Application.Run(new MainForm());
        }
    }
}
