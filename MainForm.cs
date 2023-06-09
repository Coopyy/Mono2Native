using dnlib.DotNet;
using MonoSDKGenerator.Classes;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MonoSDKGenerator
{
    public partial class MainForm : MetroSet_UI.Forms.MetroSetForm
    {
        private static Dictionary<string, GType> typeMap = new Dictionary<string, GType>(); // SDKFullName
        private static Dictionary<string, GField> fieldMap = new Dictionary<string, GField>(); // SDKFullName
        private static Dictionary<string, GMethod> methodMap = new Dictionary<string, GMethod>(); // SDKFullName

        private static List<string> realIncludedTypes = new List<string>();
        private static List<string> realExcludedTypes = new List<string>();

        private static List<string> realIncludedFields = new List<string>();
        private static List<string> realExcludedFields = new List<string>();

        private static List<string> realIncludedMethods = new List<string>();
        private static List<string> realExcludedMethods = new List<string>();

        private static Dictionary<string, ModuleDefMD> selectedAssemblies = new Dictionary<string, ModuleDefMD>();
        private static ModuleContext modCtx;
        private static GInstance instance;
        public MainForm()
        {
            modCtx = ModuleDef.CreateModuleContext();
            InitializeComponent();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            metroSetTabControl1.SelectedTab = metroSetSetTabPage4;
        }

        private void addAssemblyBtn_Click_1(object sender, EventArgs e)
        {
            openAssemblyDialog = new OpenFileDialog();
            openAssemblyDialog.Multiselect = true;
            openAssemblyDialog.Filter = "Managed Assemblies (*.dll)|*.dll";
            DialogResult res = openAssemblyDialog.ShowDialog();

            if (res == DialogResult.OK)
            {
                foreach (var filePath in openAssemblyDialog.FileNames)
                {
                    try
                    {
                        ModuleDefMD module = ModuleDefMD.Load(filePath, modCtx);
                        if (!selectedAssemblies.ContainsKey(module.Name))
                        {
                            selectedAssemblies.Add(module.Name, module);
                            assembliesList.AddItem(module.Name);
                        }
                    }
                    catch (Exception ex)
                    {
                        Console.WriteLine($"Failed to load {filePath}\n{ex.Message}");
                    }
                }
            }
        }

        private void removeAssemblyBtn_Click(object sender, EventArgs e)
        {
            if (assembliesList.SelectedItem != null)
            {
                var str = assembliesList.SelectedItem.ToString();
                if (!selectedAssemblies.ContainsKey(str))
                    return;

                selectedAssemblies.Remove(str);
                assembliesList.RemoveItem(str);
            }
        }

        private void populate_Click(object sender, EventArgs e)
        {
            instance = new GInstance(selectedAssemblies.Values.ToArray(), externalcheck.Checked, !excludeByDefault.Checked);

            typeMap = new Dictionary<string, GType>();
            fieldMap = new Dictionary<string, GField>();
            methodMap = new Dictionary<string, GMethod>();

            foreach (var type in instance.Types.Values)
            {
                if (!typeMap.ContainsKey(type.SDKFullName))
                    typeMap.Add(type.SDKFullName, type);

                foreach (var x in type.Fields.Values)
                {
                    if (!fieldMap.ContainsKey(x.SDKFullName))
                        fieldMap.Add(x.SDKFullName, x);
                }
                foreach (var x in type.Methods.Values)
                {
                    if (!methodMap.ContainsKey(x.SDKFullName))
                        methodMap.Add(x.SDKFullName, x);
                }
            }

            refreshLists();
            refreshTypeSearch();
            refreshFieldSearch();
            refreshMethodSearch();

            generateBtn.Enabled = true;
        }

        private void typeSearchBtn_Click(object sender, EventArgs e)
        {
            refreshTypeSearch();
        }

        private static void refreshLists() // should only call when include/exclude something
        {
            List<string> tempIncludedTypes = new List<string>();
            List<string> tempExcludedTypes = new List<string>();

            List<string> tempIncludedFields = new List<string>();
            List<string> tempExcludedFields = new List<string>();

            List<string> tempIncludedMethods = new List<string>();
            List<string> tempExcludedMethods = new List<string>();

            foreach (var type in instance.Types.Values)
            {
                if (type.Included)
                {
                    tempIncludedTypes.Add(type.SDKFullName);

                    foreach (var field in type.Fields.Values)
                    {
                        if (field.Parent.IsValueType) // dont want user to exclude struct fields
                            continue;

                        if (field.Included)
                            tempIncludedFields.Add(field.SDKFullName);
                        else
                            tempExcludedFields.Add(field.SDKFullName);
                    }

                    foreach (var method in type.Methods.Values)
                    {
                        if (method.Included)
                            tempIncludedMethods.Add(method.SDKFullName);
                        else
                            tempExcludedMethods.Add(method.SDKFullName);
                    }
                }
                else
                    tempExcludedTypes.Add(type.SDKFullName);
            }

            realIncludedTypes = tempIncludedTypes;
            realExcludedTypes = tempExcludedTypes;

            realExcludedFields = tempExcludedFields;
            realIncludedFields = tempIncludedFields;

            realExcludedMethods = tempExcludedMethods;
            realIncludedMethods = tempIncludedMethods;
        }

        private void typeExcludeBtn_Click(object sender, EventArgs e)
        {
            foreach (string item in typesIncludedList.SelectedItems)
            {
                if (typeMap.TryGetValue(item, out var type))
                    type.Included = false;
            }
            refreshLists();
            refreshTypeSearch();
            refreshFieldSearch();
            refreshMethodSearch();
        }

        private void typeIncludeBtn_Click(object sender, EventArgs e)
        {
            foreach (string item in typesExcludedList.SelectedItems)
            {
                if (typeMap.TryGetValue(item, out var type))
                    type.Included = true;
            }
            refreshLists();
            refreshTypeSearch();
            refreshFieldSearch();
            refreshMethodSearch();
        }

        private void refreshTypeSearch()
        {
            typesIncludedList.Items.Clear();
            typesExcludedList.Items.Clear();
            if (String.IsNullOrEmpty(typesSearch.Text) || typesSearch.Text.Length < 3)
            {
                typesIncludedList.Items.AddRange(realIncludedTypes.ToArray());
                typesExcludedList.Items.AddRange(realExcludedTypes.ToArray());
                return;
            }
            var txt = typesSearch.Text.ToLower();

            foreach (string str in realIncludedTypes.ToArray())
                if (str.ToLower().Contains(txt))
                    typesIncludedList.Items.Add(str);

            foreach (string str in realExcludedTypes.ToArray())
                if (str.ToLower().Contains(txt))
                    typesExcludedList.Items.Add(str);
        }

        private void refreshFieldSearch()
        {
            fieldsIncludedList.Items.Clear();
            fieldsExcludedList.Items.Clear();
            if (String.IsNullOrEmpty(fieldSearch.Text) || fieldSearch.Text.Length < 3)
            {
                fieldsIncludedList.Items.AddRange(realIncludedFields.ToArray());
                fieldsExcludedList.Items.AddRange(realExcludedFields.ToArray());
                return;
            }
            var txt = fieldSearch.Text.ToLower();

            foreach (string str in realIncludedFields.ToArray())
                if (str.ToLower().Contains(txt))
                    fieldsIncludedList.Items.Add(str);

            foreach (string str in realExcludedFields.ToArray())
                if (str.ToLower().Contains(txt))
                    fieldsExcludedList.Items.Add(str);
        }

        private void refreshMethodSearch()
        {
            methodsIncludedList.Items.Clear();
            methodsExcludedList.Items.Clear();
            if (String.IsNullOrEmpty(methodSearch.Text) || methodSearch.Text.Length < 3)
            {
                methodsIncludedList.Items.AddRange(realIncludedMethods.ToArray());
                methodsExcludedList.Items.AddRange(realExcludedMethods.ToArray());
                return;
            }
            var txt = methodSearch.Text.ToLower();

            foreach (string str in realIncludedMethods.ToArray())
                if (str.ToLower().Contains(txt))
                    methodsIncludedList.Items.Add(str);

            foreach (string str in realExcludedMethods.ToArray())
                if (str.ToLower().Contains(txt))
                    methodsExcludedList.Items.Add(str);
        }

        private void fieldSearchBtn_Click(object sender, EventArgs e)
        {
            refreshFieldSearch();
        }

        private void fieldsIncludeBtn_Click(object sender, EventArgs e)
        {
            foreach (string item in fieldsExcludedList.SelectedItems)
            {
                if (fieldMap.TryGetValue(item, out var field))
                    field.Included = true;
            }
            refreshLists();
            refreshFieldSearch();
        }

        private void fieldsExcludeBtn_Click(object sender, EventArgs e)
        {
            foreach (string item in fieldsIncludedList.SelectedItems)
            {
                if (fieldMap.TryGetValue(item, out var field))
                    field.Included = false;
            }
            refreshLists();
            refreshFieldSearch();
        }

        private void methodSearchBtn_Click(object sender, EventArgs e)
        {
            refreshMethodSearch();
        }

        private void methodExlcudeBtn_Click(object sender, EventArgs e)
        {
            foreach (string item in methodsIncludedList.SelectedItems)
            {
                if (methodMap.TryGetValue(item, out var method))
                    method.Included = false;
            }
            refreshLists();
            refreshMethodSearch();
        }

        private void methodIncludeBtn_Click(object sender, EventArgs e)
        {
            foreach (string item in methodsExcludedList.SelectedItems)
            {
                if (methodMap.TryGetValue(item, out var method))
                {
                    Console.WriteLine(method.SDKFullName);
                    method.Included = true;
                }
            }
            refreshLists();
            refreshMethodSearch();
        }

        private readonly object monitor = new object();

        private void generateBtn_Click(object sender, EventArgs e)
        {
            var openDir = new FolderBrowserDialog();
            openDir.Description = "Output Path";
            DialogResult res = openDir.ShowDialog();

            if (res == DialogResult.OK && !String.IsNullOrWhiteSpace(openDir.SelectedPath))
            {
                instance.Generate(openDir.SelectedPath + $"/{projName.Text}");
                MessageBox.Show($"Generation Complete!");
            }
        }
    }
}
