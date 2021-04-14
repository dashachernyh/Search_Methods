#pragma once
#include <math.h>
#include <string>
#include "Methods.h"



namespace Methods {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ H_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V_i;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LOC;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DIV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MUL;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::TextBox^  textBox5;


	private: int status;



	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;

	private:

		bool loc = false;









	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox10;
















	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;








	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton3;













	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->LOC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl1->Location = System::Drawing::Point(556, 14);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(853, 559);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(13, 244);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(534, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// LOC
			// 
			this->LOC->Name = L"LOC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(236, 138);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"r";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(444, 167);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 24);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(381, 21);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 27);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(278, 21);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 27);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(221, 25);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"X";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 18);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"F(x) =";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(257, 137);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(63, 24);
			this->textBox9->TabIndex = 23;
			this->textBox9->Text = L"3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(236, 170);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 18);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Допустмая погрешность";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1049, 48);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(427, 25);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 20);
			this->label12->TabIndex = 31;
			this->label12->Text = L"X";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(174, 19);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(39, 27);
			this->textBox10->TabIndex = 32;
			this->textBox10->Text = L"1";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(235, 106);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(185, 20);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Параметры метода :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(15, 351);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 18);
			this->label17->TabIndex = 40;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(13, 313);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(193, 25);
			this->label18->TabIndex = 41;
			this->label18->Text = L"Результаты поиска";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(79, 19);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 27);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(125, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Sin";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(484, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 24);
			this->textBox2->TabIndex = 43;
			this->textBox2->Text = L"300";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(236, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 18);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Максимальное число итераций";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(325, 21);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 25);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Cos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(246, 21);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 25);
			this->label6->TabIndex = 46;
			this->label6->Text = L"+";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(14, 59);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(142, 20);
			this->label14->TabIndex = 47;
			this->label14->Text = L"X∈ {         ;         }";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(57, 56);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(29, 27);
			this->textBox6->TabIndex = 48;
			this->textBox6->Text = L"-2";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(110, 56);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(29, 27);
			this->textBox7->TabIndex = 49;
			this->textBox7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(14, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Метод :";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(18, 138);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 22);
			this->radioButton1->TabIndex = 51;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Перебор";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(18, 166);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(96, 22);
			this->radioButton2->TabIndex = 52;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Пиявский";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(18, 194);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(94, 22);
			this->radioButton3->TabIndex = 53;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Стронгин";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1451, 589);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Поиск глобального оптимума функции";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		panel->Title->Text = "График функции и точки испытания";
		panel->XAxis->Title->Text = "X";
		panel->YAxis->Title->Text = "F(x)";
		
		PointPairList^ f_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f_point = gcnew ZedGraph::PointPairList();
		
		// Интервал поиска 
 		double x_0 = Convert::ToDouble(textBox6->Text);
		double x_n = Convert::ToDouble(textBox7->Text);
		// Параметры
		double r = Convert::ToDouble(textBox9->Text);
		double eps = Convert::ToDouble(textBox3->Text);
		double maxItr = Convert::ToDouble(textBox2->Text);
		// Коэффициенты 
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox10->Text);
		double c = Convert::ToDouble(textBox5->Text);
		double d = Convert::ToDouble(textBox4->Text);
		// Границы графика
		double xmin_limit = x_0 - 0.1;
		double xmax_limit = x_n + 0.5;

		double x_curr = x_0;
	
		Method met(x_0, x_n, eps, r, maxItr, a, b, c, d);
		if (radioButton1->Checked == true)
		{
			met.DirectMethod();
		}
		if (radioButton2->Checked == true)
		{
			met.PiyavskyMethod();
		}
		if (radioButton3->Checked == true)
		{
			met.StronginMethod();
		}
		//Добавление на график

		for (int i = 0; i < met.GetTrialSize(); i++)
		{
			f_point->Add(met.GetTrial(i).x, 0);
		}
		while (x_curr <= x_n)
		{
			f_list->Add(x_curr, met.Function(x_curr));
			x_curr += 0.1;
		}

		label17->Text ="Найденный минимум y* = " + met.GetBestTrial().z + "\nНайденная координата x* = " + met.GetBestTrial().x + "\nЛучшее значение на итерации i = "+met.GetBestIndex()+"\nЧисло проведенных итераций "  +met.GetItr();
	
		LineItem^ Curve = panel->AddCurve("F(x)", f_list, Color::DarkBlue, SymbolType::None);
		LineItem^ Point = panel->AddCurve("Испытания", f_point, Color::ForestGreen, SymbolType::Plus);
		Point->Line->IsVisible = false;
		Curve->Line->Width = 4;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		// Устанавливаем интересующий нас интервал по оси X
		//panel->XAxis->Scale->Min = xmin_limit;
		//panel->XAxis->Scale->Max = xmax_limit;
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	//private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//	numTask = comboBox1->SelectedIndex;
	//}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
			 //private: System::Void checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
			 //	loc = comboBox1->CheckState
			 //}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
