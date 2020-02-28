#pragma once
#include "classes.h"
#include "functions.h"

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
	public enum class drum { d1, d2, d3 };
	public ref class frmMain : public System::Windows::Forms::Form

	{
		Currency^ playing_money;
	public:
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			playing_money = gcnew Currency;
			playing_money->changeAmount(10025);// the 25 is b/c load does a click on btnSpin to init display
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

	private: System::Windows::Forms::GroupBox^ gbWin;
	private: System::Windows::Forms::Label^ lbl23;
	private: System::Windows::Forms::Label^ lbl22;
	private: System::Windows::Forms::Label^ lbl21;
	private: System::Windows::Forms::Label^ lblTime;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Button^ btnRespin3;

	private: System::Windows::Forms::Button^ btnRespin2;

	private: System::Windows::Forms::Button^ btnRespin1;
	private: System::Windows::Forms::PictureBox^ picSlotMachine;
	private: System::Windows::Forms::TextBox^ txtCurrency;
	private: System::Windows::Forms::ImageList^ ilFruit;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Button^ btnCalc;
	private: System::Windows::Forms::Button^ btnCashIn;
	private: System::Windows::Forms::Button^ btnUseCode;
	private: System::Windows::Forms::RichTextBox^ rtbOutput;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->tsslPercent = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->perfcCPU = (gcnew System::Diagnostics::PerformanceCounter());
			this->tmrPerfCounter = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTipMain = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->gbMainFrame = (gcnew System::Windows::Forms::GroupBox());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->ilFruit = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnRespin3 = (gcnew System::Windows::Forms::Button());
			this->btnRespin2 = (gcnew System::Windows::Forms::Button());
			this->btnRespin1 = (gcnew System::Windows::Forms::Button());
			this->gbWin = (gcnew System::Windows::Forms::GroupBox());
			this->lbl23 = (gcnew System::Windows::Forms::Label());
			this->lbl22 = (gcnew System::Windows::Forms::Label());
			this->lbl21 = (gcnew System::Windows::Forms::Label());
			this->lbl33 = (gcnew System::Windows::Forms::Label());
			this->lbl32 = (gcnew System::Windows::Forms::Label());
			this->lbl31 = (gcnew System::Windows::Forms::Label());
			this->lbl13 = (gcnew System::Windows::Forms::Label());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->btnSpin = (gcnew System::Windows::Forms::Button());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->btnCalc = (gcnew System::Windows::Forms::Button());
			this->btnCashIn = (gcnew System::Windows::Forms::Button());
			this->btnUseCode = (gcnew System::Windows::Forms::Button());
			this->errorProviderMain = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->picSlotMachine = (gcnew System::Windows::Forms::PictureBox());
			this->txtCurrency = (gcnew System::Windows::Forms::TextBox());
			this->rtbOutput = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfcCPU))->BeginInit();
			this->gbMainFrame->SuspendLayout();
			this->gbWin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderMain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSlotMachine))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripProgressBar1, this->tsslPercent, this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 326);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->ShowItemToolTips = true;
			this->statusStrip1->Size = System::Drawing::Size(571, 22);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"Status";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(208, 17);
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
			this->toolStripStatusLabel2->Size = System::Drawing::Size(208, 17);
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
			this->toolTipMain->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTipMain->ToolTipTitle = L"Super Slot Machine";
			// 
			// gbMainFrame
			// 
			this->gbMainFrame->CausesValidation = false;
			this->gbMainFrame->Controls->Add(this->lbl11);
			this->gbMainFrame->Controls->Add(this->btnRespin3);
			this->gbMainFrame->Controls->Add(this->btnRespin2);
			this->gbMainFrame->Controls->Add(this->btnRespin1);
			this->gbMainFrame->Controls->Add(this->gbWin);
			this->gbMainFrame->Controls->Add(this->lbl33);
			this->gbMainFrame->Controls->Add(this->lbl32);
			this->gbMainFrame->Controls->Add(this->lbl31);
			this->gbMainFrame->Controls->Add(this->lbl13);
			this->gbMainFrame->Controls->Add(this->lbl12);
			this->gbMainFrame->Controls->Add(this->btnSpin);
			this->gbMainFrame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gbMainFrame->Location = System::Drawing::Point(12, 12);
			this->gbMainFrame->Name = L"gbMainFrame";
			this->gbMainFrame->Size = System::Drawing::Size(187, 309);
			this->gbMainFrame->TabIndex = 3;
			this->gbMainFrame->TabStop = false;
			this->gbMainFrame->Text = L"The Super Slot Machine";
			this->toolTipMain->SetToolTip(this->gbMainFrame, L"This is the one-armed bandit");
			// 
			// lbl11
			// 
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorProviderMain->SetIconAlignment(this->lbl11, System::Windows::Forms::ErrorIconAlignment::MiddleLeft);
			this->lbl11->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->lbl11->ImageIndex = 0;
			this->lbl11->ImageList = this->ilFruit;
			this->lbl11->Location = System::Drawing::Point(18, 39);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(33, 41);
			this->lbl11->TabIndex = 16;
			this->lbl11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbl11->UseMnemonic = false;
			// 
			// ilFruit
			// 
			this->ilFruit->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ilFruit.ImageStream")));
			this->ilFruit->TransparentColor = System::Drawing::Color::Transparent;
			this->ilFruit->Images->SetKeyName(0, L"001-strawberry.png");
			this->ilFruit->Images->SetKeyName(1, L"002-avocado.png");
			this->ilFruit->Images->SetKeyName(2, L"003-cherries.png");
			this->ilFruit->Images->SetKeyName(3, L"004-grape.png");
			this->ilFruit->Images->SetKeyName(4, L"005-orange.png");
			this->ilFruit->Images->SetKeyName(5, L"006-diet.png");
			this->ilFruit->Images->SetKeyName(6, L"007-avocado-1.png");
			this->ilFruit->Images->SetKeyName(7, L"008-watermelon.png");
			this->ilFruit->Images->SetKeyName(8, L"009-olive.png");
			this->ilFruit->Images->SetKeyName(9, L"010-apple.png");
			this->ilFruit->Images->SetKeyName(10, L"011-orange-1.png");
			this->ilFruit->Images->SetKeyName(11, L"012-cabbage.png");
			this->ilFruit->Images->SetKeyName(12, L"013-fruits.png");
			this->ilFruit->Images->SetKeyName(13, L"014-cabbage-1.png");
			this->ilFruit->Images->SetKeyName(14, L"015-acorn.png");
			this->ilFruit->Images->SetKeyName(15, L"016-banana.png");
			// 
			// btnRespin3
			// 
			this->btnRespin3->Location = System::Drawing::Point(131, 223);
			this->btnRespin3->Name = L"btnRespin3";
			this->btnRespin3->Size = System::Drawing::Size(28, 27);
			this->btnRespin3->TabIndex = 15;
			this->btnRespin3->Text = L"^";
			this->toolTipMain->SetToolTip(this->btnRespin3, L"Re-spin drum 3. Costs 100.");
			this->btnRespin3->UseMnemonic = false;
			this->btnRespin3->UseVisualStyleBackColor = true;
			this->btnRespin3->Click += gcnew System::EventHandler(this, &frmMain::btnRespin3_Click);
			// 
			// btnRespin2
			// 
			this->btnRespin2->Location = System::Drawing::Point(77, 223);
			this->btnRespin2->Name = L"btnRespin2";
			this->btnRespin2->Size = System::Drawing::Size(28, 27);
			this->btnRespin2->TabIndex = 14;
			this->btnRespin2->Text = L"^";
			this->toolTipMain->SetToolTip(this->btnRespin2, L"Re-spin drum 2. Costs 100.");
			this->btnRespin2->UseMnemonic = false;
			this->btnRespin2->UseVisualStyleBackColor = true;
			this->btnRespin2->Click += gcnew System::EventHandler(this, &frmMain::btnRespin2_Click);
			// 
			// btnRespin1
			// 
			this->btnRespin1->Location = System::Drawing::Point(19, 223);
			this->btnRespin1->Name = L"btnRespin1";
			this->btnRespin1->Size = System::Drawing::Size(28, 27);
			this->btnRespin1->TabIndex = 13;
			this->btnRespin1->Text = L"^";
			this->toolTipMain->SetToolTip(this->btnRespin1, L"Re-spin drum 1. Costs 100.");
			this->btnRespin1->UseMnemonic = false;
			this->btnRespin1->UseVisualStyleBackColor = true;
			this->btnRespin1->Click += gcnew System::EventHandler(this, &frmMain::btnRespin1_Click);
			// 
			// gbWin
			// 
			this->gbWin->Controls->Add(this->lbl23);
			this->gbWin->Controls->Add(this->lbl22);
			this->gbWin->Controls->Add(this->lbl21);
			this->gbWin->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->gbWin->Location = System::Drawing::Point(19, 83);
			this->gbWin->Name = L"gbWin";
			this->gbWin->Size = System::Drawing::Size(141, 65);
			this->gbWin->TabIndex = 12;
			this->gbWin->TabStop = false;
			this->toolTipMain->SetToolTip(this->gbWin, L"The winning row");
			// 
			// lbl23
			// 
			this->lbl23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl23->ImageIndex = 0;
			this->lbl23->ImageList = this->ilFruit;
			this->lbl23->Location = System::Drawing::Point(108, 12);
			this->lbl23->Name = L"lbl23";
			this->lbl23->Size = System::Drawing::Size(33, 50);
			this->lbl23->TabIndex = 8;
			this->lbl23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl23->UseMnemonic = false;
			// 
			// lbl22
			// 
			this->lbl22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl22->ImageIndex = 0;
			this->lbl22->ImageList = this->ilFruit;
			this->lbl22->Location = System::Drawing::Point(58, 12);
			this->lbl22->Name = L"lbl22";
			this->lbl22->Size = System::Drawing::Size(33, 50);
			this->lbl22->TabIndex = 7;
			this->lbl22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl22->UseMnemonic = false;
			// 
			// lbl21
			// 
			this->lbl21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl21->ImageIndex = 0;
			this->lbl21->ImageList = this->ilFruit;
			this->lbl21->Location = System::Drawing::Point(-1, 12);
			this->lbl21->Name = L"lbl21";
			this->lbl21->Size = System::Drawing::Size(33, 50);
			this->lbl21->TabIndex = 6;
			this->lbl21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl21->UseMnemonic = false;
			// 
			// lbl33
			// 
			this->lbl33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl33->ImageIndex = 0;
			this->lbl33->ImageList = this->ilFruit;
			this->lbl33->Location = System::Drawing::Point(127, 164);
			this->lbl33->Name = L"lbl33";
			this->lbl33->Size = System::Drawing::Size(33, 41);
			this->lbl33->TabIndex = 11;
			this->lbl33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl33->UseMnemonic = false;
			// 
			// lbl32
			// 
			this->lbl32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl32->ImageIndex = 0;
			this->lbl32->ImageList = this->ilFruit;
			this->lbl32->Location = System::Drawing::Point(77, 164);
			this->lbl32->Name = L"lbl32";
			this->lbl32->Size = System::Drawing::Size(33, 41);
			this->lbl32->TabIndex = 10;
			this->lbl32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl32->UseMnemonic = false;
			// 
			// lbl31
			// 
			this->lbl31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl31->ImageIndex = 0;
			this->lbl31->ImageList = this->ilFruit;
			this->lbl31->Location = System::Drawing::Point(19, 164);
			this->lbl31->Name = L"lbl31";
			this->lbl31->Size = System::Drawing::Size(33, 41);
			this->lbl31->TabIndex = 9;
			this->lbl31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl31->UseMnemonic = false;
			// 
			// lbl13
			// 
			this->lbl13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl13->ImageIndex = 0;
			this->lbl13->ImageList = this->ilFruit;
			this->lbl13->Location = System::Drawing::Point(127, 39);
			this->lbl13->Name = L"lbl13";
			this->lbl13->Size = System::Drawing::Size(33, 41);
			this->lbl13->TabIndex = 8;
			this->lbl13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl13->UseMnemonic = false;
			// 
			// lbl12
			// 
			this->lbl12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->ImageIndex = 0;
			this->lbl12->ImageList = this->ilFruit;
			this->lbl12->Location = System::Drawing::Point(77, 39);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(33, 41);
			this->lbl12->TabIndex = 7;
			this->lbl12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl12->UseMnemonic = false;
			// 
			// btnSpin
			// 
			this->btnSpin->Location = System::Drawing::Point(19, 268);
			this->btnSpin->Name = L"btnSpin";
			this->btnSpin->Size = System::Drawing::Size(141, 21);
			this->btnSpin->TabIndex = 3;
			this->btnSpin->Text = L"SPIN";
			this->toolTipMain->SetToolTip(this->btnSpin, L"Try your luck! Costs 25.");
			this->btnSpin->UseMnemonic = false;
			this->btnSpin->UseVisualStyleBackColor = true;
			this->btnSpin->Click += gcnew System::EventHandler(this, &frmMain::btnSpin_Click);
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(412, 13);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(142, 24);
			this->lblDate->TabIndex = 4;
			this->lblDate->Text = L"25-FEB-2020";
			this->lblDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTipMain->SetToolTip(this->lblDate, L"Date");
			// 
			// lblTime
			// 
			this->lblTime->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->Location = System::Drawing::Point(412, 37);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(142, 24);
			this->lblTime->TabIndex = 5;
			this->lblTime->Text = L"00:00:00";
			this->lblTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTipMain->SetToolTip(this->lblTime, L"Timr");
			// 
			// btnCalc
			// 
			this->btnCalc->Location = System::Drawing::Point(412, 75);
			this->btnCalc->Name = L"btnCalc";
			this->btnCalc->Size = System::Drawing::Size(141, 36);
			this->btnCalc->TabIndex = 8;
			this->btnCalc->Text = L"&Calculator";
			this->toolTipMain->SetToolTip(this->btnCalc, L"Useful mathematical functions for winning");
			this->btnCalc->UseVisualStyleBackColor = true;
			this->btnCalc->Click += gcnew System::EventHandler(this, &frmMain::btnCalc_Click);
			// 
			// btnCashIn
			// 
			this->btnCashIn->Location = System::Drawing::Point(219, 235);
			this->btnCashIn->Name = L"btnCashIn";
			this->btnCashIn->Size = System::Drawing::Size(164, 28);
			this->btnCashIn->TabIndex = 9;
			this->btnCashIn->Text = L"Cash &In";
			this->toolTipMain->SetToolTip(this->btnCashIn, L"Get a code for you money so you can play on later.");
			this->btnCashIn->UseVisualStyleBackColor = true;
			this->btnCashIn->Click += gcnew System::EventHandler(this, &frmMain::btnCashIn_Click);
			// 
			// btnUseCode
			// 
			this->btnUseCode->Location = System::Drawing::Point(220, 276);
			this->btnUseCode->Name = L"btnUseCode";
			this->btnUseCode->Size = System::Drawing::Size(164, 28);
			this->btnUseCode->TabIndex = 10;
			this->btnUseCode->Text = L"&Redeem code";
			this->toolTipMain->SetToolTip(this->btnUseCode, L"Redeem a code you were given.");
			this->btnUseCode->UseVisualStyleBackColor = true;
			this->btnUseCode->Click += gcnew System::EventHandler(this, &frmMain::btnUseCode_Click);
			// 
			// errorProviderMain
			// 
			this->errorProviderMain->ContainerControl = this;
			// 
			// picSlotMachine
			// 
			this->picSlotMachine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSlotMachine.Image")));
			this->picSlotMachine->Location = System::Drawing::Point(214, 12);
			this->picSlotMachine->Name = L"picSlotMachine";
			this->picSlotMachine->Size = System::Drawing::Size(170, 165);
			this->picSlotMachine->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSlotMachine->TabIndex = 6;
			this->picSlotMachine->TabStop = false;
			// 
			// txtCurrency
			// 
			this->txtCurrency->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCurrency->Location = System::Drawing::Point(215, 186);
			this->txtCurrency->Name = L"txtCurrency";
			this->txtCurrency->ReadOnly = true;
			this->txtCurrency->Size = System::Drawing::Size(168, 31);
			this->txtCurrency->TabIndex = 7;
			this->txtCurrency->TabStop = false;
			this->txtCurrency->Text = L"1000";
			this->txtCurrency->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtCurrency->WordWrap = false;
			// 
			// rtbOutput
			// 
			this->rtbOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbOutput->CausesValidation = false;
			this->rtbOutput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbOutput->Location = System::Drawing::Point(412, 167);
			this->rtbOutput->Name = L"rtbOutput";
			this->rtbOutput->ReadOnly = true;
			this->rtbOutput->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->rtbOutput->ShortcutsEnabled = false;
			this->rtbOutput->Size = System::Drawing::Size(142, 137);
			this->rtbOutput->TabIndex = 11;
			this->rtbOutput->Text = L"\nHit SPIN to begin!";
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 348);
			this->Controls->Add(this->rtbOutput);
			this->Controls->Add(this->btnUseCode);
			this->Controls->Add(this->btnCashIn);
			this->Controls->Add(this->btnCalc);
			this->Controls->Add(this->txtCurrency);
			this->Controls->Add(this->picSlotMachine);
			this->Controls->Add(this->lblTime);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->gbMainFrame);
			this->Controls->Add(this->statusStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSlotMachine))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tmrPerfCounter_Tick(System::Object^ sender, System::EventArgs^ e) {
		toolStripProgressBar1->Value = (int)perfcCPU->NextValue();
		tsslPercent->Text = toolStripProgressBar1->Value.ToString() + "% ";
		DateTime dt;
		lblTime->Text = dt.Now.ToLongTimeString();
	}
	private: void RespinIt(drum mydrum) {
		rtbOutput->Clear(); //remove any messages

		Drum dr;
		vector<char> vec;
		switch (mydrum)
		{
		case SuperSlotMachine::drum::d1:
			vec = dr.spin(false);
			lbl11->ImageIndex = Char2Int((wchar_t)vec[0]);
			lbl21->ImageIndex = Char2Int((wchar_t)vec[1]);
			lbl31->ImageIndex = Char2Int((wchar_t)vec[2]);
			break;
		case SuperSlotMachine::drum::d2:
			vec = dr.spin(true);
			lbl12->ImageIndex = Char2Int((wchar_t)vec[0]);
			lbl22->ImageIndex = Char2Int((wchar_t)vec[1]);
			lbl32->ImageIndex = Char2Int((wchar_t)vec[2]);
			break;
		case SuperSlotMachine::drum::d3:
			vec = dr.spin(false);
			lbl13->ImageIndex = Char2Int((wchar_t)vec[0]);
			lbl23->ImageIndex = Char2Int((wchar_t)vec[1]);
			lbl33->ImageIndex = Char2Int((wchar_t)vec[2]);
			break;
		default:
			break;
		}
		playing_money->changeAmount(-100);
		CheckForWin();
		ReDraw();
	} // ReSpin
	private: int Char2Int(wchar_t spinchar) {// convert the original vector to int
		switch (spinchar)
		{
		case '0':
			return 0;
			break;
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
		case 'A':
			return 10;
			break;
		case 'B':
			return 11;
			break;
		case 'C':
			return 12;
			break;
		case 'D':
			return 13;
			break;
		case 'E':
			return 14;
			break;
		case 'F':
			return 15;
			break;
		default:
			break;
		}
	}
	private:   void SpinIt() {
		rtbOutput->Clear(); //remove any messages, this is a new game

		Drum one;
		Drum two;
		Drum three;

		vector<char> v1 = one.spin(false);
		vector<char> v2 = two.spin(true); // one must spin backwards else all rows are same on row win
		vector<char> v3 = three.spin(false);

		//middle line
		lbl21->ImageIndex = Char2Int((wchar_t)v1[1]);
		lbl22->ImageIndex = Char2Int((wchar_t)v2[1]);
		lbl23->ImageIndex = Char2Int((wchar_t)v3[1]);

		//top line
		//lbl11->Text = ((wchar_t)one.spin()).ToString();
		lbl11->ImageIndex = Char2Int((wchar_t)v1[2]);
		lbl12->ImageIndex = Char2Int((wchar_t)v2[2]);
		lbl13->ImageIndex = Char2Int((wchar_t)v3[2]);

		//bottom line
		lbl31->ImageIndex = Char2Int((wchar_t)v1[0]);
		lbl32->ImageIndex = Char2Int((wchar_t)v2[0]);
		lbl33->ImageIndex = Char2Int((wchar_t)v3[0]);

		playing_money->changeAmount(-25);
		ReDraw();
	}
	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		lblDate->Text = tl->currentDECDate();
		tl->InitRNG(); //set up the Random Number Generator
		SpinIt();
		this->Text += " V" + "1.1";// Application::ProductVersion;
	}
	private: Void CheckForWin() {
		int winnings = 0;
		bool jackpot = false;
		if (lbl21->ImageIndex == lbl22->ImageIndex && (lbl21->ImageIndex == lbl23->ImageIndex)) {
			winnings += 1000;
			MessageBox::Show("You win in the middle row!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if (lbl11->ImageIndex == lbl22->ImageIndex && (lbl11->ImageIndex == lbl33->ImageIndex)) {
			winnings += 1000;
			MessageBox::Show("You win in a backslash!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if (lbl13->ImageIndex == lbl22->ImageIndex && (lbl13->ImageIndex == lbl31->ImageIndex)) {
			winnings += 1000;
			MessageBox::Show("You win in a slash!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (lbl11->ImageIndex == lbl12->ImageIndex && (lbl11->ImageIndex == lbl13->ImageIndex)) {
			winnings += 1000;
			MessageBox::Show("You win in the top row!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (lbl31->ImageIndex == lbl32->ImageIndex && (lbl31->ImageIndex == lbl33->ImageIndex)) {
			winnings += 1000;
			MessageBox::Show("You win in the bottom row!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (lbl21->ImageIndex == 12 && lbl22->ImageIndex == 12 && lbl23->ImageIndex == 12) { //fruit basket
			winnings += 100000;
			try
			{
				String^ dir = System::IO::Path::GetDirectoryName(Application::ExecutablePath);

				rtbOutput->LoadFile(System::String::Concat(dir, "\\JACKPOT.rtf"));
			}
			catch (Exception ^ ex)
			{
				MessageBox::Show(ex->Message, "Jackpot.rtf");
			}
			MessageBox::Show("One-Two-Three! You win the JACKPOT!", "JACKPOT", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		playing_money->changeAmount(winnings);

		if (!jackpot) {
			Transmute t;
			if (winnings > 0) {
				//rtbOutput->Rtf = t.PlainTextToRtf("WIN!");
				rtbOutput->Text = "You win " + winnings.ToString();
			}
			else
			{
				//rtbOutput->Rtf = t.PlainTextToRtf("no win");
				rtbOutput->Text = "no win...";
			};
		};
		ReDraw();
	}
	private: System::Void btnSpin_Click(System::Object^ sender, System::EventArgs^ e) {
		SpinIt();
		/* KEEP for debugging
		lbl21->ImageIndex = 12;
		lbl22->ImageIndex = 12;
		lbl23->ImageIndex = 12;
*/
		CheckForWin();
	}
	private: System::Void btnRespin1_Click(System::Object^ sender, System::EventArgs^ e) {
		RespinIt(drum::d1);
	}
	private: System::Void btnRespin2_Click(System::Object^ sender, System::EventArgs^ e) {
		RespinIt(drum::d2);
	}
	private: System::Void btnRespin3_Click(System::Object^ sender, System::EventArgs^ e) {
		RespinIt(drum::d3);
	}

	private: void ReDraw() {
		txtCurrency->Text = playing_money->getAmount().ToString();
	}
	private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::Diagnostics::Process^ CalcProc = gcnew System::Diagnostics::Process;
			String^ dir = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
			//MessageBox::Show(System::String::Concat(dir, "\\CalculatorCLR.exe"));
			CalcProc->StartInfo->FileName = System::String::Concat(dir, "\\CalculatorCLR.exe");
			CalcProc->StartInfo->WindowStyle = System::Diagnostics::ProcessWindowStyle::Normal;
			CalcProc->Start();
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show(ex->Message, "Calculator start failed");
		}
	}
	private: System::Void btnCashIn_Click(System::Object^ sender, System::EventArgs^ e) {
		CryptIt ci;
		String^ lsCode = ci.Encrypt(txtCurrency->Text);
		MessageBox::Show("Your cash code is\n\n" + lsCode + "\n\nIt has also been copied into the clipboard.", "Cash Retrieval");
		//MessageBox::Show(ci.Decrypt(lsCode), "Decode");
		txtCurrency->Text = "0";
		Clipboard::SetDataObject(lsCode, true, 10, 100);
	}
	private: System::Void btnUseCode_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input = Microsoft::VisualBasic::Interaction::InputBox("What is the code?", "Redeem Code", "enter code here", -1, -1);
		//MessageBox::Show(input);
		if (input == "") {
			return; // user canceled
		}

		CryptIt ci;
		String^ lsCode = ci.Decrypt(input);

		if (tl->IsNumeric(lsCode)) {
			txtCurrency->Text = lsCode;
		}
		else {
			MessageBox::Show(lsCode + " is not a valid code, sorry.", "Invalid code", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
};
