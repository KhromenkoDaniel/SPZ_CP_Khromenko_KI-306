#pragma once
#include <iostream>
#include <Windows.h>
#include <Psapi.h>
#include <string>
#include <pdhmsg.h>
#include <sstream>
#include <Pdh.h>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <msclr/marshal_cppstd.h> 
#include <filesystem>
#include <Shellapi.h>

#include <tlhelp32.h>
#include <tchar.h>
#include <locale>
#include <vector>
#pragma comment(lib, "pdh.lib")

#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "Advapi32.lib")
#pragma comment(lib,"user32.lib")
#pragma comment(lib,"Shell32.lib")
#pragma comment(lib,"ole32.lib")
namespace KursachForm {
	using namespace System::Security::Permissions;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	[SecurityPermission(SecurityAction::Demand, Flags = SecurityPermissionFlag::UnmanagedCode)]
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
	private: System::Windows::Forms::Label^ labelAuthor;










	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Timer^ timerForList;


	private: System::Windows::Forms::ListView^ listViewSystem;
	private: System::Windows::Forms::ProgressBar^ progressMemory;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ memoryLabel;
	private: System::Windows::Forms::TrackBar^ trackResolution;

	private: System::Windows::Forms::Label^ labelForGraphics;
	private: System::Windows::Forms::Label^ labelResol;
	private: System::Windows::Forms::Label^ labelNativeResolution;
	private: System::Windows::Forms::Label^ labelMinResol;


	private: System::Windows::Forms::CheckBox^ checkAnimation;
	private: System::Windows::Forms::CheckBox^ checkOpacity;
	private: int screenWidth;
	private: int screenHeight;
	private:int currentIndexColumn = 100;
	private: System::Collections::Generic::List<int>^ checkSomeValue;
	private: System::Windows::Forms::TabControl^ tabMenu;


	private:   System::Diagnostics::PerformanceCounter^ ramCounter;
	private:   array<PerformanceCounter^>^ memoryCounters;
	private: array<PerformanceCounter^>^ cpuCounters;
	private: System::Collections::Generic::List<System::Diagnostics::Process^>^ processes;

	private: System::Windows::Forms::TabPage^ tabStartUp;
	private: System::Windows::Forms::TabPage^ tabGraphic;
	private: System::Windows::Forms::TabPage^ tabTask;

	private: System::Windows::Forms::Label^ labelStatup;


	private: System::Windows::Forms::Timer^ timerStartUp;
	private: System::Windows::Forms::ListView^ listViewStart;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Timer^ timerTaskManage;
	private: System::Windows::Forms::ListView^ listViewTask;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;

	private:DWORD previousAttributes;
	private: ULONGLONG systemElapsedTime = 0;
	private: ULONGLONG previousProcessTotalTime = 0;


	private: System::Windows::Forms::CheckedListBox^ checkedListOthers;
	private: System::Diagnostics::PerformanceCounter^ performanceCPU;



	private: System::Windows::Forms::Label^ labelAboutUS;
	private: System::Windows::Forms::CheckBox^ checkShido;
	private: System::Windows::Forms::CheckBox^ checkDefender;
	private: System::Windows::Forms::CheckBox^ checkFireWall;















	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timerForList = (gcnew System::Windows::Forms::Timer(this->components));
			this->listViewSystem = (gcnew System::Windows::Forms::ListView());
			this->progressMemory = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->memoryLabel = (gcnew System::Windows::Forms::Label());
			this->trackResolution = (gcnew System::Windows::Forms::TrackBar());
			this->labelForGraphics = (gcnew System::Windows::Forms::Label());
			this->labelResol = (gcnew System::Windows::Forms::Label());
			this->labelNativeResolution = (gcnew System::Windows::Forms::Label());
			this->labelMinResol = (gcnew System::Windows::Forms::Label());
			this->checkOpacity = (gcnew System::Windows::Forms::CheckBox());
			this->checkAnimation = (gcnew System::Windows::Forms::CheckBox());
			this->tabMenu = (gcnew System::Windows::Forms::TabControl());
			this->tabStartUp = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listViewStart = (gcnew System::Windows::Forms::ListView());
			this->labelStatup = (gcnew System::Windows::Forms::Label());
			this->tabGraphic = (gcnew System::Windows::Forms::TabPage());
			this->checkFireWall = (gcnew System::Windows::Forms::CheckBox());
			this->checkDefender = (gcnew System::Windows::Forms::CheckBox());
			this->checkShido = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkedListOthers = (gcnew System::Windows::Forms::CheckedListBox());
			this->tabTask = (gcnew System::Windows::Forms::TabPage());
			this->listViewTask = (gcnew System::Windows::Forms::ListView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->labelAboutUS = (gcnew System::Windows::Forms::Label());
			this->timerStartUp = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerTaskManage = (gcnew System::Windows::Forms::Timer(this->components));
			this->performanceCPU = (gcnew System::Diagnostics::PerformanceCounter());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackResolution))->BeginInit();
			this->tabMenu->SuspendLayout();
			this->tabStartUp->SuspendLayout();
			this->tabGraphic->SuspendLayout();
			this->tabTask->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCPU))->BeginInit();
			this->SuspendLayout();
			// 
			// labelAuthor
			// 
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAuthor->Location = System::Drawing::Point(-518, 713);
			this->labelAuthor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(291, 20);
			this->labelAuthor->TabIndex = 0;
			this->labelAuthor->Text = L"Maksym Lutsiuk`s Optimization machine";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 12);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// timerForList
			// 
			this->timerForList->Interval = 2000;
			this->timerForList->Tick += gcnew System::EventHandler(this, &MyForm::timerForList_Tick);
			// 
			// listViewSystem
			// 
			this->listViewSystem->GridLines = true;
			this->listViewSystem->HideSelection = false;
			this->listViewSystem->Location = System::Drawing::Point(12, 394);
			this->listViewSystem->Margin = System::Windows::Forms::Padding(2);
			this->listViewSystem->Name = L"listViewSystem";
			this->listViewSystem->Scrollable = false;
			this->listViewSystem->Size = System::Drawing::Size(553, 140);
			this->listViewSystem->TabIndex = 10;
			this->listViewSystem->UseCompatibleStateImageBehavior = false;
			this->listViewSystem->View = System::Windows::Forms::View::Details;
			// 
			// progressMemory
			// 
			this->progressMemory->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->progressMemory->Location = System::Drawing::Point(160, 370);
			this->progressMemory->Margin = System::Windows::Forms::Padding(2);
			this->progressMemory->Name = L"progressMemory";
			this->progressMemory->Size = System::Drawing::Size(210, 19);
			this->progressMemory->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 370);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(374, 370);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"max";
			// 
			// memoryLabel
			// 
			this->memoryLabel->AutoSize = true;
			this->memoryLabel->Location = System::Drawing::Point(232, 355);
			this->memoryLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->memoryLabel->Name = L"memoryLabel";
			this->memoryLabel->Size = System::Drawing::Size(105, 13);
			this->memoryLabel->TabIndex = 14;
			this->memoryLabel->Text = L"Використання ОЗУ";
			// 
			// trackResolution
			// 
			this->trackResolution->LargeChange = 1;
			this->trackResolution->Location = System::Drawing::Point(241, 72);
			this->trackResolution->Margin = System::Windows::Forms::Padding(2);
			this->trackResolution->Maximum = 4;
			this->trackResolution->Name = L"trackResolution";
			this->trackResolution->Size = System::Drawing::Size(215, 45);
			this->trackResolution->TabIndex = 15;
			this->trackResolution->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackResolution_ValueChanged);
			// 
			// labelForGraphics
			// 
			this->labelForGraphics->AutoSize = true;
			this->labelForGraphics->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelForGraphics->Location = System::Drawing::Point(162, 11);
			this->labelForGraphics->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelForGraphics->Name = L"labelForGraphics";
			this->labelForGraphics->Size = System::Drawing::Size(255, 26);
			this->labelForGraphics->TabIndex = 16;
			this->labelForGraphics->Text = L"Налаштування графіки ";
			// 
			// labelResol
			// 
			this->labelResol->AutoSize = true;
			this->labelResol->Location = System::Drawing::Point(25, 86);
			this->labelResol->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelResol->Name = L"labelResol";
			this->labelResol->Size = System::Drawing::Size(140, 13);
			this->labelResol->TabIndex = 17;
			this->labelResol->Text = L"Зміна роздатної здатності";
			// 
			// labelNativeResolution
			// 
			this->labelNativeResolution->AutoSize = true;
			this->labelNativeResolution->Location = System::Drawing::Point(238, 128);
			this->labelNativeResolution->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNativeResolution->Name = L"labelNativeResolution";
			this->labelNativeResolution->Size = System::Drawing::Size(38, 13);
			this->labelNativeResolution->TabIndex = 18;
			this->labelNativeResolution->Text = L"Native";
			// 
			// labelMinResol
			// 
			this->labelMinResol->AutoSize = true;
			this->labelMinResol->Location = System::Drawing::Point(411, 128);
			this->labelMinResol->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMinResol->Name = L"labelMinResol";
			this->labelMinResol->Size = System::Drawing::Size(54, 13);
			this->labelMinResol->TabIndex = 19;
			this->labelMinResol->Text = L"1024/576";
			// 
			// checkOpacity
			// 
			this->checkOpacity->AutoSize = true;
			this->checkOpacity->Location = System::Drawing::Point(28, 166);
			this->checkOpacity->Margin = System::Windows::Forms::Padding(2);
			this->checkOpacity->Name = L"checkOpacity";
			this->checkOpacity->Size = System::Drawing::Size(112, 17);
			this->checkOpacity->TabIndex = 20;
			this->checkOpacity->Text = L"Прозорість вікон";
			this->checkOpacity->UseVisualStyleBackColor = true;
			this->checkOpacity->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkOpacity_CheckedChanged);
			// 
			// checkAnimation
			// 
			this->checkAnimation->AutoSize = true;
			this->checkAnimation->Location = System::Drawing::Point(28, 187);
			this->checkAnimation->Margin = System::Windows::Forms::Padding(2);
			this->checkAnimation->Name = L"checkAnimation";
			this->checkAnimation->Size = System::Drawing::Size(121, 17);
			this->checkAnimation->TabIndex = 21;
			this->checkAnimation->Text = L"Анімації у Windows";
			this->checkAnimation->UseVisualStyleBackColor = true;
			this->checkAnimation->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkAnimation_CheckedChanged);
			// 
			// tabMenu
			// 
			this->tabMenu->Controls->Add(this->tabStartUp);
			this->tabMenu->Controls->Add(this->tabGraphic);
			this->tabMenu->Controls->Add(this->tabTask);
			this->tabMenu->Controls->Add(this->tabPage1);
			this->tabMenu->Location = System::Drawing::Point(9, 13);
			this->tabMenu->Margin = System::Windows::Forms::Padding(2);
			this->tabMenu->Name = L"tabMenu";
			this->tabMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabMenu->SelectedIndex = 3;
			this->tabMenu->Size = System::Drawing::Size(555, 343);
			this->tabMenu->TabIndex = 23;
			this->tabMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabMenu_SelectedIndexChanged);
			this->tabMenu->Deselected += gcnew System::Windows::Forms::TabControlEventHandler(this, &MyForm::tabMenu_Deselected);
			// 
			// tabStartUp
			// 
			this->tabStartUp->Controls->Add(this->label4);
			this->tabStartUp->Controls->Add(this->listViewStart);
			this->tabStartUp->Controls->Add(this->labelStatup);
			this->tabStartUp->Location = System::Drawing::Point(4, 22);
			this->tabStartUp->Margin = System::Windows::Forms::Padding(2);
			this->tabStartUp->Name = L"tabStartUp";
			this->tabStartUp->Padding = System::Windows::Forms::Padding(2);
			this->tabStartUp->Size = System::Drawing::Size(547, 317);
			this->tabStartUp->TabIndex = 0;
			this->tabStartUp->Text = L"Автозапуск";
			this->tabStartUp->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 269);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Подвійний клік для видалення";
			// 
			// listViewStart
			// 
			this->listViewStart->GridLines = true;
			this->listViewStart->HideSelection = false;
			this->listViewStart->Location = System::Drawing::Point(4, 112);
			this->listViewStart->Margin = System::Windows::Forms::Padding(2);
			this->listViewStart->Name = L"listViewStart";
			this->listViewStart->Scrollable = false;
			this->listViewStart->Size = System::Drawing::Size(360, 140);
			this->listViewStart->TabIndex = 24;
			this->listViewStart->UseCompatibleStateImageBehavior = false;
			this->listViewStart->View = System::Windows::Forms::View::Details;
			this->listViewStart->DoubleClick += gcnew System::EventHandler(this, &MyForm::listViewStart_DoubleClick);
			// 
			// labelStatup
			// 
			this->labelStatup->AutoSize = true;
			this->labelStatup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelStatup->Location = System::Drawing::Point(115, 17);
			this->labelStatup->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelStatup->Name = L"labelStatup";
			this->labelStatup->Size = System::Drawing::Size(355, 20);
			this->labelStatup->TabIndex = 2;
			this->labelStatup->Text = L"Налаштування програм при Автозапуску";
			// 
			// tabGraphic
			// 
			this->tabGraphic->Controls->Add(this->checkFireWall);
			this->tabGraphic->Controls->Add(this->checkDefender);
			this->tabGraphic->Controls->Add(this->checkShido);
			this->tabGraphic->Controls->Add(this->label7);
			this->tabGraphic->Controls->Add(this->labelForGraphics);
			this->tabGraphic->Controls->Add(this->button1);
			this->tabGraphic->Controls->Add(this->checkedListOthers);
			this->tabGraphic->Controls->Add(this->labelResol);
			this->tabGraphic->Controls->Add(this->checkAnimation);
			this->tabGraphic->Controls->Add(this->trackResolution);
			this->tabGraphic->Controls->Add(this->checkOpacity);
			this->tabGraphic->Controls->Add(this->labelNativeResolution);
			this->tabGraphic->Controls->Add(this->labelMinResol);
			this->tabGraphic->Location = System::Drawing::Point(4, 22);
			this->tabGraphic->Margin = System::Windows::Forms::Padding(2);
			this->tabGraphic->Name = L"tabGraphic";
			this->tabGraphic->Padding = System::Windows::Forms::Padding(2);
			this->tabGraphic->Size = System::Drawing::Size(547, 317);
			this->tabGraphic->TabIndex = 1;
			this->tabGraphic->Text = L"Графіка";
			this->tabGraphic->UseVisualStyleBackColor = true;
			// 
			// checkFireWall
			// 
			this->checkFireWall->AutoSize = true;
			this->checkFireWall->Location = System::Drawing::Point(28, 252);
			this->checkFireWall->Name = L"checkFireWall";
			this->checkFireWall->Size = System::Drawing::Size(195, 17);
			this->checkFireWall->TabIndex = 24;
			this->checkFireWall->Text = L"Відключити Брандмауер Windows";
			this->checkFireWall->UseVisualStyleBackColor = true;
			this->checkFireWall->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkFireWall_CheckedChanged);
			// 
			// checkDefender
			// 
			this->checkDefender->AutoSize = true;
			this->checkDefender->Location = System::Drawing::Point(28, 205);
			this->checkDefender->Name = L"checkDefender";
			this->checkDefender->Size = System::Drawing::Size(182, 17);
			this->checkDefender->TabIndex = 23;
			this->checkDefender->Text = L"Виключення Defender Windows";
			this->checkDefender->UseVisualStyleBackColor = true;
			this->checkDefender->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkDefender_CheckedChanged);
			// 
			// checkShido
			// 
			this->checkShido->AutoSize = true;
			this->checkShido->Location = System::Drawing::Point(28, 228);
			this->checkShido->Name = L"checkShido";
			this->checkShido->Size = System::Drawing::Size(126, 17);
			this->checkShido->TabIndex = 22;
			this->checkShido->Text = L"Швидкодія Windows";
			this->checkShido->UseVisualStyleBackColor = true;
			this->checkShido->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(337, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(205, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Виберіть цей пункти та нажміть кнопку";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(404, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Оптимізувати більшість";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkedListOthers
			// 
			this->checkedListOthers->FormattingEnabled = true;
			this->checkedListOthers->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Очищення кешу" });
			this->checkedListOthers->Location = System::Drawing::Point(404, 212);
			this->checkedListOthers->Name = L"checkedListOthers";
			this->checkedListOthers->Size = System::Drawing::Size(107, 19);
			this->checkedListOthers->TabIndex = 7;
			// 
			// tabTask
			// 
			this->tabTask->Controls->Add(this->listViewTask);
			this->tabTask->Controls->Add(this->label6);
			this->tabTask->Controls->Add(this->label5);
			this->tabTask->Location = System::Drawing::Point(4, 22);
			this->tabTask->Margin = System::Windows::Forms::Padding(2);
			this->tabTask->Name = L"tabTask";
			this->tabTask->Padding = System::Windows::Forms::Padding(2);
			this->tabTask->Size = System::Drawing::Size(547, 317);
			this->tabTask->TabIndex = 2;
			this->tabTask->Text = L"Диспетчер задач";
			this->tabTask->UseVisualStyleBackColor = true;
			// 
			// listViewTask
			// 
			this->listViewTask->GridLines = true;
			this->listViewTask->HideSelection = false;
			this->listViewTask->Location = System::Drawing::Point(0, 33);
			this->listViewTask->Margin = System::Windows::Forms::Padding(2);
			this->listViewTask->Name = L"listViewTask";
			this->listViewTask->Size = System::Drawing::Size(546, 249);
			this->listViewTask->TabIndex = 24;
			this->listViewTask->UseCompatibleStateImageBehavior = false;
			this->listViewTask->View = System::Windows::Forms::View::Details;
			this->listViewTask->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &MyForm::listViewTask_ColumnClick);
			this->listViewTask->DoubleClick += gcnew System::EventHandler(this, &MyForm::checkAnimation_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 296);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Подвійний клік для видалення";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(219, 18);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Обробка запущених процесів";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->labelAboutUS);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(547, 317);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Про нас";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// labelAboutUS
			// 
			this->labelAboutUS->AutoSize = true;
			this->labelAboutUS->Location = System::Drawing::Point(26, 36);
			this->labelAboutUS->Name = L"labelAboutUS";
			this->labelAboutUS->Size = System::Drawing::Size(35, 13);
			this->labelAboutUS->TabIndex = 0;
			this->labelAboutUS->Text = L"label8";
			// 
			// timerStartUp
			// 
			this->timerStartUp->Interval = 2000;
			this->timerStartUp->Tick += gcnew System::EventHandler(this, &MyForm::timerStartUp_Tick);
			// 
			// timerTaskManage
			// 
			this->timerTaskManage->Interval = 1000;
			this->timerTaskManage->Tick += gcnew System::EventHandler(this, &MyForm::timerTaskManage_Tick);
			// 
			// performanceCPU
			// 
			this->performanceCPU->CategoryName = L"Processor";
			this->performanceCPU->CounterName = L"% Processor Time";
			this->performanceCPU->InstanceName = L"_Total";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 544);
			this->Controls->Add(this->tabMenu);
			this->Controls->Add(this->memoryLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressMemory);
			this->Controls->Add(this->listViewSystem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelAuthor);
		
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"CourseWork";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackResolution))->EndInit();
			this->tabMenu->ResumeLayout(false);
			this->tabStartUp->ResumeLayout(false);
			this->tabStartUp->PerformLayout();
			this->tabGraphic->ResumeLayout(false);
			this->tabGraphic->PerformLayout();
			this->tabTask->ResumeLayout(false);
			this->tabTask->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCPU))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timerForList_Tick(System::Object^ sender, System::EventArgs^ e) {

		this->listViewSystem->Items->Clear();
		if (this->listViewSystem->Columns->Count == 0) {
			this->listViewSystem->Columns->Add("Назва", 300);
			this->listViewSystem->Columns->Add("Значення", 200);
			this->listViewSystem->Columns->Add("Одиниці", 100);
		}
		// Отримання інформації про ОЗУ
		MEMORYSTATUSEX memoryStatus;
		memoryStatus.dwLength = sizeof(memoryStatus);
		GlobalMemoryStatusEx(&memoryStatus);

		long long totalMemory = memoryStatus.ullTotalPhys;

		ListViewItem^ item1 = gcnew ListViewItem("Вся операційна пам'ять");
		item1->SubItems->Add(System::Convert::ToString(strConvNumb(totalMemory)));
		item1->SubItems->Add("MB");
		this->listViewSystem->Items->Add(item1);

		long long availableMemory = memoryStatus.ullAvailPhys;
		ListViewItem^ item2 = gcnew ListViewItem("Доступна пам'ять");
		item2->SubItems->Add(System::Convert::ToString(strConvNumb(availableMemory)));
		item2->SubItems->Add("MB");
		this->listViewSystem->Items->Add(item2);

		progressMemory->Minimum = 0;
		progressMemory->Maximum = strConvNumb(totalMemory);
		progressMemory->Value = strConvNumb(availableMemory);

		// Отримання інформації про диск
		ULARGE_INTEGER freeBytesAvailable, totalNumberOfBytes, totalNumberOfFreeBytes;
		GetDiskFreeSpaceExA(NULL, &freeBytesAvailable, &totalNumberOfBytes, &totalNumberOfFreeBytes);

		long long totalDisk = totalNumberOfBytes.QuadPart;
		ListViewItem^ item3 = gcnew ListViewItem("Все місце на диску");
		item3->SubItems->Add(System::Convert::ToString(strConvNumb(totalDisk)));
		item3->SubItems->Add("MB");
		this->listViewSystem->Items->Add(item3);

		long long totalFreeDisk = totalNumberOfFreeBytes.QuadPart;
		ListViewItem^ item4 = gcnew ListViewItem("Вільне місце на диску");
		item4->SubItems->Add(System::Convert::ToString(strConvNumb(totalFreeDisk)));
		item4->SubItems->Add("MB");
		this->listViewSystem->Items->Add(item4);

		// Отримання інформації про CPU
		ListViewItem^ item5 = gcnew ListViewItem("Загруженість процессору");
		String^ procTemp = System::Convert::ToString(performanceCPU->NextValue());
		item5->SubItems->Add((gcnew String(procTemp->Substring(0, Math::Min(4, procTemp->Length)))));
		item5->SubItems->Add("%");
		this->listViewSystem->Items->Add(item5);

		SYSTEM_INFO systemInfo;
		GetSystemInfo(&systemInfo);
		long long sys = systemInfo.dwNumberOfProcessors;

		ListViewItem^ item6 = gcnew ListViewItem("Кількість процессорних ядер");
		item6->SubItems->Add(System::Convert::ToString(sys));
		item6->SubItems->Add("");
		this->listViewSystem->Items->Add(item6);




	}
	private: long long strConvNumb(double long number) {

		return ((number / 1024) / 1024);

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		SetConsoleOutputCP(1251);
		this->timerForList->Start();
		HWND hwnd = GetConsoleWindow();
		labelAboutUS->Text = "Дана програма допоможе вам оптимізувати роботу вашої\n\n операційної системи Windows у довготривалий час.\n\n"
			"Ця програма розроблена у 2024 році. Автор програми : Хроменко Даниїл, група КІ - 306\n\n"
			"Вкладки :\n\n"
			"Автозапуск - надає можливість знімати запуск програми при завантаженні операційної системи(ОС).\n\n"
			"Графіка - оптимізує налаштування графіки для зменшення нагрузки ЦП.\n\n"
			"Диспетчер задач - спостерігає та дозволяє видаляти програми, що споживають ресурси ЦП і ОЗУ.\n\n"
			"Інше - перелік пунктів, що впливають на швидкодію системи Windows.\n\n";

		screenWidth = GetSystemMetrics(SM_CXSCREEN);
		screenHeight = GetSystemMetrics(SM_CYSCREEN);
		labelNativeResolution->Text = System::String::Format("{0}{1}{2}", screenWidth, "/", screenHeight);
		this->timerStartUp->Start();



		ramCounter = gcnew  System::Diagnostics::PerformanceCounter("Memory", "Available MBytes");
		processes = gcnew System::Collections::Generic::List<System::Diagnostics::Process^>();
	}
	private: System::Void trackResolution_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (this->trackResolution->Value) {

		case 0:
			changingResol(screenWidth, screenHeight);
			break;
		case 1:
			changingResol(1366, 768);
			break;
		case 2:
			changingResol(1280, 1024);
			break;
		case 3:
			changingResol(1024, 768);
			break;

		case 4:
			changingResol(800, 600);
			break;


		}
	}
	private:void changingResol(int screenWidth, int screenHeigh) {
		DEVMODE devMode;
		ZeroMemory(&devMode, sizeof(devMode));
		devMode.dmSize = sizeof(devMode);
		EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &devMode);

		devMode.dmPelsWidth = screenWidth;
		devMode.dmPelsHeight = screenHeigh;

		LONG result = ChangeDisplaySettings(&devMode, CDS_UPDATEREGISTRY);
	}
	private: System::Void checkOpacity_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		HKEY hKey;
		LPCSTR keyPath = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize";
		LPCSTR valueName = "EnableTransparency";
		DWORD newValue;
		if (this->checkOpacity->Checked == true) {
			newValue = 1;
		}
		else {
			newValue = 0;
		}
		LONG result = RegOpenKeyExA(HKEY_CURRENT_USER, keyPath, 0, KEY_ALL_ACCESS, &hKey);
		if (result == ERROR_SUCCESS)
		{
			result = RegSetValueExA(hKey, valueName, 0, REG_DWORD, (const BYTE*)&newValue, sizeof(DWORD));
			if (result == ERROR_SUCCESS)
			{

			}

			RegCloseKey(hKey);
		}

	}
	private: System::Void checkAnimation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		ANIMATIONINFO animationInfo;
		animationInfo.cbSize = sizeof(animationInfo);
		SystemParametersInfo(SPI_GETANIMATION, sizeof(animationInfo), &animationInfo, 0);

		if (this->checkAnimation->Checked == true) {
			animationInfo.iMinAnimate = 0;
		}
		else {
			animationInfo.iMinAnimate = 1;
		}

		SystemParametersInfo(SPI_SETANIMATION, sizeof(animationInfo), &animationInfo, SPIF_SENDCHANGE);
	}
	private: System::Void tabMenu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tabMenu->SelectedTab->Text == "StartUp") {
			timerStartUp->Start();

		}
		else if (this->tabMenu->SelectedTab->Text == "Диспетчер задач") {
			timerTaskManage->Start();
		}
	}
	private: System::Void tabMenu_Deselected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
		if (this->tabMenu->SelectedTab->Text == "StartUp") {
			timerStartUp->Stop();
		}
		else if (this->tabMenu->SelectedTab->Text == "Диспетчер задач") {
			timerTaskManage->Stop();
		}


	}

	private: System::Void timerStartUp_Tick(System::Object^ sender, System::EventArgs^ e) {
		HKEY hKey;
		LPCSTR subKey = "Software\\Microsoft\\Windows\\CurrentVersion\\Run";

		if (RegOpenKeyExA(HKEY_CURRENT_USER, subKey, 0, KEY_READ | KEY_WRITE, &hKey) == ERROR_SUCCESS)
		{
			DWORD valueIndex = 0;
			CHAR valueName[MAX_PATH];
			DWORD valueNameSize = MAX_PATH;
			BYTE valueData[MAX_PATH];
			DWORD valueDataSize = MAX_PATH;
			DWORD valueType;


			this->listViewStart->Items->Clear();

			// Отримання інформації про ОЗУ
			MEMORYSTATUSEX memoryStatus;
			memoryStatus.dwLength = sizeof(memoryStatus);
			GlobalMemoryStatusEx(&memoryStatus);

			long long totalMemory = memoryStatus.ullTotalPhys;




			while (RegEnumValueA(hKey, valueIndex, valueName, &valueNameSize, nullptr, &valueType, valueData, &valueDataSize) == ERROR_SUCCESS)
			{

				this->listViewStart->Columns->Add("Назва", 300);
				this->listViewStart->Columns->Add("Індекс", 200);
				ListViewItem^ item = gcnew ListViewItem(gcnew System::String(valueName));
				item->SubItems->Add(gcnew System::String((std::to_string(valueIndex)).c_str()));
				this->listViewStart->Items->Add(item);
				valueIndex++;
				valueNameSize = MAX_PATH;
				valueDataSize = MAX_PATH;
			}
		}
	}
	private: System::Void listViewStart_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ hi = listViewStart->SelectedItems[0]->SubItems[1]->Text;
		

		HKEY hKey;
		LPCSTR subKey = "Software\\Microsoft\\Windows\\CurrentVersion\\Run";

		if (RegOpenKeyExA(HKEY_CURRENT_USER, subKey, 0, KEY_READ | KEY_WRITE, &hKey) == ERROR_SUCCESS)
		{
			CHAR valueName[MAX_PATH];
			DWORD valueNameSize = MAX_PATH;


			DWORD currentIndex = 0;
			while (RegEnumValueA(hKey, currentIndex, valueName, &valueNameSize, nullptr, nullptr, nullptr, nullptr) == ERROR_SUCCESS)
			{
				if (currentIndex == Convert::ToInt32(hi))
				{

					if (RegDeleteValueA(hKey, valueName) == ERROR_SUCCESS)
					{

						MessageBox::Show("Успішно видалено із Автозапуску!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else
					{

						MessageBox::Show("Не вийшло видалити програму із автозапуску.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					break;
				}

				currentIndex++;
				valueNameSize = MAX_PATH;
			}

			RegCloseKey(hKey);
		}
	}




private: System::Void timerTaskManage_Tick(System::Object^ sender, System::EventArgs^ e) {
	int scrollPosition = this->listViewTask->TopItem != nullptr ? this->listViewTask->TopItem->Index : 0;

	if (this->listViewTask->Columns->Count == 0) {
		this->listViewTask->Columns->Add("Назва", 300);
		this->listViewTask->Columns->Add("Пам'ять MB", 100);
		this->listViewTask->Columns->Add("Процесор %", 100);
		timerTaskManage->Interval = 3500;
	}

	DWORD proc[1024], bytesNeeded;
	if (!EnumProcesses(proc, sizeof(proc), &bytesNeeded)) {
		exit(1);
	}

	int count = bytesNeeded / sizeof(DWORD);
	long double memoryUsage = 0;
	
	array<String^, 2>^ dynamicArray = gcnew array<String^, 2>(count, 3);
	Dictionary<String^, array<long double>^>^ processStats = gcnew Dictionary<String^, array<long double>^>();

	for (int i = 0; i < count; i++) {
		if (proc[i] != 0) {
			
			HANDLE processHandle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, proc[i]);
			char processName[MAX_PATH];
			if (GetModuleBaseNameA(processHandle, NULL, processName, sizeof(processName)) == 0) {
				strcpy_s(processName, "Windows service (No Access)");
				
			}
			HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, proc[i]);

			PROCESS_MEMORY_COUNTERS_EX pmc;
			if (GetProcessMemoryInfo(hProcess, reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc), sizeof(pmc))) {
				memoryUsage = pmc.WorkingSetSize / 1024 / 1024;
			}
			CloseHandle(hProcess);

			String^ processNameStr = msclr::interop::marshal_as<String^>(processName);
			long double cpuUsage = CalculateCpuUsage(proc[i]);

			if (processStats->ContainsKey(processNameStr) ) {
				array<long double>^ stats = processStats[processNameStr];
				stats[0] += memoryUsage;
				stats[1] += cpuUsage;
			}
			else {
				array<long double>^ stats = gcnew array<long double>(2);
				stats[0] = memoryUsage;
				stats[1] = cpuUsage;
				processStats->Add(processNameStr, stats);
			}
		}
	}

	this->listViewTask->Items->Clear();
	for each (KeyValuePair<String^, array<long double>^> ^ kvp in processStats) {
		String^ processName = kvp->Key;
		array<long double>^ stats = kvp->Value;
		long double memoryUsageSum = stats[0];
		long double cpuUsageSum = stats[1];

		ListViewItem^ item = gcnew ListViewItem(processName);
		item->SubItems->Add(memoryUsageSum.ToString("F2"));
		item->SubItems->Add(cpuUsageSum.ToString("F2"));
		this->listViewTask->Items->Add(item);
	}

	if (scrollPosition < this->listViewTask->Items->Count) {
		this->listViewTask->TopItem = this->listViewTask->Items[scrollPosition];
	}
}






		  private: double CalculateCpuUsage(int processId)
		   {
			   try
			   {
				   
				   Process^ process = Process::GetProcessById(processId);

				  
				   TimeSpan processTime = process->TotalProcessorTime;
				  
				   TimeSpan systemTime = Process::GetCurrentProcess()->TotalProcessorTime;
				   
				  
				   double cpuUsage = (processTime.TotalMilliseconds / systemTime.TotalMilliseconds);

				   return cpuUsage/100;
			   }
			   catch (ArgumentException^)
			   {
				   
				   return 0.0;
			   }
		   }



















	private: bool TerminateProcessByName(const TCHAR* processName)
	{
		timerTaskManage->Start();
		HANDLE hProcessSnap;
		PROCESSENTRY32 pe32;
		hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (hProcessSnap == INVALID_HANDLE_VALUE)
		{
			return false;
		}
		pe32.dwSize = sizeof(PROCESSENTRY32);
		if (!Process32First(hProcessSnap, &pe32))
		{
			CloseHandle(hProcessSnap);
			return false;
		}
		do
		{
			if (_tcsicmp(pe32.szExeFile, processName) == 0)
			{
				HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0, pe32.th32ProcessID);
				if (hProcess != NULL)
				{

					TerminateProcess(hProcess, 0);
					CloseHandle(hProcess);
					CloseHandle(hProcessSnap);
					MessageBox::Show("Процес успішно видалений!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return true;
				}
			}
		} while (Process32Next(hProcessSnap, &pe32));

		CloseHandle(hProcessSnap);
		return false;
	}
	private: System::Void listViewTask_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		System::String^ hi = listViewTask->SelectedItems[0]->Text;
		std::string hiString = msclr::interop::marshal_as<std::string>(hi);
		std::wstring hiWideString(hiString.begin(), hiString.end());
		const TCHAR* processName = hiWideString.c_str();
		TerminateProcessByName(processName);

	}
	void MyForm::listViewTask_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e)
		   {
			   if (currentIndexColumn == e->Column)
			   {
				  
				   dynamic_cast<ListViewColumnSorter^>(listViewTask->ListViewItemSorter)->ToggleSortOrder();
			   }
			   else
			   {
				   currentIndexColumn = e->Column;
				   listViewTask->ListViewItemSorter = gcnew ListViewColumnSorter(currentIndexColumn);
			   }

			   listViewTask->Sort();
		   }
	ref class ListViewColumnSorter : public System::Collections::IComparer
		   {
		   private:
			   int columnIndex;
			   bool isAscending; 

		   public:
			   ListViewColumnSorter(int columnIndex) : columnIndex(columnIndex), isAscending(true) {}

			   virtual int Compare(Object^ x, Object^ y)
			   {
				   ListViewItem^ item1 = dynamic_cast<ListViewItem^>(x);
				   ListViewItem^ item2 = dynamic_cast<ListViewItem^>(y);

				   if (columnIndex == 0)
				   {
					   return String::Compare(item1->Text, item2->Text) * (isAscending ? 1 : -1); 
				   }
				   else if (columnIndex == 1 || columnIndex == 2)
				   {
					   double value1 = Double::Parse(item1->SubItems[columnIndex]->Text);
					   double value2 = Double::Parse(item2->SubItems[columnIndex]->Text);

					   return value1.CompareTo(value2) * (isAscending ? 1 : -1); 
				   }

				   return 0;
			   }

			 
			   void ToggleSortOrder()
			   {
				   isAscending = !isAscending;
			   }
		   };


	private:void DeleteDirectory(const std::wstring& path, int& deletedFilesCount, long long& deletedFilesSize)
	{
		std::wstring searchPath = path + L"\\*.*";
		WIN32_FIND_DATAW findData;
		HANDLE hFind = FindFirstFileW(searchPath.c_str(), &findData);

		if (hFind != INVALID_HANDLE_VALUE)
		{
			do
			{
				if (!(wcscmp(findData.cFileName, L".") == 0 || wcscmp(findData.cFileName, L"..") == 0))
				{
					std::wstring filePath = path + L"\\" + findData.cFileName;

					if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
					{
						// Рекурсивно видаляємо підпапку
						DeleteDirectory(filePath, deletedFilesCount, deletedFilesSize);
					}
					else
					{
						// Видаляємо файл
						long long fileSize = (static_cast<long long>(findData.nFileSizeHigh) << 32) | findData.nFileSizeLow;
						if (DeleteFileW(filePath.c_str()))
						{
							deletedFilesCount++;
							deletedFilesSize += fileSize;
						}
					
						
					}
				}
			} while (FindNextFileW(hFind, &findData));

			FindClose(hFind);
		}

		// Видаляємо саму папку
		if (RemoveDirectoryW(path.c_str()))
		{
			
		}
		
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ answer = "";
		if (checkedListOthers->CheckedItems->Count==0) {
			MessageBox::Show("Виберіть, що оптимізувати", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (checkedListOthers->CheckedIndices->Contains(0)) {
				std::wstring tempPath;
				WCHAR tempBuffer[MAX_PATH];
				DWORD tempPathLength = GetTempPathW(MAX_PATH, tempBuffer);
				if (tempPathLength > 0 && tempPathLength < MAX_PATH)
				{
					tempPath = std::wstring(tempBuffer);
				}

				
				if (!tempPath.empty())
				{
					WCHAR* envTempPath = nullptr;
					DWORD envTempPathLength = GetEnvironmentVariableW(L"TEMP", nullptr, 0);
					if (envTempPathLength > 0)
					{
						envTempPath = new WCHAR[envTempPathLength];
						DWORD result = GetEnvironmentVariableW(L"TEMP", envTempPath, envTempPathLength);
						if (result > 0 && result <= envTempPathLength)
						{
							tempPath = std::wstring(envTempPath);

							int deletedFilesCount = 0;
							long long deletedFilesSize = 0;

							// Видаляємо всі файли та папки з папки TEMP
							DeleteDirectory(tempPath, deletedFilesCount, deletedFilesSize);
							System::String^ cashstr = "Кеш був почищений\n\nбуло видалено " + deletedFilesCount + " розміром " + deletedFilesSize/1024 + " КБ\n\n";
							answer += cashstr;
						}
					}

					delete[] envTempPath;
				}
				
			}
			
			if (checkedListOthers->CheckedIndices->Contains(1)) {
				 
			}

			MessageBox::Show(answer, "Успіх!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	

	
	}
	private:	void SetVisualFXEffect(DWORD value)
	{
		HKEY hKey;
		DWORD newValue = value;

		
		if (RegOpenKeyEx(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VisualEffects", 0, KEY_WRITE, &hKey) == ERROR_SUCCESS)
		{
			
			if (RegSetValueEx(hKey, L"VisualFXEffect", 0, REG_DWORD, reinterpret_cast<const BYTE*>(&newValue), sizeof(newValue)) == ERROR_SUCCESS)
			{
				
			}
			

			
			RegCloseKey(hKey);
		}
		else
		{
			std::cout << "Failed to open the registry key." << std::endl;
		}
	}
	private: void SetFontSmoothingType()
	{
		bool isSmooth = true;
		if (checkShido->Checked) {
			isSmooth = false;
		}
		SystemParametersInfo(SPI_SETFONTSMOOTHING, isSmooth, reinterpret_cast<PVOID>(isSmooth), SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
	}


	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		SetVisualFXEffect(3);
		
			if (checkShido->Checked) {
				DWORD dwAttributes = 0;

				pin_ptr<DWORD> pinnedAttributes = &previousAttributes;
				if (!SystemParametersInfo(SPI_GETUIEFFECTS, 0, reinterpret_cast<PVOID>(pinnedAttributes), 0)) {
					MessageBox::Show("Проблема отримання параметрів", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				if (!SystemParametersInfo(SPI_SETUIEFFECTS, 0, reinterpret_cast<PVOID>(dwAttributes), SPIF_SENDCHANGE)) {
					
				}
				
			}
			else {
				pin_ptr<DWORD> pinnedAttributes = &previousAttributes;
				if (!SystemParametersInfo(SPI_SETUIEFFECTS, 0, reinterpret_cast<PVOID>(pinnedAttributes), SPIF_SENDCHANGE)) {
					
					return;
				}
			}
			SetFontSmoothingType();
			
			String^ answer = checkShido->Checked ? "Параметри включені" : "Параметри повернуті до початкового стану";
			MessageBox::Show(answer, "Успіх!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
			
	}
	
	   
private: System::Void checkDefender_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	HKEY key;
	String^ answer= "Defender windows разом із його службами";

	uint32_t payload = 0;
	if (this->checkDefender->Checked) {
		payload = 1;
		answer += " були включені";
	}
	else {
		answer += " були виключені";
	}
	if (RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\Policies\\Microsoft\\Windows Defender", 0, KEY_ALL_ACCESS, &key)) {}
	if (RegSetValueEx(key, L"DisableAntiSpyware", 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload))) {}
	HKEY new_key;
	if (RegCreateKeyEx(key, L"Real-Time Protection", 0, 0, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 0, &new_key, 0)) {}
	key = new_key;

	if (RegSetValueEx(key, L"DisableRealtimeMonitoring", 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload))) {}
	if (RegSetValueEx(key, L"DisableBehaviorMonitoring", 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload))) {}
	if (RegSetValueEx(key, L"DisableOnAccessProtection", 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload))) {}
	if (RegSetValueEx(key, L"DisableScanOnRealtimeEnable", 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload))) {}
	if (RegSetValueEx(key, L"DisableIOAVProtection", 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload))) {}
	RegCloseKey(key);
	answer += " (Потрібно перезавантажити пристрій, щоб дії вступили у силу)";
	MessageBox::Show(answer, "Успіх!", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void checkFireWall_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkFireWall->Checked) {
		std::system("netsh advfirewall set allprofiles state off");
	}
	else {
		std::system("netsh advfirewall set allprofiles state on");
	}
}
};
}

