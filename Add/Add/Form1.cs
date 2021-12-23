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

		private double FunctionTabulation(double a, double b, int n, double x, double y)
        {
			double h, funcMax;
			h = (b - a) / n;
			x = a;
			funcMax = 0;
			for (int i = 0; i < n; i++) //табулювання ф-ції
			{
				y = f(x);
				if (y > funcMax)
				{
					funcMax = y;
					continue;
				}
				x += h;
			}
			return funcMax;
        }
		
		private double MonteCarlo(double a, double b, int n, double x, double y, double funcMax)
        {
			double randY;
			int nB = 0;
			Random rand = new Random();
			for (int i = 0; i < n; i++)
			{
				x = a + (b - a) * rand.NextDouble();
				randY = funcMax * rand.NextDouble();
				y = f(x);
				if (randY <= y)
					nB++;
			}
			return (b - a) * funcMax * nB / n;
        }

		private void button1_Click(object sender, EventArgs e)
		{
			double x = 0, y = 0;
			double a = Convert.ToDouble(textBox1.Text);
			double b = Convert.ToDouble(textBox2.Text);
			int n = Convert.ToInt32(textBox3.Text);
			double funcMax = FunctionTabulation(a, b, n, x, y);
			textBox4.Text = Convert.ToString(MonteCarlo(a, b, n, x, y, funcMax));
		}
	}
}
