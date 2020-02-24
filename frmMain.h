#pragma once
#include "classes.h"

namespace SuperSlotMachine {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	private: System::Windows::Forms::GroupBox^ gbMainFrame;
	public:

	private: System::Windows::Forms::Button^ btnSpin;

	public:

	private: System::Windows::Forms::Label^ lbl33;

	private: System::Windows::Forms::Label^ lbl32;

	private: System::Windows::Forms::Label^ lbl31;
	private: System::Windows::Forms::Label^ lbl13;

	private: System::Windows::Forms::Label^ lbl12;

	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::GroupBox^ gbWin;
	private: System::Windows::Forms::Label^ lbl23;
	private: System::Windows::Forms::Label^ lbl22;
	private: System::Windows::Forms::Label^ lbl21;

		   technolibCLR::TechnoClass^ tl = gcnew technolibCLR::TechnoClass;
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	protected:
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^ tsslPercent;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Diagnostics::PerformanceCounter^ perfcCPU;
	private: System::Windows::Forms::Timer^ tmrPerfCounter;
	private: System::Windows::Forms::ToolTip^ toolTipMain;
	private: System::Windows::Forms::ErrorProvider^ errorProviderMain;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->tsslPercent = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->perfcCPU = (gcnew System::Diagnostics::PerformanceCounter());
			this->tmrPerfCounter = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTipMain = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->gbMainFrame = (gcnew System::Windows::Forms::GroupBox());
			this->gbWin = (gcnew System::Windows::Forms::GroupBox());
			this->lbl23 = (gcnew System::Windows::Forms::Label());
			this->lbl22 = (gcnew System::Windows::Forms::Label());
			this->lbl21 = (gcnew System::Windows::Forms::Label());
			this->lbl33 = (gcnew System::Windows::Forms::Label());
			this->lbl32 = (gcnew System::Windows::Forms::Label());
			this->lbl31 = (gcnew System::Windows::Forms::Label());
			this->lbl13 = (gcnew System::Windows::Forms::Label());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->btnSpin = (gcnew System::Windows::Forms::Button());
			this->errorProviderMain = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfcCPU))->BeginInit();
			this->gbMainFrame->SuspendLayout();
			this->gbWin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderMain))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripProgressBar1, this->tsslPercent, this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 603);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->ShowItemToolTips = true;
			this->statusStrip1->Size = System::Drawing::Size(1004, 22);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"Status";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(425, 17);
			this->toolStripStatusLabel1->Spring = true;
			this->toolStripStatusLabel1->Text = L"Total CPU Usage in %: ";
			this->toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->AutoToolTip = true;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->toolStripProgressBar1->ToolTipText = L"Current usage of total processing power";
			// 
			// tsslPercent
			// 
			this->tsslPercent->AutoSize = false;
			this->tsslPercent->Margin = System::Windows::Forms::Padding(-1, 3, 0, 2);
			this->tsslPercent->Name = L"tsslPercent";
			this->tsslPercent->Size = System::Drawing::Size(38, 17);
			this->tsslPercent->Text = L"0% ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(425, 17);
			this->toolStripStatusLabel2->Spring = true;
			this->toolStripStatusLabel2->Text = L"©2020 Frank G. Dahncke";
			this->toolStripStatusLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// perfcCPU
			// 
			this->perfcCPU->CategoryName = L"Processor";
			this->perfcCPU->CounterName = L"% Processor Time";
			this->perfcCPU->InstanceName = L"_Total";
			// 
			// tmrPerfCounter
			// 
			this->tmrPerfCounter->Enabled = true;
			this->tmrPerfCounter->Interval = 1000;
			this->tmrPerfCounter->Tick += gcnew System::EventHandler(this, &frmMain::tmrPerfCounter_Tick);
			// 
			// toolTipMain
			// 
			this->toolTipMain->AutoPopDelay = 5000;
			this->toolTipMain->InitialDelay = 800;
			this->toolTipMain->IsBalloon = true;
			this->toolTipMain->ReshowDelay = 100;
			this->toolTipMain->ToolTipTitle = L"Calculator CLR";
			// 
			// gbMainFrame
			// 
			this->gbMainFrame->Controls->Add(this->gbWin);
			this->gbMainFrame->Controls->Add(this->lbl33);
			this->gbMainFrame->Controls->Add(this->lbl32);
			this->gbMainFrame->Controls->Add(this->lbl31);
			this->gbMainFrame->Controls->Add(this->lbl13);
			this->gbMainFrame->Controls->Add(this->lbl12);
			this->gbMainFrame->Controls->Add(this->lbl11);
			this->gbMainFrame->Controls->Add(this->btnSpin);
			this->gbMainFrame->Location = System::Drawing::Point(12, 12);
			this->gbMainFrame->Name = L"gbMainFrame";
			this->gbMainFrame->Size = System::Drawing::Size(187, 219);
			this->gbMainFrame->TabIndex = 3;
			this->gbMainFrame->TabStop = false;
			this->gbMainFrame->Text = L"The Super Slot Machine";
			this->toolTipMain->SetToolTip(this->gbMainFrame, L"This is the one-armed bandit");
			// 
			// gbWin
			// 
			this->gbWin->Controls->Add(this->lbl23);
			this->gbWin->Controls->Add(this->lbl22);
			this->gbWin->Controls->Add(this->lbl21);
			this->gbWin->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->gbWin->Location = System::Drawing::Point(19, 83);
			this->gbWin->Name = L"gbWin";
			this->gbWin->Size = System::Drawing::Size(141, 48);
			this->gbWin->TabIndex = 12;
			this->gbWin->TabStop = false;
			this->toolTipMain->SetToolTip(this->gbWin, L"The winning row");
			// 
			// lbl23
			// 
			this->lbl23->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl23->Location = System::Drawing::Point(108, 10);
			this->lbl23->Name = L"lbl23";
			this->lbl23->Size = System::Drawing::Size(33, 28);
			this->lbl23->TabIndex = 8;
			this->lbl23->Text = L"*";
			this->lbl23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl23->UseMnemonic = false;
			// 
			// lbl22
			// 
			this->lbl22->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl22->Location = System::Drawing::Point(58, 10);
			this->lbl22->Name = L"lbl22";
			this->lbl22->Size = System::Drawing::Size(33, 28);
			this->lbl22->TabIndex = 7;
			this->lbl22->Text = L"*";
			this->lbl22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl22->UseMnemonic = false;
			// 
			// lbl21
			// 
			this->lbl21->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl21->Location = System::Drawing::Point(-1, 10);
			this->lbl21->Name = L"lbl21";
			this->lbl21->Size = System::Drawing::Size(33, 28);
			this->lbl21->TabIndex = 6;
			this->lbl21->Text = L"*";
			this->lbl21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl21->UseMnemonic = false;
			// 
			// lbl33
			// 
			this->lbl33->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl33->Location = System::Drawing::Point(127, 134);
			this->lbl33->Name = L"lbl33";
			this->lbl33->Size = System::Drawing::Size(33, 28);
			this->lbl33->TabIndex = 11;
			this->lbl33->Text = L"*";
			this->lbl33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl33->UseMnemonic = false;
			// 
			// lbl32
			// 
			this->lbl32->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl32->Location = System::Drawing::Point(77, 134);
			this->lbl32->Name = L"lbl32";
			this->lbl32->Size = System::Drawing::Size(33, 28);
			this->lbl32->TabIndex = 10;
			this->lbl32->Text = L"*";
			this->lbl32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl32->UseMnemonic = false;
			// 
			// lbl31
			// 
			this->lbl31->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl31->Location = System::Drawing::Point(18, 134);
			this->lbl31->Name = L"lbl31";
			this->lbl31->Size = System::Drawing::Size(33, 28);
			this->lbl31->TabIndex = 9;
			this->lbl31->Text = L"*";
			this->lbl31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl31->UseMnemonic = false;
			// 
			// lbl13
			// 
			this->lbl13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl13->Location = System::Drawing::Point(127, 52);
			this->lbl13->Name = L"lbl13";
			this->lbl13->Size = System::Drawing::Size(33, 28);
			this->lbl13->TabIndex = 8;
			this->lbl13->Text = L"*";
			this->lbl13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl13->UseMnemonic = false;
			// 
			// lbl12
			// 
			this->lbl12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->Location = System::Drawing::Point(77, 52);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(33, 28);
			this->lbl12->TabIndex = 7;
			this->lbl12->Text = L"*";
			this->lbl12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl12->UseMnemonic = false;
			// 
			// lbl11
			// 
			this->lbl11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->Location = System::Drawing::Point(18, 52);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(33, 28);
			this->lbl11->TabIndex = 6;
			this->lbl11->Text = L"*";
			this->lbl11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl11->UseMnemonic = false;
			// 
			// btnSpin
			// 
			this->btnSpin->Location = System::Drawing::Point(19, 174);
			this->btnSpin->Name = L"btnSpin";
			this->btnSpin->Size = System::Drawing::Size(141, 21);
			this->btnSpin->TabIndex = 3;
			this->btnSpin->Text = L"SPIN";
			this->toolTipMain->SetToolTip(this->btnSpin, L"Try your luck!");
			this->btnSpin->UseMnemonic = false;
			this->btnSpin->UseVisualStyleBackColor = true;
			this->btnSpin->Click += gcnew System::EventHandler(this, &frmMain::btnSpin_Click);
			// 
			// errorProviderMain
			// 
			this->errorProviderMain->ContainerControl = this;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 625);
			this->Controls->Add(this->gbMainFrame);
			this->Controls->Add(this->statusStrip1);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Techno\'s Super Slot Machine";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfcCPU))->EndInit();
			this->gbMainFrame->ResumeLayout(false);
			this->gbWin->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderMain))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tmrPerfCounter_Tick(System::Object^ sender, System::EventArgs^ e) {
		toolStripProgressBar1->Value = (int)perfcCPU->NextValue();
		tsslPercent->Text = toolStripProgressBar1->Value.ToString() + "% ";
	}
	private:   void SpinIt() {
		Drum one;
		Drum two;
		Drum three;

		vector<char> v1 = one.spin(false);
		vector<char> v2 = two.spin(true); // one must spin backwards else all rows are same on row win
		vector<char> v3 = three.spin(false);

		//middle line
		lbl21->Text = ((wchar_t)v1[1]).ToString();
		lbl22->Text = ((wchar_t)v2[1]).ToString();
		lbl23->Text = ((wchar_t)v3[1]).ToString();

		//top line
		//lbl11->Text = ((wchar_t)one.spin()).ToString();
		lbl11->Text = ((wchar_t)v1[0]).ToString();
		lbl12->Text = ((wchar_t)v2[0]).ToString();
		lbl13->Text = ((wchar_t)v3[0]).ToString();

		//bottom line
		lbl31->Text = ((wchar_t)v1[2]).ToString();
		lbl32->Text = ((wchar_t)v2[2]).ToString();
		lbl33->Text = ((wchar_t)v3[2]).ToString();
	}
	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		tl->InitRNG(); //set up the Random Number Generator
		SpinIt();
	}
	private: System::Void btnSpin_Click(System::Object^ sender, System::EventArgs^ e) {
		SpinIt();
		/* KEEP for debugging
		lbl23->Text = ((wchar_t)'A').ToString();
		lbl22->Text = ((wchar_t)'A').ToString();
		lbl21->Text = ((wchar_t)'A').ToString();
		*/

		if (lbl21->Text == lbl22->Text && (lbl21->Text == lbl23->Text)) {
			MessageBox::Show("You win in the middle row!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			if (lbl11->Text == lbl22->Text && (lbl11->Text == lbl33->Text)) {
				MessageBox::Show("You win in a backslash!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		if (lbl13->Text == lbl22->Text && (lbl13->Text == lbl31->Text)) {
			MessageBox::Show("You win in a slash!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (lbl11->Text == lbl12->Text && (lbl21->Text == lbl23->Text)) {
			MessageBox::Show("You win in the top row!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (lbl31->Text == lbl32->Text && (lbl31->Text == lbl33->Text)) {
			MessageBox::Show("You win in the bottom row!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (lbl21->Text == "1" && lbl22->Text == "2" && lbl23->Text == "3") {
			MessageBox::Show("One-Two-Three! You win the JACKPOT!", "JACKPOT", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	};//btnSpin_Click
}
