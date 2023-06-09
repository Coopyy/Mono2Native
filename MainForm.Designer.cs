namespace MonoSDKGenerator
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.openAssemblyDialog = new System.Windows.Forms.OpenFileDialog();
            this.styleManager1 = new MetroSet_UI.Components.StyleManager();
            this.metroSetControlBox1 = new MetroSet_UI.Controls.MetroSetControlBox();
            this.metroSetTabControl1 = new MetroSet_UI.Controls.MetroSetTabControl();
            this.metroSetSetTabPage4 = new MetroSet_UI.Child.MetroSetSetTabPage();
            this.excludeByDefault = new MetroSet_UI.Controls.MetroSetCheckBox();
            this.projName = new MetroSet_UI.Controls.MetroSetTextBox();
            this.assembliesList = new MetroSet_UI.Controls.MetroSetListBox();
            this.generateBtn = new MetroSet_UI.Controls.MetroSetButton();
            this.metroSetLabel1 = new MetroSet_UI.Controls.MetroSetLabel();
            this.addAssemblyBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.externalcheck = new MetroSet_UI.Controls.MetroSetCheckBox();
            this.removeAssemblyBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.populate = new MetroSet_UI.Controls.MetroSetButton();
            this.metroSetSetTabPage1 = new MetroSet_UI.Child.MetroSetSetTabPage();
            this.typeIncludeBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.typeExcludeBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.typesSearchBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.typesSearch = new MetroSet_UI.Controls.MetroSetTextBox();
            this.metroSetLabel4 = new MetroSet_UI.Controls.MetroSetLabel();
            this.typesExcludedList = new System.Windows.Forms.ListBox();
            this.typesIncludedList = new System.Windows.Forms.ListBox();
            this.metroSetLabel3 = new MetroSet_UI.Controls.MetroSetLabel();
            this.metroSetSetTabPage2 = new MetroSet_UI.Child.MetroSetSetTabPage();
            this.fieldsIncludeBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.fieldsExcludeBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.fieldSearchBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.fieldSearch = new MetroSet_UI.Controls.MetroSetTextBox();
            this.metroSetLabel5 = new MetroSet_UI.Controls.MetroSetLabel();
            this.fieldsExcludedList = new System.Windows.Forms.ListBox();
            this.fieldsIncludedList = new System.Windows.Forms.ListBox();
            this.metroSetLabel6 = new MetroSet_UI.Controls.MetroSetLabel();
            this.metroSetSetTabPage3 = new MetroSet_UI.Child.MetroSetSetTabPage();
            this.methodIncludeBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.methodExlcudeBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.methodSearchBtn = new MetroSet_UI.Controls.MetroSetDefaultButton();
            this.methodSearch = new MetroSet_UI.Controls.MetroSetTextBox();
            this.metroSetLabel7 = new MetroSet_UI.Controls.MetroSetLabel();
            this.methodsExcludedList = new System.Windows.Forms.ListBox();
            this.methodsIncludedList = new System.Windows.Forms.ListBox();
            this.metroSetLabel8 = new MetroSet_UI.Controls.MetroSetLabel();
            this.metroSetProgressBar1 = new MetroSet_UI.Controls.MetroSetProgressBar();
            this.metroSetTabControl1.SuspendLayout();
            this.metroSetSetTabPage4.SuspendLayout();
            this.metroSetSetTabPage1.SuspendLayout();
            this.metroSetSetTabPage2.SuspendLayout();
            this.metroSetSetTabPage3.SuspendLayout();
            this.SuspendLayout();
            // 
            // openAssemblyDialog
            // 
            this.openAssemblyDialog.FileName = "openFileDialog1";
            // 
            // styleManager1
            // 
            this.styleManager1.CustomTheme = "C:\\Users\\Coopyy\\AppData\\Roaming\\Microsoft\\Windows\\Templates\\ThemeFile.xml";
            this.styleManager1.MetroForm = this;
            this.styleManager1.Style = MetroSet_UI.Enums.Style.Dark;
            this.styleManager1.ThemeAuthor = "Narwin";
            this.styleManager1.ThemeName = "MetroDark";
            // 
            // metroSetControlBox1
            // 
            this.metroSetControlBox1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.metroSetControlBox1.CloseHoverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(183)))), ((int)(((byte)(40)))), ((int)(((byte)(40)))));
            this.metroSetControlBox1.CloseHoverForeColor = System.Drawing.Color.White;
            this.metroSetControlBox1.CloseNormalForeColor = System.Drawing.Color.Gray;
            this.metroSetControlBox1.DisabledForeColor = System.Drawing.Color.Silver;
            this.metroSetControlBox1.IsDerivedStyle = true;
            this.metroSetControlBox1.Location = new System.Drawing.Point(840, 2);
            this.metroSetControlBox1.MaximizeBox = true;
            this.metroSetControlBox1.MaximizeHoverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(238)))), ((int)(((byte)(238)))), ((int)(((byte)(238)))));
            this.metroSetControlBox1.MaximizeHoverForeColor = System.Drawing.Color.Gray;
            this.metroSetControlBox1.MaximizeNormalForeColor = System.Drawing.Color.Gray;
            this.metroSetControlBox1.MinimizeBox = true;
            this.metroSetControlBox1.MinimizeHoverBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(238)))), ((int)(((byte)(238)))), ((int)(((byte)(238)))));
            this.metroSetControlBox1.MinimizeHoverForeColor = System.Drawing.Color.Gray;
            this.metroSetControlBox1.MinimizeNormalForeColor = System.Drawing.Color.Gray;
            this.metroSetControlBox1.Name = "metroSetControlBox1";
            this.metroSetControlBox1.Size = new System.Drawing.Size(100, 25);
            this.metroSetControlBox1.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetControlBox1.StyleManager = this.styleManager1;
            this.metroSetControlBox1.TabIndex = 0;
            this.metroSetControlBox1.Text = "metroSetControlBox1";
            this.metroSetControlBox1.ThemeAuthor = "Narwin";
            this.metroSetControlBox1.ThemeName = "MetroDark";
            // 
            // metroSetTabControl1
            // 
            this.metroSetTabControl1.AnimateEasingType = MetroSet_UI.Enums.EasingType.CubeOut;
            this.metroSetTabControl1.AnimateTime = 200;
            this.metroSetTabControl1.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.metroSetTabControl1.Controls.Add(this.metroSetSetTabPage4);
            this.metroSetTabControl1.Controls.Add(this.metroSetSetTabPage1);
            this.metroSetTabControl1.Controls.Add(this.metroSetSetTabPage2);
            this.metroSetTabControl1.Controls.Add(this.metroSetSetTabPage3);
            this.metroSetTabControl1.Cursor = System.Windows.Forms.Cursors.Hand;
            this.metroSetTabControl1.IsDerivedStyle = true;
            this.metroSetTabControl1.ItemSize = new System.Drawing.Size(100, 38);
            this.metroSetTabControl1.Location = new System.Drawing.Point(15, 53);
            this.metroSetTabControl1.Name = "metroSetTabControl1";
            this.metroSetTabControl1.SelectedIndex = 3;
            this.metroSetTabControl1.SelectedTextColor = System.Drawing.Color.White;
            this.metroSetTabControl1.Size = new System.Drawing.Size(911, 625);
            this.metroSetTabControl1.SizeMode = System.Windows.Forms.TabSizeMode.Fixed;
            this.metroSetTabControl1.Speed = 100;
            this.metroSetTabControl1.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetTabControl1.StyleManager = this.styleManager1;
            this.metroSetTabControl1.TabIndex = 15;
            this.metroSetTabControl1.ThemeAuthor = "Narwin";
            this.metroSetTabControl1.ThemeName = "MetroDark";
            this.metroSetTabControl1.UnselectedTextColor = System.Drawing.Color.Gray;
            this.metroSetTabControl1.UseAnimation = false;
            // 
            // metroSetSetTabPage4
            // 
            this.metroSetSetTabPage4.BaseColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.metroSetSetTabPage4.Controls.Add(this.excludeByDefault);
            this.metroSetSetTabPage4.Controls.Add(this.projName);
            this.metroSetSetTabPage4.Controls.Add(this.assembliesList);
            this.metroSetSetTabPage4.Controls.Add(this.generateBtn);
            this.metroSetSetTabPage4.Controls.Add(this.metroSetLabel1);
            this.metroSetSetTabPage4.Controls.Add(this.addAssemblyBtn);
            this.metroSetSetTabPage4.Controls.Add(this.externalcheck);
            this.metroSetSetTabPage4.Controls.Add(this.removeAssemblyBtn);
            this.metroSetSetTabPage4.Controls.Add(this.populate);
            this.metroSetSetTabPage4.Font = null;
            this.metroSetSetTabPage4.ImageIndex = 0;
            this.metroSetSetTabPage4.ImageKey = null;
            this.metroSetSetTabPage4.IsDerivedStyle = true;
            this.metroSetSetTabPage4.Location = new System.Drawing.Point(4, 42);
            this.metroSetSetTabPage4.Name = "metroSetSetTabPage4";
            this.metroSetSetTabPage4.Size = new System.Drawing.Size(903, 579);
            this.metroSetSetTabPage4.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetSetTabPage4.StyleManager = null;
            this.metroSetSetTabPage4.TabIndex = 7;
            this.metroSetSetTabPage4.Text = "Home";
            this.metroSetSetTabPage4.ThemeAuthor = "Narwin";
            this.metroSetSetTabPage4.ThemeName = "MetroDark";
            this.metroSetSetTabPage4.ToolTipText = null;
            // 
            // excludeByDefault
            // 
            this.excludeByDefault.BackColor = System.Drawing.Color.Transparent;
            this.excludeByDefault.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.excludeByDefault.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(155)))), ((int)(((byte)(155)))), ((int)(((byte)(155)))));
            this.excludeByDefault.Checked = false;
            this.excludeByDefault.CheckSignColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.excludeByDefault.CheckState = MetroSet_UI.Enums.CheckState.Unchecked;
            this.excludeByDefault.Cursor = System.Windows.Forms.Cursors.Hand;
            this.excludeByDefault.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(85)))), ((int)(((byte)(85)))), ((int)(((byte)(85)))));
            this.excludeByDefault.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.excludeByDefault.IsDerivedStyle = true;
            this.excludeByDefault.Location = new System.Drawing.Point(177, 390);
            this.excludeByDefault.Name = "excludeByDefault";
            this.excludeByDefault.SignStyle = MetroSet_UI.Enums.SignStyle.Sign;
            this.excludeByDefault.Size = new System.Drawing.Size(136, 16);
            this.excludeByDefault.Style = MetroSet_UI.Enums.Style.Dark;
            this.excludeByDefault.StyleManager = this.styleManager1;
            this.excludeByDefault.TabIndex = 20;
            this.excludeByDefault.Text = "Exclude By Default";
            this.excludeByDefault.ThemeAuthor = "Narwin";
            this.excludeByDefault.ThemeName = "MetroDark";
            // 
            // projName
            // 
            this.projName.AutoCompleteCustomSource = null;
            this.projName.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.None;
            this.projName.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.None;
            this.projName.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(110)))), ((int)(((byte)(110)))), ((int)(((byte)(110)))));
            this.projName.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.projName.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.projName.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.projName.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.projName.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.projName.Image = null;
            this.projName.IsDerivedStyle = true;
            this.projName.Lines = null;
            this.projName.Location = new System.Drawing.Point(0, 12);
            this.projName.MaxLength = 32767;
            this.projName.Multiline = false;
            this.projName.Name = "projName";
            this.projName.ReadOnly = false;
            this.projName.Size = new System.Drawing.Size(313, 23);
            this.projName.Style = MetroSet_UI.Enums.Style.Dark;
            this.projName.StyleManager = this.styleManager1;
            this.projName.TabIndex = 17;
            this.projName.Text = "New Project";
            this.projName.TextAlign = System.Windows.Forms.HorizontalAlignment.Left;
            this.projName.ThemeAuthor = "Narwin";
            this.projName.ThemeName = "MetroDark";
            this.projName.UseSystemPasswordChar = false;
            this.projName.WatermarkText = "";
            // 
            // assembliesList
            // 
            this.assembliesList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.assembliesList.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.assembliesList.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.assembliesList.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.assembliesList.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.assembliesList.HoveredItemBackColor = System.Drawing.Color.LightGray;
            this.assembliesList.HoveredItemColor = System.Drawing.Color.DimGray;
            this.assembliesList.IsDerivedStyle = true;
            this.assembliesList.ItemHeight = 20;
            this.assembliesList.Location = new System.Drawing.Point(0, 67);
            this.assembliesList.Margin = new System.Windows.Forms.Padding(0);
            this.assembliesList.MultiSelect = true;
            this.assembliesList.Name = "assembliesList";
            this.assembliesList.Padding = new System.Windows.Forms.Padding(0, 0, 5, 0);
            this.assembliesList.SelectedIndex = -1;
            this.assembliesList.SelectedItem = null;
            this.assembliesList.SelectedItemBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.assembliesList.SelectedItemColor = System.Drawing.Color.White;
            this.assembliesList.SelectedText = null;
            this.assembliesList.SelectedValue = null;
            this.assembliesList.ShowBorder = true;
            this.assembliesList.ShowScrollBar = false;
            this.assembliesList.Size = new System.Drawing.Size(312, 279);
            this.assembliesList.Style = MetroSet_UI.Enums.Style.Dark;
            this.assembliesList.StyleManager = this.styleManager1;
            this.assembliesList.TabIndex = 0;
            this.assembliesList.ThemeAuthor = "Narwin";
            this.assembliesList.ThemeName = "MetroDark";
            // 
            // generateBtn
            // 
            this.generateBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(120)))), ((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.generateBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(120)))), ((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.generateBtn.DisabledForeColor = System.Drawing.Color.Gray;
            this.generateBtn.Enabled = false;
            this.generateBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.generateBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(95)))), ((int)(((byte)(207)))), ((int)(((byte)(255)))));
            this.generateBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(95)))), ((int)(((byte)(207)))), ((int)(((byte)(255)))));
            this.generateBtn.HoverTextColor = System.Drawing.Color.White;
            this.generateBtn.IsDerivedStyle = true;
            this.generateBtn.Location = new System.Drawing.Point(0, 441);
            this.generateBtn.Name = "generateBtn";
            this.generateBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.generateBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.generateBtn.NormalTextColor = System.Drawing.Color.White;
            this.generateBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(35)))), ((int)(((byte)(147)))), ((int)(((byte)(195)))));
            this.generateBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(35)))), ((int)(((byte)(147)))), ((int)(((byte)(195)))));
            this.generateBtn.PressTextColor = System.Drawing.Color.White;
            this.generateBtn.Size = new System.Drawing.Size(312, 23);
            this.generateBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.generateBtn.StyleManager = this.styleManager1;
            this.generateBtn.TabIndex = 16;
            this.generateBtn.Text = "Generate";
            this.generateBtn.ThemeAuthor = "Narwin";
            this.generateBtn.ThemeName = "MetroDark";
            this.generateBtn.Click += new System.EventHandler(this.generateBtn_Click);
            // 
            // metroSetLabel1
            // 
            this.metroSetLabel1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel1.IsDerivedStyle = true;
            this.metroSetLabel1.Location = new System.Drawing.Point(-1, 45);
            this.metroSetLabel1.Name = "metroSetLabel1";
            this.metroSetLabel1.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel1.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel1.StyleManager = this.styleManager1;
            this.metroSetLabel1.TabIndex = 1;
            this.metroSetLabel1.Text = "Assemblies";
            this.metroSetLabel1.ThemeAuthor = "Narwin";
            this.metroSetLabel1.ThemeName = "MetroDark";
            // 
            // addAssemblyBtn
            // 
            this.addAssemblyBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.addAssemblyBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.addAssemblyBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.addAssemblyBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.addAssemblyBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.addAssemblyBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.addAssemblyBtn.HoverTextColor = System.Drawing.Color.White;
            this.addAssemblyBtn.IsDerivedStyle = true;
            this.addAssemblyBtn.Location = new System.Drawing.Point(0, 359);
            this.addAssemblyBtn.Name = "addAssemblyBtn";
            this.addAssemblyBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.addAssemblyBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.addAssemblyBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.addAssemblyBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.addAssemblyBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.addAssemblyBtn.PressTextColor = System.Drawing.Color.White;
            this.addAssemblyBtn.Size = new System.Drawing.Size(153, 25);
            this.addAssemblyBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.addAssemblyBtn.StyleManager = this.styleManager1;
            this.addAssemblyBtn.TabIndex = 1;
            this.addAssemblyBtn.Text = "Add";
            this.addAssemblyBtn.ThemeAuthor = "Narwin";
            this.addAssemblyBtn.ThemeName = "MetroDark";
            this.addAssemblyBtn.Click += new System.EventHandler(this.addAssemblyBtn_Click_1);
            // 
            // externalcheck
            // 
            this.externalcheck.BackColor = System.Drawing.Color.Transparent;
            this.externalcheck.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.externalcheck.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(155)))), ((int)(((byte)(155)))), ((int)(((byte)(155)))));
            this.externalcheck.Checked = false;
            this.externalcheck.CheckSignColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.externalcheck.CheckState = MetroSet_UI.Enums.CheckState.Unchecked;
            this.externalcheck.Cursor = System.Windows.Forms.Cursors.Hand;
            this.externalcheck.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(85)))), ((int)(((byte)(85)))), ((int)(((byte)(85)))));
            this.externalcheck.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.externalcheck.IsDerivedStyle = true;
            this.externalcheck.Location = new System.Drawing.Point(0, 390);
            this.externalcheck.Name = "externalcheck";
            this.externalcheck.SignStyle = MetroSet_UI.Enums.SignStyle.Sign;
            this.externalcheck.Size = new System.Drawing.Size(75, 16);
            this.externalcheck.Style = MetroSet_UI.Enums.Style.Dark;
            this.externalcheck.StyleManager = this.styleManager1;
            this.externalcheck.TabIndex = 9;
            this.externalcheck.Text = "External";
            this.externalcheck.ThemeAuthor = "Narwin";
            this.externalcheck.ThemeName = "MetroDark";
            // 
            // removeAssemblyBtn
            // 
            this.removeAssemblyBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.removeAssemblyBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.removeAssemblyBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.removeAssemblyBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.removeAssemblyBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.removeAssemblyBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.removeAssemblyBtn.HoverTextColor = System.Drawing.Color.White;
            this.removeAssemblyBtn.IsDerivedStyle = true;
            this.removeAssemblyBtn.Location = new System.Drawing.Point(160, 359);
            this.removeAssemblyBtn.Name = "removeAssemblyBtn";
            this.removeAssemblyBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.removeAssemblyBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.removeAssemblyBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.removeAssemblyBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.removeAssemblyBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.removeAssemblyBtn.PressTextColor = System.Drawing.Color.White;
            this.removeAssemblyBtn.Size = new System.Drawing.Size(153, 25);
            this.removeAssemblyBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.removeAssemblyBtn.StyleManager = this.styleManager1;
            this.removeAssemblyBtn.TabIndex = 7;
            this.removeAssemblyBtn.Text = "Remove";
            this.removeAssemblyBtn.ThemeAuthor = "Narwin";
            this.removeAssemblyBtn.ThemeName = "MetroDark";
            this.removeAssemblyBtn.Click += new System.EventHandler(this.removeAssemblyBtn_Click);
            // 
            // populate
            // 
            this.populate.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(120)))), ((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.populate.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(120)))), ((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.populate.DisabledForeColor = System.Drawing.Color.Gray;
            this.populate.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.populate.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(95)))), ((int)(((byte)(207)))), ((int)(((byte)(255)))));
            this.populate.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(95)))), ((int)(((byte)(207)))), ((int)(((byte)(255)))));
            this.populate.HoverTextColor = System.Drawing.Color.White;
            this.populate.IsDerivedStyle = true;
            this.populate.Location = new System.Drawing.Point(-1, 412);
            this.populate.Name = "populate";
            this.populate.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.populate.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.populate.NormalTextColor = System.Drawing.Color.White;
            this.populate.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(35)))), ((int)(((byte)(147)))), ((int)(((byte)(195)))));
            this.populate.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(35)))), ((int)(((byte)(147)))), ((int)(((byte)(195)))));
            this.populate.PressTextColor = System.Drawing.Color.White;
            this.populate.Size = new System.Drawing.Size(313, 23);
            this.populate.Style = MetroSet_UI.Enums.Style.Dark;
            this.populate.StyleManager = this.styleManager1;
            this.populate.TabIndex = 8;
            this.populate.Text = "Populate";
            this.populate.ThemeAuthor = "Narwin";
            this.populate.ThemeName = "MetroDark";
            this.populate.Click += new System.EventHandler(this.populate_Click);
            // 
            // metroSetSetTabPage1
            // 
            this.metroSetSetTabPage1.BaseColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.metroSetSetTabPage1.Controls.Add(this.typeIncludeBtn);
            this.metroSetSetTabPage1.Controls.Add(this.typeExcludeBtn);
            this.metroSetSetTabPage1.Controls.Add(this.typesSearchBtn);
            this.metroSetSetTabPage1.Controls.Add(this.typesSearch);
            this.metroSetSetTabPage1.Controls.Add(this.metroSetLabel4);
            this.metroSetSetTabPage1.Controls.Add(this.typesExcludedList);
            this.metroSetSetTabPage1.Controls.Add(this.typesIncludedList);
            this.metroSetSetTabPage1.Controls.Add(this.metroSetLabel3);
            this.metroSetSetTabPage1.Font = null;
            this.metroSetSetTabPage1.ImageIndex = 0;
            this.metroSetSetTabPage1.ImageKey = null;
            this.metroSetSetTabPage1.IsDerivedStyle = true;
            this.metroSetSetTabPage1.Location = new System.Drawing.Point(4, 42);
            this.metroSetSetTabPage1.Name = "metroSetSetTabPage1";
            this.metroSetSetTabPage1.Size = new System.Drawing.Size(903, 579);
            this.metroSetSetTabPage1.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetSetTabPage1.StyleManager = null;
            this.metroSetSetTabPage1.TabIndex = 2;
            this.metroSetSetTabPage1.Text = "Types";
            this.metroSetSetTabPage1.ThemeAuthor = "Narwin";
            this.metroSetSetTabPage1.ThemeName = "MetroDark";
            this.metroSetSetTabPage1.ToolTipText = null;
            // 
            // typeIncludeBtn
            // 
            this.typeIncludeBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.typeIncludeBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typeIncludeBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typeIncludeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.typeIncludeBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typeIncludeBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typeIncludeBtn.HoverTextColor = System.Drawing.Color.White;
            this.typeIncludeBtn.IsDerivedStyle = true;
            this.typeIncludeBtn.Location = new System.Drawing.Point(472, 547);
            this.typeIncludeBtn.Name = "typeIncludeBtn";
            this.typeIncludeBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.typeIncludeBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.typeIncludeBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.typeIncludeBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.typeIncludeBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.typeIncludeBtn.PressTextColor = System.Drawing.Color.White;
            this.typeIncludeBtn.Size = new System.Drawing.Size(431, 23);
            this.typeIncludeBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.typeIncludeBtn.StyleManager = null;
            this.typeIncludeBtn.TabIndex = 28;
            this.typeIncludeBtn.Text = "Include";
            this.typeIncludeBtn.ThemeAuthor = "Narwin";
            this.typeIncludeBtn.ThemeName = "MetroDark";
            this.typeIncludeBtn.Click += new System.EventHandler(this.typeIncludeBtn_Click);
            // 
            // typeExcludeBtn
            // 
            this.typeExcludeBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.typeExcludeBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typeExcludeBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typeExcludeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.typeExcludeBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typeExcludeBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typeExcludeBtn.HoverTextColor = System.Drawing.Color.White;
            this.typeExcludeBtn.IsDerivedStyle = true;
            this.typeExcludeBtn.Location = new System.Drawing.Point(0, 547);
            this.typeExcludeBtn.Name = "typeExcludeBtn";
            this.typeExcludeBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.typeExcludeBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.typeExcludeBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.typeExcludeBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.typeExcludeBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.typeExcludeBtn.PressTextColor = System.Drawing.Color.White;
            this.typeExcludeBtn.Size = new System.Drawing.Size(431, 23);
            this.typeExcludeBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.typeExcludeBtn.StyleManager = null;
            this.typeExcludeBtn.TabIndex = 27;
            this.typeExcludeBtn.Text = "Exclude";
            this.typeExcludeBtn.ThemeAuthor = "Narwin";
            this.typeExcludeBtn.ThemeName = "MetroDark";
            this.typeExcludeBtn.Click += new System.EventHandler(this.typeExcludeBtn_Click);
            // 
            // typesSearchBtn
            // 
            this.typesSearchBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.typesSearchBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typesSearchBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typesSearchBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.typesSearchBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typesSearchBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typesSearchBtn.HoverTextColor = System.Drawing.Color.White;
            this.typesSearchBtn.IsDerivedStyle = true;
            this.typesSearchBtn.Location = new System.Drawing.Point(794, 9);
            this.typesSearchBtn.Name = "typesSearchBtn";
            this.typesSearchBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.typesSearchBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.typesSearchBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.typesSearchBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.typesSearchBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.typesSearchBtn.PressTextColor = System.Drawing.Color.White;
            this.typesSearchBtn.Size = new System.Drawing.Size(109, 24);
            this.typesSearchBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.typesSearchBtn.StyleManager = null;
            this.typesSearchBtn.TabIndex = 26;
            this.typesSearchBtn.Text = "Search";
            this.typesSearchBtn.ThemeAuthor = "Narwin";
            this.typesSearchBtn.ThemeName = "MetroDark";
            this.typesSearchBtn.Click += new System.EventHandler(this.typeSearchBtn_Click);
            // 
            // typesSearch
            // 
            this.typesSearch.AutoCompleteCustomSource = null;
            this.typesSearch.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.None;
            this.typesSearch.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.None;
            this.typesSearch.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(110)))), ((int)(((byte)(110)))), ((int)(((byte)(110)))));
            this.typesSearch.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.typesSearch.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typesSearch.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.typesSearch.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.typesSearch.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.typesSearch.Image = null;
            this.typesSearch.IsDerivedStyle = true;
            this.typesSearch.Lines = null;
            this.typesSearch.Location = new System.Drawing.Point(0, 9);
            this.typesSearch.MaxLength = 32767;
            this.typesSearch.Multiline = false;
            this.typesSearch.Name = "typesSearch";
            this.typesSearch.ReadOnly = false;
            this.typesSearch.Size = new System.Drawing.Size(788, 24);
            this.typesSearch.Style = MetroSet_UI.Enums.Style.Dark;
            this.typesSearch.StyleManager = null;
            this.typesSearch.TabIndex = 25;
            this.typesSearch.TextAlign = System.Windows.Forms.HorizontalAlignment.Left;
            this.typesSearch.ThemeAuthor = "Narwin";
            this.typesSearch.ThemeName = "MetroDark";
            this.typesSearch.UseSystemPasswordChar = false;
            this.typesSearch.WatermarkText = "";
            // 
            // metroSetLabel4
            // 
            this.metroSetLabel4.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel4.IsDerivedStyle = true;
            this.metroSetLabel4.Location = new System.Drawing.Point(0, 36);
            this.metroSetLabel4.Name = "metroSetLabel4";
            this.metroSetLabel4.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel4.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel4.StyleManager = this.styleManager1;
            this.metroSetLabel4.TabIndex = 24;
            this.metroSetLabel4.Text = "Included";
            this.metroSetLabel4.ThemeAuthor = "Narwin";
            this.metroSetLabel4.ThemeName = "MetroDark";
            // 
            // typesExcludedList
            // 
            this.typesExcludedList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.typesExcludedList.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.typesExcludedList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typesExcludedList.FormattingEnabled = true;
            this.typesExcludedList.HorizontalScrollbar = true;
            this.typesExcludedList.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.typesExcludedList.ItemHeight = 16;
            this.typesExcludedList.Location = new System.Drawing.Point(472, 58);
            this.typesExcludedList.Name = "typesExcludedList";
            this.typesExcludedList.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.typesExcludedList.Size = new System.Drawing.Size(431, 482);
            this.typesExcludedList.TabIndex = 23;
            // 
            // typesIncludedList
            // 
            this.typesIncludedList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.typesIncludedList.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.typesIncludedList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.typesIncludedList.FormattingEnabled = true;
            this.typesIncludedList.HorizontalScrollbar = true;
            this.typesIncludedList.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.typesIncludedList.ItemHeight = 16;
            this.typesIncludedList.Location = new System.Drawing.Point(0, 58);
            this.typesIncludedList.Name = "typesIncludedList";
            this.typesIncludedList.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.typesIncludedList.Size = new System.Drawing.Size(431, 482);
            this.typesIncludedList.TabIndex = 22;
            // 
            // metroSetLabel3
            // 
            this.metroSetLabel3.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel3.IsDerivedStyle = true;
            this.metroSetLabel3.Location = new System.Drawing.Point(472, 36);
            this.metroSetLabel3.Name = "metroSetLabel3";
            this.metroSetLabel3.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel3.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel3.StyleManager = this.styleManager1;
            this.metroSetLabel3.TabIndex = 20;
            this.metroSetLabel3.Text = "Excluded";
            this.metroSetLabel3.ThemeAuthor = "Narwin";
            this.metroSetLabel3.ThemeName = "MetroDark";
            // 
            // metroSetSetTabPage2
            // 
            this.metroSetSetTabPage2.BaseColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.metroSetSetTabPage2.Controls.Add(this.fieldsIncludeBtn);
            this.metroSetSetTabPage2.Controls.Add(this.fieldsExcludeBtn);
            this.metroSetSetTabPage2.Controls.Add(this.fieldSearchBtn);
            this.metroSetSetTabPage2.Controls.Add(this.fieldSearch);
            this.metroSetSetTabPage2.Controls.Add(this.metroSetLabel5);
            this.metroSetSetTabPage2.Controls.Add(this.fieldsExcludedList);
            this.metroSetSetTabPage2.Controls.Add(this.fieldsIncludedList);
            this.metroSetSetTabPage2.Controls.Add(this.metroSetLabel6);
            this.metroSetSetTabPage2.Font = null;
            this.metroSetSetTabPage2.ImageIndex = 0;
            this.metroSetSetTabPage2.ImageKey = null;
            this.metroSetSetTabPage2.IsDerivedStyle = true;
            this.metroSetSetTabPage2.Location = new System.Drawing.Point(4, 42);
            this.metroSetSetTabPage2.Name = "metroSetSetTabPage2";
            this.metroSetSetTabPage2.Size = new System.Drawing.Size(903, 579);
            this.metroSetSetTabPage2.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetSetTabPage2.StyleManager = null;
            this.metroSetSetTabPage2.TabIndex = 5;
            this.metroSetSetTabPage2.Text = "Fields";
            this.metroSetSetTabPage2.ThemeAuthor = "Narwin";
            this.metroSetSetTabPage2.ThemeName = "MetroDark";
            this.metroSetSetTabPage2.ToolTipText = null;
            // 
            // fieldsIncludeBtn
            // 
            this.fieldsIncludeBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.fieldsIncludeBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldsIncludeBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldsIncludeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.fieldsIncludeBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldsIncludeBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldsIncludeBtn.HoverTextColor = System.Drawing.Color.White;
            this.fieldsIncludeBtn.IsDerivedStyle = true;
            this.fieldsIncludeBtn.Location = new System.Drawing.Point(472, 547);
            this.fieldsIncludeBtn.Name = "fieldsIncludeBtn";
            this.fieldsIncludeBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.fieldsIncludeBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.fieldsIncludeBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.fieldsIncludeBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.fieldsIncludeBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.fieldsIncludeBtn.PressTextColor = System.Drawing.Color.White;
            this.fieldsIncludeBtn.Size = new System.Drawing.Size(431, 23);
            this.fieldsIncludeBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.fieldsIncludeBtn.StyleManager = null;
            this.fieldsIncludeBtn.TabIndex = 36;
            this.fieldsIncludeBtn.Text = "Include";
            this.fieldsIncludeBtn.ThemeAuthor = "Narwin";
            this.fieldsIncludeBtn.ThemeName = "MetroDark";
            this.fieldsIncludeBtn.Click += new System.EventHandler(this.fieldsIncludeBtn_Click);
            // 
            // fieldsExcludeBtn
            // 
            this.fieldsExcludeBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.fieldsExcludeBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldsExcludeBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldsExcludeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.fieldsExcludeBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldsExcludeBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldsExcludeBtn.HoverTextColor = System.Drawing.Color.White;
            this.fieldsExcludeBtn.IsDerivedStyle = true;
            this.fieldsExcludeBtn.Location = new System.Drawing.Point(0, 547);
            this.fieldsExcludeBtn.Name = "fieldsExcludeBtn";
            this.fieldsExcludeBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.fieldsExcludeBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.fieldsExcludeBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.fieldsExcludeBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.fieldsExcludeBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.fieldsExcludeBtn.PressTextColor = System.Drawing.Color.White;
            this.fieldsExcludeBtn.Size = new System.Drawing.Size(431, 23);
            this.fieldsExcludeBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.fieldsExcludeBtn.StyleManager = null;
            this.fieldsExcludeBtn.TabIndex = 35;
            this.fieldsExcludeBtn.Text = "Exclude";
            this.fieldsExcludeBtn.ThemeAuthor = "Narwin";
            this.fieldsExcludeBtn.ThemeName = "MetroDark";
            this.fieldsExcludeBtn.Click += new System.EventHandler(this.fieldsExcludeBtn_Click);
            // 
            // fieldSearchBtn
            // 
            this.fieldSearchBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.fieldSearchBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldSearchBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldSearchBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.fieldSearchBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldSearchBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldSearchBtn.HoverTextColor = System.Drawing.Color.White;
            this.fieldSearchBtn.IsDerivedStyle = true;
            this.fieldSearchBtn.Location = new System.Drawing.Point(794, 9);
            this.fieldSearchBtn.Name = "fieldSearchBtn";
            this.fieldSearchBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.fieldSearchBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.fieldSearchBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.fieldSearchBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.fieldSearchBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.fieldSearchBtn.PressTextColor = System.Drawing.Color.White;
            this.fieldSearchBtn.Size = new System.Drawing.Size(109, 24);
            this.fieldSearchBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.fieldSearchBtn.StyleManager = null;
            this.fieldSearchBtn.TabIndex = 34;
            this.fieldSearchBtn.Text = "Search";
            this.fieldSearchBtn.ThemeAuthor = "Narwin";
            this.fieldSearchBtn.ThemeName = "MetroDark";
            this.fieldSearchBtn.Click += new System.EventHandler(this.fieldSearchBtn_Click);
            // 
            // fieldSearch
            // 
            this.fieldSearch.AutoCompleteCustomSource = null;
            this.fieldSearch.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.None;
            this.fieldSearch.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.None;
            this.fieldSearch.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(110)))), ((int)(((byte)(110)))), ((int)(((byte)(110)))));
            this.fieldSearch.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.fieldSearch.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldSearch.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.fieldSearch.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.fieldSearch.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.fieldSearch.Image = null;
            this.fieldSearch.IsDerivedStyle = true;
            this.fieldSearch.Lines = null;
            this.fieldSearch.Location = new System.Drawing.Point(0, 9);
            this.fieldSearch.MaxLength = 32767;
            this.fieldSearch.Multiline = false;
            this.fieldSearch.Name = "fieldSearch";
            this.fieldSearch.ReadOnly = false;
            this.fieldSearch.Size = new System.Drawing.Size(788, 24);
            this.fieldSearch.Style = MetroSet_UI.Enums.Style.Dark;
            this.fieldSearch.StyleManager = null;
            this.fieldSearch.TabIndex = 33;
            this.fieldSearch.TextAlign = System.Windows.Forms.HorizontalAlignment.Left;
            this.fieldSearch.ThemeAuthor = "Narwin";
            this.fieldSearch.ThemeName = "MetroDark";
            this.fieldSearch.UseSystemPasswordChar = false;
            this.fieldSearch.WatermarkText = "";
            // 
            // metroSetLabel5
            // 
            this.metroSetLabel5.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel5.IsDerivedStyle = true;
            this.metroSetLabel5.Location = new System.Drawing.Point(0, 36);
            this.metroSetLabel5.Name = "metroSetLabel5";
            this.metroSetLabel5.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel5.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel5.StyleManager = this.styleManager1;
            this.metroSetLabel5.TabIndex = 32;
            this.metroSetLabel5.Text = "Included";
            this.metroSetLabel5.ThemeAuthor = "Narwin";
            this.metroSetLabel5.ThemeName = "MetroDark";
            // 
            // fieldsExcludedList
            // 
            this.fieldsExcludedList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.fieldsExcludedList.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.fieldsExcludedList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldsExcludedList.FormattingEnabled = true;
            this.fieldsExcludedList.HorizontalScrollbar = true;
            this.fieldsExcludedList.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.fieldsExcludedList.ItemHeight = 16;
            this.fieldsExcludedList.Location = new System.Drawing.Point(472, 58);
            this.fieldsExcludedList.Name = "fieldsExcludedList";
            this.fieldsExcludedList.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.fieldsExcludedList.Size = new System.Drawing.Size(431, 482);
            this.fieldsExcludedList.TabIndex = 31;
            // 
            // fieldsIncludedList
            // 
            this.fieldsIncludedList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.fieldsIncludedList.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.fieldsIncludedList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.fieldsIncludedList.FormattingEnabled = true;
            this.fieldsIncludedList.HorizontalScrollbar = true;
            this.fieldsIncludedList.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.fieldsIncludedList.ItemHeight = 16;
            this.fieldsIncludedList.Location = new System.Drawing.Point(0, 58);
            this.fieldsIncludedList.Name = "fieldsIncludedList";
            this.fieldsIncludedList.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.fieldsIncludedList.Size = new System.Drawing.Size(431, 482);
            this.fieldsIncludedList.TabIndex = 30;
            // 
            // metroSetLabel6
            // 
            this.metroSetLabel6.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel6.IsDerivedStyle = true;
            this.metroSetLabel6.Location = new System.Drawing.Point(472, 36);
            this.metroSetLabel6.Name = "metroSetLabel6";
            this.metroSetLabel6.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel6.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel6.StyleManager = this.styleManager1;
            this.metroSetLabel6.TabIndex = 29;
            this.metroSetLabel6.Text = "Excluded";
            this.metroSetLabel6.ThemeAuthor = "Narwin";
            this.metroSetLabel6.ThemeName = "MetroDark";
            // 
            // metroSetSetTabPage3
            // 
            this.metroSetSetTabPage3.BaseColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.metroSetSetTabPage3.Controls.Add(this.methodIncludeBtn);
            this.metroSetSetTabPage3.Controls.Add(this.methodExlcudeBtn);
            this.metroSetSetTabPage3.Controls.Add(this.methodSearchBtn);
            this.metroSetSetTabPage3.Controls.Add(this.methodSearch);
            this.metroSetSetTabPage3.Controls.Add(this.metroSetLabel7);
            this.metroSetSetTabPage3.Controls.Add(this.methodsExcludedList);
            this.metroSetSetTabPage3.Controls.Add(this.methodsIncludedList);
            this.metroSetSetTabPage3.Controls.Add(this.metroSetLabel8);
            this.metroSetSetTabPage3.Font = null;
            this.metroSetSetTabPage3.ImageIndex = 0;
            this.metroSetSetTabPage3.ImageKey = null;
            this.metroSetSetTabPage3.IsDerivedStyle = true;
            this.metroSetSetTabPage3.Location = new System.Drawing.Point(4, 42);
            this.metroSetSetTabPage3.Name = "metroSetSetTabPage3";
            this.metroSetSetTabPage3.Size = new System.Drawing.Size(903, 579);
            this.metroSetSetTabPage3.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetSetTabPage3.StyleManager = null;
            this.metroSetSetTabPage3.TabIndex = 6;
            this.metroSetSetTabPage3.Text = "Methods";
            this.metroSetSetTabPage3.ThemeAuthor = "Narwin";
            this.metroSetSetTabPage3.ThemeName = "MetroDark";
            this.metroSetSetTabPage3.ToolTipText = null;
            // 
            // methodIncludeBtn
            // 
            this.methodIncludeBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.methodIncludeBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodIncludeBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodIncludeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.methodIncludeBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodIncludeBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodIncludeBtn.HoverTextColor = System.Drawing.Color.White;
            this.methodIncludeBtn.IsDerivedStyle = true;
            this.methodIncludeBtn.Location = new System.Drawing.Point(472, 547);
            this.methodIncludeBtn.Name = "methodIncludeBtn";
            this.methodIncludeBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.methodIncludeBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.methodIncludeBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.methodIncludeBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.methodIncludeBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.methodIncludeBtn.PressTextColor = System.Drawing.Color.White;
            this.methodIncludeBtn.Size = new System.Drawing.Size(431, 23);
            this.methodIncludeBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.methodIncludeBtn.StyleManager = null;
            this.methodIncludeBtn.TabIndex = 36;
            this.methodIncludeBtn.Text = "Include";
            this.methodIncludeBtn.ThemeAuthor = "Narwin";
            this.methodIncludeBtn.ThemeName = "MetroDark";
            this.methodIncludeBtn.Click += new System.EventHandler(this.methodIncludeBtn_Click);
            // 
            // methodExlcudeBtn
            // 
            this.methodExlcudeBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.methodExlcudeBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodExlcudeBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodExlcudeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.methodExlcudeBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodExlcudeBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodExlcudeBtn.HoverTextColor = System.Drawing.Color.White;
            this.methodExlcudeBtn.IsDerivedStyle = true;
            this.methodExlcudeBtn.Location = new System.Drawing.Point(0, 547);
            this.methodExlcudeBtn.Name = "methodExlcudeBtn";
            this.methodExlcudeBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.methodExlcudeBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.methodExlcudeBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.methodExlcudeBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.methodExlcudeBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.methodExlcudeBtn.PressTextColor = System.Drawing.Color.White;
            this.methodExlcudeBtn.Size = new System.Drawing.Size(431, 23);
            this.methodExlcudeBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.methodExlcudeBtn.StyleManager = null;
            this.methodExlcudeBtn.TabIndex = 35;
            this.methodExlcudeBtn.Text = "Exclude";
            this.methodExlcudeBtn.ThemeAuthor = "Narwin";
            this.methodExlcudeBtn.ThemeName = "MetroDark";
            this.methodExlcudeBtn.Click += new System.EventHandler(this.methodExlcudeBtn_Click);
            // 
            // methodSearchBtn
            // 
            this.methodSearchBtn.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.methodSearchBtn.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodSearchBtn.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodSearchBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.methodSearchBtn.HoverBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodSearchBtn.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodSearchBtn.HoverTextColor = System.Drawing.Color.White;
            this.methodSearchBtn.IsDerivedStyle = true;
            this.methodSearchBtn.Location = new System.Drawing.Point(794, 9);
            this.methodSearchBtn.Name = "methodSearchBtn";
            this.methodSearchBtn.NormalBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.methodSearchBtn.NormalColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.methodSearchBtn.NormalTextColor = System.Drawing.Color.FromArgb(((int)(((byte)(204)))), ((int)(((byte)(204)))), ((int)(((byte)(204)))));
            this.methodSearchBtn.PressBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.methodSearchBtn.PressColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(240)))), ((int)(((byte)(240)))));
            this.methodSearchBtn.PressTextColor = System.Drawing.Color.White;
            this.methodSearchBtn.Size = new System.Drawing.Size(109, 24);
            this.methodSearchBtn.Style = MetroSet_UI.Enums.Style.Dark;
            this.methodSearchBtn.StyleManager = null;
            this.methodSearchBtn.TabIndex = 34;
            this.methodSearchBtn.Text = "Search";
            this.methodSearchBtn.ThemeAuthor = "Narwin";
            this.methodSearchBtn.ThemeName = "MetroDark";
            this.methodSearchBtn.Click += new System.EventHandler(this.methodSearchBtn_Click);
            // 
            // methodSearch
            // 
            this.methodSearch.AutoCompleteCustomSource = null;
            this.methodSearch.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.None;
            this.methodSearch.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.None;
            this.methodSearch.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(110)))), ((int)(((byte)(110)))), ((int)(((byte)(110)))));
            this.methodSearch.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(80)))), ((int)(((byte)(80)))), ((int)(((byte)(80)))));
            this.methodSearch.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodSearch.DisabledForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(109)))), ((int)(((byte)(109)))), ((int)(((byte)(109)))));
            this.methodSearch.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.methodSearch.HoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.methodSearch.Image = null;
            this.methodSearch.IsDerivedStyle = true;
            this.methodSearch.Lines = null;
            this.methodSearch.Location = new System.Drawing.Point(0, 9);
            this.methodSearch.MaxLength = 32767;
            this.methodSearch.Multiline = false;
            this.methodSearch.Name = "methodSearch";
            this.methodSearch.ReadOnly = false;
            this.methodSearch.Size = new System.Drawing.Size(788, 24);
            this.methodSearch.Style = MetroSet_UI.Enums.Style.Dark;
            this.methodSearch.StyleManager = null;
            this.methodSearch.TabIndex = 33;
            this.methodSearch.TextAlign = System.Windows.Forms.HorizontalAlignment.Left;
            this.methodSearch.ThemeAuthor = "Narwin";
            this.methodSearch.ThemeName = "MetroDark";
            this.methodSearch.UseSystemPasswordChar = false;
            this.methodSearch.WatermarkText = "";
            // 
            // metroSetLabel7
            // 
            this.metroSetLabel7.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel7.IsDerivedStyle = true;
            this.metroSetLabel7.Location = new System.Drawing.Point(0, 36);
            this.metroSetLabel7.Name = "metroSetLabel7";
            this.metroSetLabel7.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel7.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel7.StyleManager = this.styleManager1;
            this.metroSetLabel7.TabIndex = 32;
            this.metroSetLabel7.Text = "Included";
            this.metroSetLabel7.ThemeAuthor = "Narwin";
            this.metroSetLabel7.ThemeName = "MetroDark";
            // 
            // methodsExcludedList
            // 
            this.methodsExcludedList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.methodsExcludedList.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.methodsExcludedList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodsExcludedList.FormattingEnabled = true;
            this.methodsExcludedList.HorizontalScrollbar = true;
            this.methodsExcludedList.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.methodsExcludedList.ItemHeight = 16;
            this.methodsExcludedList.Location = new System.Drawing.Point(472, 58);
            this.methodsExcludedList.Name = "methodsExcludedList";
            this.methodsExcludedList.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.methodsExcludedList.Size = new System.Drawing.Size(431, 482);
            this.methodsExcludedList.TabIndex = 31;
            // 
            // methodsIncludedList
            // 
            this.methodsIncludedList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.methodsIncludedList.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.methodsIncludedList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(170)))), ((int)(((byte)(170)))));
            this.methodsIncludedList.FormattingEnabled = true;
            this.methodsIncludedList.HorizontalScrollbar = true;
            this.methodsIncludedList.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.methodsIncludedList.ItemHeight = 16;
            this.methodsIncludedList.Location = new System.Drawing.Point(0, 58);
            this.methodsIncludedList.Name = "methodsIncludedList";
            this.methodsIncludedList.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
            this.methodsIncludedList.Size = new System.Drawing.Size(431, 482);
            this.methodsIncludedList.TabIndex = 30;
            // 
            // metroSetLabel8
            // 
            this.metroSetLabel8.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.metroSetLabel8.IsDerivedStyle = true;
            this.metroSetLabel8.Location = new System.Drawing.Point(472, 36);
            this.metroSetLabel8.Name = "metroSetLabel8";
            this.metroSetLabel8.Size = new System.Drawing.Size(190, 22);
            this.metroSetLabel8.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetLabel8.StyleManager = this.styleManager1;
            this.metroSetLabel8.TabIndex = 29;
            this.metroSetLabel8.Text = "Excluded";
            this.metroSetLabel8.ThemeAuthor = "Narwin";
            this.metroSetLabel8.ThemeName = "MetroDark";
            // 
            // metroSetProgressBar1
            // 
            this.metroSetProgressBar1.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(38)))), ((int)(((byte)(38)))), ((int)(((byte)(38)))));
            this.metroSetProgressBar1.BorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(38)))), ((int)(((byte)(38)))), ((int)(((byte)(38)))));
            this.metroSetProgressBar1.DisabledBackColor = System.Drawing.Color.FromArgb(((int)(((byte)(38)))), ((int)(((byte)(38)))), ((int)(((byte)(38)))));
            this.metroSetProgressBar1.DisabledBorderColor = System.Drawing.Color.FromArgb(((int)(((byte)(38)))), ((int)(((byte)(38)))), ((int)(((byte)(38)))));
            this.metroSetProgressBar1.DisabledProgressColor = System.Drawing.Color.FromArgb(((int)(((byte)(120)))), ((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.metroSetProgressBar1.IsDerivedStyle = true;
            this.metroSetProgressBar1.Location = new System.Drawing.Point(282, 16);
            this.metroSetProgressBar1.Maximum = 100;
            this.metroSetProgressBar1.Minimum = 0;
            this.metroSetProgressBar1.Name = "metroSetProgressBar1";
            this.metroSetProgressBar1.Orientation = MetroSet_UI.Enums.ProgressOrientation.Horizontal;
            this.metroSetProgressBar1.ProgressColor = System.Drawing.Color.FromArgb(((int)(((byte)(65)))), ((int)(((byte)(177)))), ((int)(((byte)(225)))));
            this.metroSetProgressBar1.Size = new System.Drawing.Size(525, 31);
            this.metroSetProgressBar1.Style = MetroSet_UI.Enums.Style.Dark;
            this.metroSetProgressBar1.StyleManager = this.styleManager1;
            this.metroSetProgressBar1.TabIndex = 16;
            this.metroSetProgressBar1.Text = "metroSetProgressBar1";
            this.metroSetProgressBar1.ThemeAuthor = "Narwin";
            this.metroSetProgressBar1.ThemeName = "MetroDark";
            this.metroSetProgressBar1.Value = 0;
            this.metroSetProgressBar1.Visible = false;
            // 
            // MainForm
            // 
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.None;
            this.BackgroundColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.ClientSize = new System.Drawing.Size(941, 693);
            this.Controls.Add(this.metroSetProgressBar1);
            this.Controls.Add(this.metroSetTabControl1);
            this.Controls.Add(this.metroSetControlBox1);
            this.HeaderHeight = 60;
            this.Name = "MainForm";
            this.Padding = new System.Windows.Forms.Padding(12, 90, 12, 12);
            this.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.ShowLeftRect = false;
            this.SmallRectThickness = 4;
            this.Style = MetroSet_UI.Enums.Style.Dark;
            this.StyleManager = this.styleManager1;
            this.Text = "Mono2Native SDK Generator";
            this.TextColor = System.Drawing.Color.White;
            this.ThemeName = "MetroDark";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.metroSetTabControl1.ResumeLayout(false);
            this.metroSetSetTabPage4.ResumeLayout(false);
            this.metroSetSetTabPage1.ResumeLayout(false);
            this.metroSetSetTabPage2.ResumeLayout(false);
            this.metroSetSetTabPage3.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.OpenFileDialog openAssemblyDialog;
        private MetroSet_UI.Components.StyleManager styleManager1;
        private MetroSet_UI.Controls.MetroSetControlBox metroSetControlBox1;
        private MetroSet_UI.Controls.MetroSetTabControl metroSetTabControl1;
        private MetroSet_UI.Child.MetroSetSetTabPage metroSetSetTabPage1;
        private MetroSet_UI.Child.MetroSetSetTabPage metroSetSetTabPage2;
        private MetroSet_UI.Child.MetroSetSetTabPage metroSetSetTabPage3;
        private MetroSet_UI.Child.MetroSetSetTabPage metroSetSetTabPage4;
        private MetroSet_UI.Controls.MetroSetProgressBar metroSetProgressBar1;
        private MetroSet_UI.Controls.MetroSetTextBox projName;
        private MetroSet_UI.Controls.MetroSetListBox assembliesList;
        private MetroSet_UI.Controls.MetroSetButton generateBtn;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel1;
        private MetroSet_UI.Controls.MetroSetDefaultButton addAssemblyBtn;
        private MetroSet_UI.Controls.MetroSetCheckBox externalcheck;
        private MetroSet_UI.Controls.MetroSetDefaultButton removeAssemblyBtn;
        private MetroSet_UI.Controls.MetroSetButton populate;
        private MetroSet_UI.Controls.MetroSetDefaultButton typesSearchBtn;
        private MetroSet_UI.Controls.MetroSetTextBox typesSearch;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel4;
        private System.Windows.Forms.ListBox typesExcludedList;
        private System.Windows.Forms.ListBox typesIncludedList;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel3;
        private MetroSet_UI.Controls.MetroSetDefaultButton typeIncludeBtn;
        private MetroSet_UI.Controls.MetroSetDefaultButton typeExcludeBtn;
        private MetroSet_UI.Controls.MetroSetDefaultButton fieldsIncludeBtn;
        private MetroSet_UI.Controls.MetroSetDefaultButton fieldsExcludeBtn;
        private MetroSet_UI.Controls.MetroSetDefaultButton fieldSearchBtn;
        private MetroSet_UI.Controls.MetroSetTextBox fieldSearch;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel5;
        private System.Windows.Forms.ListBox fieldsExcludedList;
        private System.Windows.Forms.ListBox fieldsIncludedList;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel6;
        private MetroSet_UI.Controls.MetroSetDefaultButton methodIncludeBtn;
        private MetroSet_UI.Controls.MetroSetDefaultButton methodExlcudeBtn;
        private MetroSet_UI.Controls.MetroSetDefaultButton methodSearchBtn;
        private MetroSet_UI.Controls.MetroSetTextBox methodSearch;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel7;
        private System.Windows.Forms.ListBox methodsExcludedList;
        private System.Windows.Forms.ListBox methodsIncludedList;
        private MetroSet_UI.Controls.MetroSetLabel metroSetLabel8;
        private MetroSet_UI.Controls.MetroSetCheckBox excludeByDefault;
    }
}