using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Oship
{
    public partial class Form1 : Form
    {
        // Make Class Level Variables Here
        int speed = 5;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            PicShip1(speed);
            PicShip2(ref speed);
        }

        private void PicShip1(int s)
        {
            pictureBox1.Top -= s;
            if (pictureBox1.Top < -80)
                pictureBox1.Top = 700;
            textBox1.Text = "Speed/n" + s;
        }
        private void PicShip2(ref int s)
        {
            s += 5;
            pictureBox2.Top -= s;
            if (pictureBox2.Top < -80)
                pictureBox2.Top = 700;
            textBox2.Text = "Speed/n" + s;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
