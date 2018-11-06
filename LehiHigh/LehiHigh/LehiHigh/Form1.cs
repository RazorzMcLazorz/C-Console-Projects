using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace LehiHigh
{
    public partial class Form1 : Form
    {
        public int[] score = new int[9];
        public int shots, totalScore;



        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            pictureBox0.Image = imageList1.Images[0];
            pictureBox1.Image = imageList1.Images[1];
            pictureBox2.Image = imageList1.Images[2];
            pictureBox3.Image = imageList1.Images[3];
            pictureBox4.Image = imageList1.Images[4];
            pictureBox5.Image = imageList1.Images[5];
            pictureBox6.Image = imageList1.Images[6];
            pictureBox7.Image = imageList1.Images[7];
            pictureBox8.Image = imageList1.Images[8];
        }

            public void UpdateScore()
            {
                textBox0.Text = score[0].ToString();
                textBox1.Text = score[1].ToString();
                textBox2.Text = score[2].ToString();
                textBox3.Text = score[3].ToString();
                textBox4.Text = score[4].ToString();
                textBox5.Text = score[5].ToString();
                textBox6.Text = score[6].ToString();
                textBox7.Text = score[7].ToString();
                textBox8.Text = score[8].ToString();
            
        }
            

    }
}
