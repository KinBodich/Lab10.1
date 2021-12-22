using System;
using System.Windows.Forms;

namespace Add
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        double f(double x) // підінтегральна ф-ція
        {
            double y;
            y = 1 / (1 + x + x * x);
            return y;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
			double a, b, max, s, x, y, ran_y, h, rez;
			int n, n_b;
			Random rnd = new Random();
			a = Convert.ToDouble(textBox1.Text);
			b = Convert.ToDouble(textBox2.Text);
			n = Convert.ToInt32(textBox3.Text);
			h = (b - a) / n;
			x = a;
			max = 0;
			for (int i = 0; i < n; i++) //табулювання ф-ції
			{
				y = f(x);
				if (y > max)
				{
					max = y;
					continue;
				}
				x += h;
			}
			n_b = 0;
			s = max * (b - a);
			for (int i = 0; i < n; i++)
			{
				x = a + (b - a) * rnd.NextDouble();
				ran_y = max * rnd.NextDouble();
				y = f(x);
				if (ran_y <= y)
					n_b++;
			}
			rez = (b - a) * max * n_b / n;
			textBox4.Text = Convert.ToString(rez);
		}
    }
}
