#pragma once
#include "myfunction.h"
#include "tasks.h"

namespace Decisionsupportsystemprog02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox_a;
	private: System::Windows::Forms::TextBox^  textBox_d;
	private: System::Windows::Forms::TextBox^  textBox_c;
	private: System::Windows::Forms::TextBox^  textBox_b;
	private: System::Windows::Forms::TextBox^  textBox_t;
	private: System::Windows::Forms::TextBox^  textBox_TT;
	private: System::Windows::Forms::TextBox^  textBox_r;
	private: System::Windows::Forms::TextBox^  textBox_eps;
	private: System::Windows::Forms::TextBox^  textBox_N;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton_N;
	private: System::Windows::Forms::RadioButton^  radioButton_eps;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textdebug;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_t = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TT = (gcnew System::Windows::Forms::TextBox());
			this->textBox_r = (gcnew System::Windows::Forms::TextBox());
			this->textBox_eps = (gcnew System::Windows::Forms::TextBox());
			this->textBox_N = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_N = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_eps = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textdebug = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(13, 13);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(705, 592);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(778, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(737, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(737, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(874, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"t";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(737, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"c";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(737, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"d";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(874, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"T";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1027, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"eps";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1027, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"r";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1027, 137);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"N";
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(759, 84);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(100, 22);
			this->textBox_a->TabIndex = 11;
			this->textBox_a->Text = L"1";
			// 
			// textBox_d
			// 
			this->textBox_d->Location = System::Drawing::Point(759, 165);
			this->textBox_d->Name = L"textBox_d";
			this->textBox_d->Size = System::Drawing::Size(100, 22);
			this->textBox_d->TabIndex = 12;
			this->textBox_d->Text = L"2";
			// 
			// textBox_c
			// 
			this->textBox_c->Location = System::Drawing::Point(759, 139);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(100, 22);
			this->textBox_c->TabIndex = 13;
			this->textBox_c->Text = L"1";
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(759, 112);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(100, 22);
			this->textBox_b->TabIndex = 14;
			this->textBox_b->Text = L"7";
			// 
			// textBox_t
			// 
			this->textBox_t->Location = System::Drawing::Point(892, 84);
			this->textBox_t->Name = L"textBox_t";
			this->textBox_t->Size = System::Drawing::Size(100, 22);
			this->textBox_t->TabIndex = 15;
			this->textBox_t->Text = L"0";
			// 
			// textBox_TT
			// 
			this->textBox_TT->Location = System::Drawing::Point(892, 112);
			this->textBox_TT->Name = L"textBox_TT";
			this->textBox_TT->Size = System::Drawing::Size(100, 22);
			this->textBox_TT->TabIndex = 16;
			this->textBox_TT->Text = L"1";
			// 
			// textBox_r
			// 
			this->textBox_r->Location = System::Drawing::Point(1067, 84);
			this->textBox_r->Name = L"textBox_r";
			this->textBox_r->Size = System::Drawing::Size(100, 22);
			this->textBox_r->TabIndex = 17;
			this->textBox_r->Text = L"5";
			// 
			// textBox_eps
			// 
			this->textBox_eps->Location = System::Drawing::Point(1067, 108);
			this->textBox_eps->Name = L"textBox_eps";
			this->textBox_eps->Size = System::Drawing::Size(100, 22);
			this->textBox_eps->TabIndex = 18;
			this->textBox_eps->Text = L"0,1";
			// 
			// textBox_N
			// 
			this->textBox_N->Location = System::Drawing::Point(1067, 134);
			this->textBox_N->Name = L"textBox_N";
			this->textBox_N->Size = System::Drawing::Size(100, 22);
			this->textBox_N->TabIndex = 19;
			this->textBox_N->Text = L"15";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(38, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 21);
			this->radioButton1->TabIndex = 20;
			this->radioButton1->TabStop = true;
			this->radioButton1->Tag = L"2";
			this->radioButton1->Text = L"перебор";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(38, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(97, 21);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->Tag = L"2";
			this->radioButton2->Text = L"Пиявского";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(38, 73);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(98, 21);
			this->radioButton3->TabIndex = 22;
			this->radioButton3->Tag = L"2";
			this->radioButton3->Text = L"Стронгина";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton_N
			// 
			this->radioButton_N->AutoSize = true;
			this->radioButton_N->Checked = true;
			this->radioButton_N->Cursor = System::Windows::Forms::Cursors::Help;
			this->radioButton_N->Location = System::Drawing::Point(21, 21);
			this->radioButton_N->Name = L"radioButton_N";
			this->radioButton_N->Size = System::Drawing::Size(39, 21);
			this->radioButton_N->TabIndex = 23;
			this->radioButton_N->TabStop = true;
			this->radioButton_N->Tag = L"1";
			this->radioButton_N->Text = L"N";
			this->radioButton_N->UseVisualStyleBackColor = true;
			// 
			// radioButton_eps
			// 
			this->radioButton_eps->AutoSize = true;
			this->radioButton_eps->Location = System::Drawing::Point(21, 48);
			this->radioButton_eps->Name = L"radioButton_eps";
			this->radioButton_eps->Size = System::Drawing::Size(52, 21);
			this->radioButton_eps->TabIndex = 24;
			this->radioButton_eps->Tag = L"1";
			this->radioButton_eps->Text = L"eps";
			this->radioButton_eps->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_N);
			this->groupBox1->Controls->Add(this->radioButton_eps);
			this->groupBox1->Location = System::Drawing::Point(746, 226);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(155, 88);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"метод разработки";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Location = System::Drawing::Point(922, 220);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(179, 100);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"выбор метода";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(798, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(160, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"y = a*sin(bx) + c*cos(dx)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1085, 370);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(156, 22);
			this->textBox1->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1064, 375);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 17);
			this->label11->TabIndex = 30;
			this->label11->Text = L"x";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1064, 404);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 17);
			this->label12->TabIndex = 31;
			this->label12->Text = L"y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1085, 401);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(156, 22);
			this->textBox2->TabIndex = 32;
			// 
			// textdebug
			// 
			this->textdebug->Location = System::Drawing::Point(1107, 238);
			this->textdebug->Name = L"textdebug";
			this->textdebug->ReadOnly = true;
			this->textdebug->Size = System::Drawing::Size(156, 22);
			this->textdebug->TabIndex = 33;
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1287, 618);
			this->Controls->Add(this->textdebug);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox_N);
			this->Controls->Add(this->textBox_eps);
			this->Controls->Add(this->textBox_r);
			this->Controls->Add(this->textBox_TT);
			this->Controls->Add(this->textBox_t);
			this->Controls->Add(this->textBox_b);
			this->Controls->Add(this->textBox_c);
			this->Controls->Add(this->textBox_d);
			this->Controls->Add(this->textBox_a);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel1 = zedGraphControl1->GraphPane;
		panel1->CurveList->Clear();
		PointPairList^ point_list = gcnew ZedGraph::PointPairList();
		
		int N = Convert::ToInt32(textBox_N->Text);
		double a = Convert::ToDouble(textBox_a->Text);
		double b = Convert::ToDouble(textBox_b->Text);
		double c = Convert::ToDouble(textBox_c->Text);
		double d = Convert::ToDouble(textBox_d->Text);
		double eps = Convert::ToDouble(textBox_eps->Text);
		double r = Convert::ToDouble(textBox_r->Text);
		double t = Convert::ToDouble(textBox_t->Text);
		double T = Convert::ToDouble(textBox_TT->Text);

		MyFunction func(a, b, c, d);

		double Global_min_x = 0,
			Global_min_y = 0;

		if (radioButton1->Checked)
		{
			method1 task(N, func, r, eps, t, T);
			if (radioButton_N->Checked)
			{
				//textdebug->Text = Convert::ToString(task.N);
				Global_min_x = task.UseMethod_N();
				Global_min_y = func.func_calc(Global_min_x);
				textBox1->Text = Convert::ToString(Global_min_x);
				textBox2->Text = Convert::ToString(Global_min_y);
				for (int i = 0; i < task.lambda.size(); i++)
				{
					point_list->Add(task.lambda[i], func.func_calc(task.lambda[i]));
				}
			}

		}
		else if (radioButton2->Checked)
		{
			method_piyav task(N, func, r, eps, t, T);
			if (radioButton_N->Checked)
			{
				//textdebug->Text = Convert::ToString(task.N);
				Global_min_x = task.UseMethod_N();
				Global_min_y = func.func_calc(Global_min_x);
				textBox1->Text = Convert::ToString(Global_min_x);
				textBox2->Text = Convert::ToString(Global_min_y);
				textdebug->Text = Convert::ToString(task.lambda.size());
				for (int i = 0; i < task.lambda.size(); i++)
				{
					point_list->Add(task.lambda[i], func.func_calc(task.lambda[i]));
				}
			}
		}
		else if (radioButton3->Checked)
		{
			method_strongin task(N, func, r, eps, t, T);
			if (radioButton_N->Checked)
			{
				//textdebug->Text = Convert::ToString(task.N);
				Global_min_x = task.UseMethod_N();
				Global_min_y = func.func_calc(Global_min_x);
				textBox1->Text = Convert::ToString(Global_min_x);
				textBox2->Text = Convert::ToString(Global_min_y);
				textdebug->Text = Convert::ToString(task.lambda.size());
				for (int i = 0; i < task.lambda.size(); i++)
				{
					point_list->Add(task.lambda[i], func.func_calc(task.lambda[i]));
				}
			}
		}
		LineItem^ Curve1 = panel1->AddCurve("x_y", point_list, Color::Red, SymbolType::Circle);

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
