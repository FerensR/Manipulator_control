#pragma once
#using <System.dll>

namespace ArmControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading;

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
	private: System::Windows::Forms::GroupBox^  Servo;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		String ^ a;
		String ^ b;
		String ^ c;
		String ^ d;
		String ^ ee;
		String ^ f;
		String ^ fa = "a";
		String ^ fb = "b";
		String ^ fc = "c";
		String ^ fd = "d";
		String ^ fe = "e";
		String ^ ff = "f";
		/// </summary>
		static SerialPort^ _serialPort;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚Ëı≥‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÔÓœÓ„‡ÏÛToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Servo = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚Ëı≥‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Servo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Servo
			// 
			this->Servo->Controls->Add(this->label7);
			this->Servo->Controls->Add(this->label8);
			this->Servo->Controls->Add(this->label9);
			this->Servo->Controls->Add(this->label10);
			this->Servo->Controls->Add(this->label11);
			this->Servo->Controls->Add(this->label12);
			this->Servo->Controls->Add(this->trackBar6);
			this->Servo->Controls->Add(this->trackBar5);
			this->Servo->Controls->Add(this->trackBar4);
			this->Servo->Controls->Add(this->trackBar3);
			this->Servo->Controls->Add(this->trackBar2);
			this->Servo->Controls->Add(this->trackBar1);
			this->Servo->Controls->Add(this->label6);
			this->Servo->Controls->Add(this->label5);
			this->Servo->Controls->Add(this->label4);
			this->Servo->Controls->Add(this->label3);
			this->Servo->Controls->Add(this->label2);
			this->Servo->Controls->Add(this->label1);
			this->Servo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Servo->Location = System::Drawing::Point(9, 56);
			this->Servo->Name = L"Servo";
			this->Servo->Size = System::Drawing::Size(1482, 329);
			this->Servo->TabIndex = 0;
			this->Servo->TabStop = false;
			this->Servo->Text = L"Servo";
			this->Servo->Enter += gcnew System::EventHandler(this, &MyForm::Servo_Enter);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1417, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 18);
			this->label7->TabIndex = 24;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1417, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 18);
			this->label8->TabIndex = 23;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1417, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 18);
			this->label9->TabIndex = 22;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1417, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 18);
			this->label10->TabIndex = 21;
			this->label10->Text = L"0";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1417, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 18);
			this->label11->TabIndex = 20;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1417, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 18);
			this->label12->TabIndex = 19;
			this->label12->Text = L"0";
			// 
			// trackBar6
			// 
			this->trackBar6->LargeChange = 10;
			this->trackBar6->Location = System::Drawing::Point(80, 275);
			this->trackBar6->Maximum = 180;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(1331, 45);
			this->trackBar6->SmallChange = 10;
			this->trackBar6->TabIndex = 18;
			this->trackBar6->Value = 90;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar6_Scroll);
			// 
			// trackBar5
			// 
			this->trackBar5->LargeChange = 10;
			this->trackBar5->Location = System::Drawing::Point(80, 224);
			this->trackBar5->Maximum = 180;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(1331, 45);
			this->trackBar5->SmallChange = 10;
			this->trackBar5->TabIndex = 17;
			this->trackBar5->Value = 90;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar5_Scroll);
			// 
			// trackBar4
			// 
			this->trackBar4->LargeChange = 10;
			this->trackBar4->Location = System::Drawing::Point(80, 173);
			this->trackBar4->Maximum = 180;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(1331, 45);
			this->trackBar4->SmallChange = 10;
			this->trackBar4->TabIndex = 16;
			this->trackBar4->Value = 90;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar4_Scroll);
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 10;
			this->trackBar3->Location = System::Drawing::Point(80, 122);
			this->trackBar3->Maximum = 180;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(1331, 45);
			this->trackBar3->SmallChange = 10;
			this->trackBar3->TabIndex = 15;
			this->trackBar3->Value = 90;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar3_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 10;
			this->trackBar2->Location = System::Drawing::Point(80, 70);
			this->trackBar2->Maximum = 180;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(1331, 45);
			this->trackBar2->SmallChange = 10;
			this->trackBar2->TabIndex = 14;
			this->trackBar2->Value = 90;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 10;
			this->trackBar1->Location = System::Drawing::Point(80, 19);
			this->trackBar1->Maximum = 90;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(1331, 45);
			this->trackBar1->SmallChange = 10;
			this->trackBar1->TabIndex = 13;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(10, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Servo 6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(10, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Servo 5";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Servo 4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Servo 3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Servo 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Servo 1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->Ù‡ÈÎToolStripMenuItem,
					this->ÔÓœÓ„‡ÏÛToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1503, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->‚Ëı≥‰ToolStripMenuItem });
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ‚Ëı≥‰ToolStripMenuItem
			// 
			this->‚Ëı≥‰ToolStripMenuItem->Name = L"‚Ëı≥‰ToolStripMenuItem";
			this->‚Ëı≥‰ToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->‚Ëı≥‰ToolStripMenuItem->Text = L"¬Ëı≥‰";
			this->‚Ëı≥‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‚Ëı≥‰ToolStripMenuItem_Click);
			// 
			// ÔÓœÓ„‡ÏÛToolStripMenuItem
			// 
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Name = L"ÔÓœÓ„‡ÏÛToolStripMenuItem";
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Text = L"œÓ ÔÓ„‡ÏÛ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"÷ÂÌÚÛ‚‡ÚË";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1503, 397);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Servo);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L" ÂÛ‚‡ÌÌˇ Ï‡Ì≥ÔÛÎˇÚÓÓÏ";
			this->Servo->ResumeLayout(false);
			this->Servo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void Send_Command(String^ fp, String^ sp)
	{
				 if (_serialPort = gcnew SerialPort("COM3", 9600))
				 {
					 //MessageBox::Show("MessageBox caption","Good");
					 _serialPort->Open();
					 _serialPort->WriteLine(fp + sp);
					 _serialPort->Close();
				 }
				 else
				 {
					 MessageBox::Show("Error opening COM port", "Oops");
				 }

				 

	}
	private: System::Void Servo_Enter(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 
			 label12->Text = String::Concat("", trackBar1->Value);
			 a = String::Concat("", trackBar1->Value);
			 ArmControl::MyForm::Send_Command(fa,a);
}

	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {

			 label11->Text = String::Concat("", trackBar2->Value);
			 b = String::Concat("", trackBar2->Value);
			 ArmControl::MyForm::Send_Command(fb, b);
}
	
	private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {

			 label10->Text = String::Concat("", trackBar3->Value);
			 c = String::Concat("", trackBar3->Value);
			 ArmControl::MyForm::Send_Command(fc, c);
}
	
	private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {

			 label9->Text = String::Concat("", trackBar4->Value);
			 d = String::Concat("", trackBar4->Value);
			 ArmControl::MyForm::Send_Command(fd, d);
}

	private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {

			 label8->Text = String::Concat("", trackBar5->Value);
			 ee = String::Concat("", trackBar5->Value);
			 ArmControl::MyForm::Send_Command(fe, ee);
}

	private: System::Void trackBar6_Scroll(System::Object^  sender, System::EventArgs^  e) {

			 label7->Text = String::Concat("", trackBar6->Value);
			 f = String::Concat("", trackBar6->Value);
			 ArmControl::MyForm::Send_Command(ff, f);
}
	
	private: System::Void ‚Ëı≥‰ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
			 
}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 _serialPort = gcnew SerialPort("COM3", 9600);
				 _serialPort->Open();
				 _serialPort->WriteLine("zero");
				 _serialPort->Close();

}
};
}
