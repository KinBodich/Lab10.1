#pragma once
#include <cstdlib>
#include <time.h>
#include <time.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіь межі інтегрування";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"а =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(257, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"b =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Кількість точок табулювання";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Обчислити інтеграл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(238, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 44);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Закрити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(85, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Шуканий інтеграл";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(291, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(291, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(215, 245);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(158, 22);
			this->textBox4->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 291);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double f(double x) // підінтегральна ф-ція
		{
			double y;
			y = 1 / (1 + x + x * x);
			return y;
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double a, b, max, s, x, u, y, ran_y, h, rez;
		int n, n_b;
		srand(time(NULL));
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		n = Convert::ToInt32(textBox3->Text);
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
			x = a + (b - a) * (double)rand() / RAND_MAX;
			ran_y = max * (double)rand() / RAND_MAX;
			y = f(x);
			if (ran_y <= y)
				n_b ++;
		}
		rez = (b - a) * max * n_b / n;
		textBox4->Text = Convert::ToString(rez);
	}
};
}
