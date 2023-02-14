#pragma once

namespace brainhwgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sinform
	/// </summary>
	public ref class sinform : public System::Windows::Forms::Form
	{
	public:
		sinform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		double get_sinx(double a, double b, double n, double deltax);
		double get_sinx2(double a, double b, double n, double deltax);
		double get_x2(double a, double b, double n, double deltax);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~sinform()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_a;
	private: System::Windows::Forms::TextBox^ text_b;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ListBox^ func_sel;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sinform::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_a = (gcnew System::Windows::Forms::TextBox());
			this->text_b = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->func_sel = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You will need to input these such that this form is satisfied:";
			this->label1->Click += gcnew System::EventHandler(this, &sinform::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(48, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(343, 56);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &sinform::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Value A:";
			this->label3->Click += gcnew System::EventHandler(this, &sinform::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Value B:";
			// 
			// text_a
			// 
			this->text_a->Location = System::Drawing::Point(96, 108);
			this->text_a->Name = L"text_a";
			this->text_a->Size = System::Drawing::Size(122, 20);
			this->text_a->TabIndex = 7;
			this->text_a->Text = L"Enter value...";
			this->text_a->TextChanged += gcnew System::EventHandler(this, &sinform::text_a_TextChanged);
			// 
			// text_b
			// 
			this->text_b->Location = System::Drawing::Point(96, 134);
			this->text_b->Name = L"text_b";
			this->text_b->Size = System::Drawing::Size(122, 20);
			this->text_b->TabIndex = 8;
			this->text_b->Text = L"Enter value...";
			this->text_b->TextChanged += gcnew System::EventHandler(this, &sinform::textBox2_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->func_sel);
			this->groupBox2->Location = System::Drawing::Point(233, 105);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(188, 75);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Function Selection:";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &sinform::groupBox2_Enter);
			// 
			// func_sel
			// 
			this->func_sel->FormattingEnabled = true;
			this->func_sel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sin(x)", L"sin(x^2)", L"x^2" });
			this->func_sel->Location = System::Drawing::Point(15, 19);
			this->func_sel->Name = L"func_sel";
			this->func_sel->Size = System::Drawing::Size(157, 43);
			this->func_sel->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->text_b);
			this->groupBox1->Controls->Add(this->text_a);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(22, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(437, 239);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Entry";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(152, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 31);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Calculate!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sinform::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Delta X:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Enter value...";
			// 
			// sinform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 286);
			this->Controls->Add(this->groupBox1);
			this->Name = L"sinform";
			this->Text = L"Sine Integral - Taylor Expansion";
			this->Load += gcnew System::EventHandler(this, &sinform::sinform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		enum ErrorType {
			OutOfBounds,
			DoubleParseError
		};
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			// This is where the work will be done

			// not totally sure how to change from String ^ to string or double.
			try {
				auto temp = text_a->Text;  // Becomes System::String ^
				double newDouble = 0;
				if (Double::TryParse(temp, newDouble)) {

				}
				else {
					throw DoubleParseError;
				}
			}
			catch (ErrorType error) {
				switch (error) {
				case DoubleParseError:
					// Throw an error relating to file creation.
					break;
				case OutOfBounds:
					// I don't know why this would even need to throw from here, but it's a good testing point.
					break;
				default:
					// An invalid error code was thrown. Check your code.
					break;
				}
			}
		}
	};
}
