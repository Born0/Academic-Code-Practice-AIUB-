using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void b_exit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void b_minimize_Click(object sender, EventArgs e)
        {
            this.WindowState = FormWindowState.Minimized;
        }

        private void b_pInfo_Click(object sender, EventArgs e)
        {
            p_roomInfo.Visible = false;
            p_checkOut.Visible = false;
            p_patient_Registration.Visible = false;
            p_patientInfo.Dock = DockStyle.Fill;
            p_patientInfo.Visible = true;
        }

        private void b_checkOut_Click(object sender, EventArgs e)
        {
            p_roomInfo.Visible = false;
            p_patientInfo.Visible = false;
            p_patient_Registration.Visible = false;
            p_checkOut.Dock = DockStyle.Fill;
            p_checkOut.Visible = true;


        }

        private void b_pReg_Click(object sender, EventArgs e)
        {
            p_roomInfo.Visible = false;
            p_patientInfo.Visible = false;
            p_checkOut.Visible = false;
            p_patient_Registration.Dock = DockStyle.Fill;
            p_patient_Registration.Visible = true;
        }

        private void b_roomInfo_Click(object sender, EventArgs e)
        {
            p_patient_Registration.Visible = false;
            p_patientInfo.Visible = false;
            p_checkOut.Visible = false;
            p_roomInfo.Dock = DockStyle.Fill;
            p_roomInfo.Visible = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            new Login_Page().Show();
            this.Dispose();
        }
    }
}
