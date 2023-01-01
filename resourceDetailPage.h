#pragma once

#include "functions.h"
#include "popUp_modify_resourceName.h"
#include "popUp_modify_classification.h"
namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// resourceDetailPage�� ���� ����Դϴ�.
	/// </summary>
	public ref class resourceDetailPage : public System::Windows::Forms::Form
	{
	public:
		static char* ulid;
		resourceDetailPage(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~resourceDetailPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;





	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ ulid_label;
	private: System::Windows::Forms::Label^ entroll_label;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::Label^ user_label;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::Label^ locate_label;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::Label^ status_label;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ classification_label;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ resource_label;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ modify_label;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	private: System::Windows::Forms::Label^ price_label;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ purchaseDate_label;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ buyer_label;

	private: System::Windows::Forms::Button^ button3;







	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(resourceDetailPage::typeid));
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->purchaseDate_label = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buyer_label = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ulid_label = (gcnew System::Windows::Forms::Label());
			this->entroll_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->user_label = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->locate_label = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->status_label = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->classification_label = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->resource_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->modify_label = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.27881F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.72119F)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel10, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel6, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label13, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label15, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label16, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(25, 349);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.12281F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.87719F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 26)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(538, 105);
			this->tableLayoutPanel2->TabIndex = 14;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.39594F)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.60406F)));
			this->tableLayoutPanel10->Controls->Add(this->price_label, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->button8, 1, 0);
			this->tableLayoutPanel10->Location = System::Drawing::Point(140, 71);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(394, 30);
			this->tableLayoutPanel10->TabIndex = 7;
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->price_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->price_label->Location = System::Drawing::Point(3, 0);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(68, 30);
			this->price_label->TabIndex = 28;
			this->price_label->Text = L"unknown";
			this->price_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(304, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 24);
			this->button8->TabIndex = 22;
			this->button8->Text = L"����";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.39594F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.60406F)));
			this->tableLayoutPanel6->Controls->Add(this->purchaseDate_label, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->button7, 1, 0);
			this->tableLayoutPanel6->Location = System::Drawing::Point(140, 37);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(394, 26);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// purchaseDate_label
			// 
			this->purchaseDate_label->AutoSize = true;
			this->purchaseDate_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->purchaseDate_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->purchaseDate_label->Location = System::Drawing::Point(3, 0);
			this->purchaseDate_label->Name = L"purchaseDate_label";
			this->purchaseDate_label->Size = System::Drawing::Size(68, 26);
			this->purchaseDate_label->TabIndex = 28;
			this->purchaseDate_label->Text = L"unknown";
			this->purchaseDate_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(304, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 20);
			this->button7->TabIndex = 22;
			this->button7->Text = L"����";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->Dock = System::Windows::Forms::DockStyle::Left;
			this->label13->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->Location = System::Drawing::Point(4, 68);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 36);
			this->label13->TabIndex = 4;
			this->label13->Text = L"����";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Dock = System::Windows::Forms::DockStyle::Left;
			this->label15->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->Location = System::Drawing::Point(4, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(129, 33);
			this->label15->TabIndex = 2;
			this->label15->Text = L"���� ������";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->Dock = System::Windows::Forms::DockStyle::Left;
			this->label16->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label16->Location = System::Drawing::Point(4, 1);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 32);
			this->label16->TabIndex = 0;
			this->label16->Text = L"����ó";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.39594F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.60406F)));
			this->tableLayoutPanel3->Controls->Add(this->buyer_label, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button3, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(140, 4);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(394, 26);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// buyer_label
			// 
			this->buyer_label->AutoSize = true;
			this->buyer_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->buyer_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->buyer_label->Location = System::Drawing::Point(3, 0);
			this->buyer_label->Name = L"buyer_label";
			this->buyer_label->Size = System::Drawing::Size(68, 26);
			this->buyer_label->TabIndex = 28;
			this->buyer_label->Text = L"unknown";
			this->buyer_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(304, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 20);
			this->button3->TabIndex = 22;
			this->button3->Text = L"����";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"���� ���", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(28, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"���� ����";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.27881F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.72119F)));
			this->tableLayoutPanel1->Controls->Add(this->ulid_label, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->entroll_label, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel8, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->modify_label, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->label19, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label17, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(20, 37);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.5625F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(538, 270);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// ulid_label
			// 
			this->ulid_label->AutoSize = true;
			this->ulid_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->ulid_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->ulid_label->Location = System::Drawing::Point(140, 1);
			this->ulid_label->Name = L"ulid_label";
			this->ulid_label->Size = System::Drawing::Size(68, 29);
			this->ulid_label->TabIndex = 37;
			this->ulid_label->Text = L"unknown";
			this->ulid_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// entroll_label
			// 
			this->entroll_label->AutoSize = true;
			this->entroll_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->entroll_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->entroll_label->Location = System::Drawing::Point(140, 103);
			this->entroll_label->Name = L"entroll_label";
			this->entroll_label->Size = System::Drawing::Size(68, 28);
			this->entroll_label->TabIndex = 36;
			this->entroll_label->Text = L"unknown";
			this->entroll_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel9->Controls->Add(this->user_label, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->button6, 1, 0);
			this->tableLayoutPanel9->Location = System::Drawing::Point(140, 207);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(394, 31);
			this->tableLayoutPanel9->TabIndex = 35;
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->user_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->user_label->Location = System::Drawing::Point(3, 0);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(68, 31);
			this->user_label->TabIndex = 28;
			this->user_label->Text = L"unknown";
			this->user_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(304, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 25);
			this->button6->TabIndex = 21;
			this->button6->Text = L"����";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel8->Controls->Add(this->locate_label, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->button5, 1, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(140, 170);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(394, 30);
			this->tableLayoutPanel8->TabIndex = 34;
			// 
			// locate_label
			// 
			this->locate_label->AutoSize = true;
			this->locate_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->locate_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->locate_label->Location = System::Drawing::Point(3, 0);
			this->locate_label->Name = L"locate_label";
			this->locate_label->Size = System::Drawing::Size(68, 30);
			this->locate_label->TabIndex = 28;
			this->locate_label->Text = L"unknown";
			this->locate_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(304, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 24);
			this->button5->TabIndex = 21;
			this->button5->Text = L"����";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel7->Controls->Add(this->status_label, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->button4, 1, 0);
			this->tableLayoutPanel7->Location = System::Drawing::Point(140, 135);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(394, 28);
			this->tableLayoutPanel7->TabIndex = 33;
			// 
			// status_label
			// 
			this->status_label->AutoSize = true;
			this->status_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->status_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->status_label->Location = System::Drawing::Point(3, 0);
			this->status_label->Name = L"status_label";
			this->status_label->Size = System::Drawing::Size(68, 28);
			this->status_label->TabIndex = 28;
			this->status_label->Text = L"unknown";
			this->status_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(304, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 22);
			this->button4->TabIndex = 21;
			this->button4->Text = L"����";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel5->Controls->Add(this->classification_label, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(140, 69);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(394, 30);
			this->tableLayoutPanel5->TabIndex = 31;
			// 
			// classification_label
			// 
			this->classification_label->AutoSize = true;
			this->classification_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->classification_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(129)));
			this->classification_label->Location = System::Drawing::Point(3, 0);
			this->classification_label->Name = L"classification_label";
			this->classification_label->Size = System::Drawing::Size(68, 30);
			this->classification_label->TabIndex = 28;
			this->classification_label->Text = L"unknown";
			this->classification_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(304, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 24);
			this->button2->TabIndex = 21;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &resourceDetailPage::button2_Click);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel4->Controls->Add(this->resource_label, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button1, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(140, 34);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(394, 28);
			this->tableLayoutPanel4->TabIndex = 30;
			// 
			// resource_label
			// 
			this->resource_label->AutoSize = true;
			this->resource_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->resource_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->resource_label->Location = System::Drawing::Point(3, 0);
			this->resource_label->Name = L"resource_label";
			this->resource_label->Size = System::Drawing::Size(68, 28);
			this->resource_label->TabIndex = 28;
			this->resource_label->Text = L"unknown";
			this->resource_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(304, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 22);
			this->button1->TabIndex = 21;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &resourceDetailPage::button1_Click);
			// 
			// modify_label
			// 
			this->modify_label->AutoSize = true;
			this->modify_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->modify_label->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->modify_label->Location = System::Drawing::Point(140, 242);
			this->modify_label->Name = L"modify_label";
			this->modify_label->Size = System::Drawing::Size(68, 27);
			this->modify_label->TabIndex = 27;
			this->modify_label->Text = L"unknown";
			this->modify_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->Dock = System::Windows::Forms::DockStyle::Left;
			this->label19->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label19->Location = System::Drawing::Point(4, 242);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(129, 27);
			this->label19->TabIndex = 25;
			this->label19->Text = L"���� ���� �Ͻ�";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Dock = System::Windows::Forms::DockStyle::Left;
			this->label17->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label17->Location = System::Drawing::Point(4, 204);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(129, 37);
			this->label17->TabIndex = 23;
			this->label17->Text = L"��� ����";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->Location = System::Drawing::Point(4, 167);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 36);
			this->label14->TabIndex = 12;
			this->label14->Text = L"��ġ";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->Location = System::Drawing::Point(4, 132);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 34);
			this->label12->TabIndex = 10;
			this->label12->Text = L"����";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Dock = System::Windows::Forms::DockStyle::Left;
			this->label10->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->Location = System::Drawing::Point(4, 103);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 28);
			this->label10->TabIndex = 8;
			this->label10->Text = L"���� ��� �Ͻ�";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(4, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 36);
			this->label8->TabIndex = 6;
			this->label8->Text = L"�з�";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(4, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 34);
			this->label6->TabIndex = 4;
			this->label6->Text = L"�ڻ��";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(4, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"�Ϸù�ȣ (ULID)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"���� ���", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(28, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"�ڻ� ����";
			// 
			// resourceDetailPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(706, 480);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"resourceDetailPage";
			this->Text = L"ITMan-PC";
			this->Load += gcnew System::EventHandler(this, &resourceDetailPage::MyForm_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel10->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			resourceManagement rm;
			resourceData result = rm.getDetailResource(ulid);

			ulid_label->Text = gcnew String(result.ulid.c_str());
			resource_label->Text = gcnew String(result.resourcename.c_str());
			classification_label->Text = gcnew String(result.classification.c_str());
			entroll_label->Text = gcnew String(result.entroll_date.c_str());
			status_label->Text = gcnew String(result.status.c_str());
			locate_label->Text = gcnew String(result.location.c_str());
			user_label->Text = gcnew String(result.user.c_str());
			modify_label->Text = gcnew String(result.modify_date.c_str());
			buyer_label->Text = gcnew String(result.where_purchase.c_str());
			purchaseDate_label->Text = gcnew String(result.first_purchase.c_str());
			price_label->Text = gcnew String(result.price.c_str());
		}

#pragma endregion
			   // �ڻ�� ����

			   private: Void updateData() {
				   resourceManagement rm;
				   resourceData result = rm.getDetailResource(ulid);

				   ulid_label->Text = gcnew String(result.ulid.c_str());
				   resource_label->Text = gcnew String(result.resourcename.c_str());
				   classification_label->Text = gcnew String(result.classification.c_str());
				   entroll_label->Text = gcnew String(result.entroll_date.c_str());
				   status_label->Text = gcnew String(result.status.c_str());
				   locate_label->Text = gcnew String(result.location.c_str());
				   user_label->Text = gcnew String(result.user.c_str());
				   modify_label->Text = gcnew String(result.modify_date.c_str());
				   buyer_label->Text = gcnew String(result.where_purchase.c_str());
				   purchaseDate_label->Text = gcnew String(result.first_purchase.c_str());
				   price_label->Text = gcnew String(result.price.c_str());
			   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_resourceName pmr;
	pmr.ulid = this->ulid;
	pmr.ShowDialog();
	updateData();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_classification pmc;
	pmc.ulid = this->ulid;
	pmc.ShowDialog();
	updateData();
}
};
}
