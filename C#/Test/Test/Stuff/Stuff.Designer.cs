namespace Test
{
    partial class Form1
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.panel1 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.b_exit = new System.Windows.Forms.Button();
            this.b_minimize = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.panel2 = new System.Windows.Forms.Panel();
            this.b_checkOut = new System.Windows.Forms.Button();
            this.b_roomInfo = new System.Windows.Forms.Button();
            this.b_pInfo = new System.Windows.Forms.Button();
            this.b_pReg = new System.Windows.Forms.Button();
            this.p_patientInfo = new Test.Stuff.Patient_Info();
            this.p_checkOut = new Test.Stuff.CheckOut();
            this.p_patient_Registration = new Test.Stuff.Patient_Registration();
            this.p_roomInfo = new Test.Stuff.Room_Info();
            this.button2 = new System.Windows.Forms.Button();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.Teal;
            this.panel1.Controls.Add(this.label1);
            this.panel1.Controls.Add(this.b_exit);
            this.panel1.Controls.Add(this.b_minimize);
            this.panel1.Controls.Add(this.button1);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Margin = new System.Windows.Forms.Padding(4);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(800, 30);
            this.panel1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(356, 7);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(147, 18);
            this.label1.TabIndex = 5;
            this.label1.Text = "AIUB Mental Hospital";
            // 
            // b_exit
            // 
            this.b_exit.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("b_exit.BackgroundImage")));
            this.b_exit.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.b_exit.FlatAppearance.BorderSize = 0;
            this.b_exit.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.b_exit.Location = new System.Drawing.Point(749, 6);
            this.b_exit.Margin = new System.Windows.Forms.Padding(4);
            this.b_exit.Name = "b_exit";
            this.b_exit.Size = new System.Drawing.Size(38, 20);
            this.b_exit.TabIndex = 5;
            this.b_exit.UseVisualStyleBackColor = true;
            this.b_exit.Click += new System.EventHandler(this.b_exit_Click);
            // 
            // b_minimize
            // 
            this.b_minimize.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("b_minimize.BackgroundImage")));
            this.b_minimize.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.b_minimize.FlatAppearance.BorderSize = 0;
            this.b_minimize.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.b_minimize.Location = new System.Drawing.Point(703, 6);
            this.b_minimize.Margin = new System.Windows.Forms.Padding(4);
            this.b_minimize.Name = "b_minimize";
            this.b_minimize.Size = new System.Drawing.Size(38, 20);
            this.b_minimize.TabIndex = 4;
            this.b_minimize.UseVisualStyleBackColor = true;
            this.b_minimize.Click += new System.EventHandler(this.b_minimize_Click);
            // 
            // button1
            // 
            this.button1.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button1.BackgroundImage")));
            this.button1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.button1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button1.Location = new System.Drawing.Point(948, 0);
            this.button1.Margin = new System.Windows.Forms.Padding(4);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(38, 28);
            this.button1.TabIndex = 2;
            this.button1.UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.Teal;
            this.panel2.Controls.Add(this.button2);
            this.panel2.Controls.Add(this.b_checkOut);
            this.panel2.Controls.Add(this.b_roomInfo);
            this.panel2.Controls.Add(this.b_pInfo);
            this.panel2.Controls.Add(this.b_pReg);
            this.panel2.Dock = System.Windows.Forms.DockStyle.Left;
            this.panel2.Location = new System.Drawing.Point(0, 30);
            this.panel2.Margin = new System.Windows.Forms.Padding(4);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(157, 440);
            this.panel2.TabIndex = 1;
            // 
            // b_checkOut
            // 
            this.b_checkOut.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.b_checkOut.Location = new System.Drawing.Point(0, 196);
            this.b_checkOut.Margin = new System.Windows.Forms.Padding(4);
            this.b_checkOut.Name = "b_checkOut";
            this.b_checkOut.Size = new System.Drawing.Size(153, 32);
            this.b_checkOut.TabIndex = 3;
            this.b_checkOut.Text = "Check Out";
            this.b_checkOut.UseVisualStyleBackColor = true;
            this.b_checkOut.Click += new System.EventHandler(this.b_checkOut_Click);
            // 
            // b_roomInfo
            // 
            this.b_roomInfo.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.b_roomInfo.Location = new System.Drawing.Point(0, 163);
            this.b_roomInfo.Margin = new System.Windows.Forms.Padding(4);
            this.b_roomInfo.Name = "b_roomInfo";
            this.b_roomInfo.Size = new System.Drawing.Size(153, 32);
            this.b_roomInfo.TabIndex = 2;
            this.b_roomInfo.Text = "Room Info";
            this.b_roomInfo.UseVisualStyleBackColor = true;
            this.b_roomInfo.Click += new System.EventHandler(this.b_roomInfo_Click);
            // 
            // b_pInfo
            // 
            this.b_pInfo.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.b_pInfo.Location = new System.Drawing.Point(0, 130);
            this.b_pInfo.Margin = new System.Windows.Forms.Padding(4);
            this.b_pInfo.Name = "b_pInfo";
            this.b_pInfo.Size = new System.Drawing.Size(153, 32);
            this.b_pInfo.TabIndex = 1;
            this.b_pInfo.Text = "Patient Information";
            this.b_pInfo.UseVisualStyleBackColor = true;
            this.b_pInfo.Click += new System.EventHandler(this.b_pInfo_Click);
            // 
            // b_pReg
            // 
            this.b_pReg.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.b_pReg.Location = new System.Drawing.Point(0, 97);
            this.b_pReg.Margin = new System.Windows.Forms.Padding(4);
            this.b_pReg.Name = "b_pReg";
            this.b_pReg.Size = new System.Drawing.Size(153, 32);
            this.b_pReg.TabIndex = 0;
            this.b_pReg.Text = "Patient Registratoin";
            this.b_pReg.UseVisualStyleBackColor = true;
            this.b_pReg.Click += new System.EventHandler(this.b_pReg_Click);
            // 
            // p_patientInfo
            // 
            this.p_patientInfo.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.p_patientInfo.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.p_patientInfo.Location = new System.Drawing.Point(165, 159);
            this.p_patientInfo.Margin = new System.Windows.Forms.Padding(4);
            this.p_patientInfo.Name = "p_patientInfo";
            this.p_patientInfo.Size = new System.Drawing.Size(15, 33);
            this.p_patientInfo.TabIndex = 4;
            this.p_patientInfo.Visible = false;
            // 
            // p_checkOut
            // 
            this.p_checkOut.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.p_checkOut.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.p_checkOut.Location = new System.Drawing.Point(165, 226);
            this.p_checkOut.Margin = new System.Windows.Forms.Padding(4);
            this.p_checkOut.Name = "p_checkOut";
            this.p_checkOut.Size = new System.Drawing.Size(15, 32);
            this.p_checkOut.TabIndex = 3;
            this.p_checkOut.Visible = false;
            // 
            // p_patient_Registration
            // 
            this.p_patient_Registration.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.p_patient_Registration.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.p_patient_Registration.Location = new System.Drawing.Point(161, 127);
            this.p_patient_Registration.Margin = new System.Windows.Forms.Padding(4);
            this.p_patient_Registration.Name = "p_patient_Registration";
            this.p_patient_Registration.Size = new System.Drawing.Size(19, 32);
            this.p_patient_Registration.TabIndex = 2;
            this.p_patient_Registration.Visible = false;
            // 
            // p_roomInfo
            // 
            this.p_roomInfo.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.p_roomInfo.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.p_roomInfo.Location = new System.Drawing.Point(165, 192);
            this.p_roomInfo.Margin = new System.Windows.Forms.Padding(4);
            this.p_roomInfo.Name = "p_roomInfo";
            this.p_roomInfo.Size = new System.Drawing.Size(16, 33);
            this.p_roomInfo.TabIndex = 5;
            this.p_roomInfo.Visible = false;
            // 
            // button2
            // 
            this.button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button2.Location = new System.Drawing.Point(2, 399);
            this.button2.Margin = new System.Windows.Forms.Padding(4);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(153, 32);
            this.button2.TabIndex = 4;
            this.button2.Text = "Logout";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.ClientSize = new System.Drawing.Size(800, 470);
            this.Controls.Add(this.p_roomInfo);
            this.Controls.Add(this.p_patientInfo);
            this.Controls.Add(this.p_checkOut);
            this.Controls.Add(this.p_patient_Registration);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Button b_checkOut;
        private System.Windows.Forms.Button b_roomInfo;
        private System.Windows.Forms.Button b_pInfo;
        private System.Windows.Forms.Button b_pReg;
        private System.Windows.Forms.Button b_minimize;
        private System.Windows.Forms.Button b_exit;
        private System.Windows.Forms.Label label1;
        private Stuff.Patient_Registration p_patient_Registration;
        private Stuff.CheckOut p_checkOut;
        private Stuff.Patient_Info p_patientInfo;
        private Stuff.Room_Info p_roomInfo;
        private System.Windows.Forms.Button button2;
    }
}

