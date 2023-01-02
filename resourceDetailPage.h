#pragma once

#include "functions.h"
#include "popUp_modify_resourceName.h"
#include "popUp_modify_classification.h"
#include "popUp_modify_status.h"
#include "popUp_modify_locate.h"
#include "popUp_modify_user.h"
#include "popUp_modify_buyer.h"
#include "popUp_modify_purchaseDate.h"
#include "popUp_modify_purchase.h"

namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// resourceDetailPage에 대한 요약입니다.
	/// </summary>
	public ref class resourceDetailPage : public System::Windows::Forms::Form
	{
	public:
		char* ulid;
		resourceDetailPage(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
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
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
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
			this->tableLayoutPanel2->Location = System::Drawing::Point(29, 436);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.12281F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.87719F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 44)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(615, 131);
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
			this->tableLayoutPanel10->Location = System::Drawing::Point(159, 89);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(450, 37);
			this->tableLayoutPanel10->TabIndex = 7;
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->price_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->price_label->Location = System::Drawing::Point(3, 0);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(90, 37);
			this->price_label->TabIndex = 28;
			this->price_label->Text = L"unknown";
			this->price_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(346, 4);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 29);
			this->button8->TabIndex = 22;
			this->button8->Text = L"수정";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &resourceDetailPage::button8_Click);
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
			this->tableLayoutPanel6->Location = System::Drawing::Point(159, 46);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(450, 32);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// purchaseDate_label
			// 
			this->purchaseDate_label->AutoSize = true;
			this->purchaseDate_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->purchaseDate_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->purchaseDate_label->Location = System::Drawing::Point(3, 0);
			this->purchaseDate_label->Name = L"purchaseDate_label";
			this->purchaseDate_label->Size = System::Drawing::Size(90, 32);
			this->purchaseDate_label->TabIndex = 28;
			this->purchaseDate_label->Text = L"unknown";
			this->purchaseDate_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(346, 4);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 24);
			this->button7->TabIndex = 22;
			this->button7->Text = L"수정";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &resourceDetailPage::button7_Click);
			// 
			// label13
			// 
			this->label13->Dock = System::Windows::Forms::DockStyle::Left;
			this->label13->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->Location = System::Drawing::Point(4, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(147, 45);
			this->label13->TabIndex = 4;
			this->label13->Text = L"가격";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Dock = System::Windows::Forms::DockStyle::Left;
			this->label15->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->Location = System::Drawing::Point(4, 42);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(147, 42);
			this->label15->TabIndex = 2;
			this->label15->Text = L"최초 구매일";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->Dock = System::Windows::Forms::DockStyle::Left;
			this->label16->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label16->Location = System::Drawing::Point(4, 1);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(147, 40);
			this->label16->TabIndex = 0;
			this->label16->Text = L"구매처";
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
			this->tableLayoutPanel3->Location = System::Drawing::Point(159, 5);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(450, 32);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// buyer_label
			// 
			this->buyer_label->AutoSize = true;
			this->buyer_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->buyer_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->buyer_label->Location = System::Drawing::Point(3, 0);
			this->buyer_label->Name = L"buyer_label";
			this->buyer_label->Size = System::Drawing::Size(90, 32);
			this->buyer_label->TabIndex = 28;
			this->buyer_label->Text = L"unknown";
			this->buyer_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(346, 4);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 24);
			this->button3->TabIndex = 22;
			this->button3->Text = L"수정";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &resourceDetailPage::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(32, 401);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 32);
			this->label3->TabIndex = 13;
			this->label3->Text = L"구매 정보";
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(23, 46);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.5625F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(615, 338);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// ulid_label
			// 
			this->ulid_label->AutoSize = true;
			this->ulid_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->ulid_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->ulid_label->Location = System::Drawing::Point(159, 1);
			this->ulid_label->Name = L"ulid_label";
			this->ulid_label->Size = System::Drawing::Size(90, 40);
			this->ulid_label->TabIndex = 37;
			this->ulid_label->Text = L"unknown";
			this->ulid_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// entroll_label
			// 
			this->entroll_label->AutoSize = true;
			this->entroll_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->entroll_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->entroll_label->Location = System::Drawing::Point(159, 131);
			this->entroll_label->Name = L"entroll_label";
			this->entroll_label->Size = System::Drawing::Size(90, 35);
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
				106)));
			this->tableLayoutPanel9->Controls->Add(this->user_label, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->button6, 1, 0);
			this->tableLayoutPanel9->Location = System::Drawing::Point(159, 260);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(450, 38);
			this->tableLayoutPanel9->TabIndex = 35;
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->user_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->user_label->Location = System::Drawing::Point(3, 0);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(90, 38);
			this->user_label->TabIndex = 28;
			this->user_label->Text = L"unknown";
			this->user_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(347, 4);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 30);
			this->button6->TabIndex = 21;
			this->button6->Text = L"수정";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &resourceDetailPage::button6_Click);
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel8->Controls->Add(this->locate_label, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->button5, 1, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(159, 214);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(450, 37);
			this->tableLayoutPanel8->TabIndex = 34;
			// 
			// locate_label
			// 
			this->locate_label->AutoSize = true;
			this->locate_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->locate_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->locate_label->Location = System::Drawing::Point(3, 0);
			this->locate_label->Name = L"locate_label";
			this->locate_label->Size = System::Drawing::Size(90, 37);
			this->locate_label->TabIndex = 28;
			this->locate_label->Text = L"unknown";
			this->locate_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(347, 4);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 29);
			this->button5->TabIndex = 21;
			this->button5->Text = L"수정";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &resourceDetailPage::button5_Click);
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel7->Controls->Add(this->status_label, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->button4, 1, 0);
			this->tableLayoutPanel7->Location = System::Drawing::Point(159, 171);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(450, 34);
			this->tableLayoutPanel7->TabIndex = 33;
			// 
			// status_label
			// 
			this->status_label->AutoSize = true;
			this->status_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->status_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->status_label->Location = System::Drawing::Point(3, 0);
			this->status_label->Name = L"status_label";
			this->status_label->Size = System::Drawing::Size(90, 34);
			this->status_label->TabIndex = 28;
			this->status_label->Text = L"unknown";
			this->status_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(347, 4);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 26);
			this->button4->TabIndex = 21;
			this->button4->Text = L"수정";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &resourceDetailPage::button4_Click);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel5->Controls->Add(this->classification_label, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(159, 89);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(450, 37);
			this->tableLayoutPanel5->TabIndex = 31;
			// 
			// classification_label
			// 
			this->classification_label->AutoSize = true;
			this->classification_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->classification_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(129)));
			this->classification_label->Location = System::Drawing::Point(3, 0);
			this->classification_label->Name = L"classification_label";
			this->classification_label->Size = System::Drawing::Size(90, 37);
			this->classification_label->TabIndex = 28;
			this->classification_label->Text = L"unknown";
			this->classification_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(347, 4);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 29);
			this->button2->TabIndex = 21;
			this->button2->Text = L"수정";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &resourceDetailPage::button2_Click);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				106)));
			this->tableLayoutPanel4->Controls->Add(this->resource_label, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button1, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(159, 46);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(450, 34);
			this->tableLayoutPanel4->TabIndex = 30;
			// 
			// resource_label
			// 
			this->resource_label->AutoSize = true;
			this->resource_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->resource_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->resource_label->Location = System::Drawing::Point(3, 0);
			this->resource_label->Name = L"resource_label";
			this->resource_label->Size = System::Drawing::Size(90, 34);
			this->resource_label->TabIndex = 28;
			this->resource_label->Text = L"unknown";
			this->resource_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(347, 4);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 26);
			this->button1->TabIndex = 21;
			this->button1->Text = L"수정";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &resourceDetailPage::button1_Click);
			// 
			// modify_label
			// 
			this->modify_label->AutoSize = true;
			this->modify_label->Dock = System::Windows::Forms::DockStyle::Left;
			this->modify_label->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->modify_label->Location = System::Drawing::Point(159, 303);
			this->modify_label->Name = L"modify_label";
			this->modify_label->Size = System::Drawing::Size(90, 34);
			this->modify_label->TabIndex = 27;
			this->modify_label->Text = L"unknown";
			this->modify_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->Dock = System::Windows::Forms::DockStyle::Left;
			this->label19->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label19->Location = System::Drawing::Point(4, 303);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(147, 34);
			this->label19->TabIndex = 25;
			this->label19->Text = L"최종 수정 일시";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Dock = System::Windows::Forms::DockStyle::Left;
			this->label17->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label17->Location = System::Drawing::Point(4, 256);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(147, 46);
			this->label17->TabIndex = 23;
			this->label17->Text = L"사용 직원";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->Location = System::Drawing::Point(4, 210);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(147, 45);
			this->label14->TabIndex = 12;
			this->label14->Text = L"위치";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->Location = System::Drawing::Point(4, 167);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(147, 42);
			this->label12->TabIndex = 10;
			this->label12->Text = L"상태";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Dock = System::Windows::Forms::DockStyle::Left;
			this->label10->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->Location = System::Drawing::Point(4, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(147, 35);
			this->label10->TabIndex = 8;
			this->label10->Text = L"최초 등록 일시";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(4, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 45);
			this->label8->TabIndex = 6;
			this->label8->Text = L"분류";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(4, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 42);
			this->label6->TabIndex = 4;
			this->label6->Text = L"자산명";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(4, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 40);
			this->label2->TabIndex = 0;
			this->label2->Text = L"일련번호 (ULID)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(32, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 32);
			this->label1->TabIndex = 11;
			this->label1->Text = L"자산 생성";
			// 
			// resourceDetailPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(807, 600);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
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
			   // 자산명 변경

			   private: Void updateData() {
				   resourceManagement rm;
				   rm.updateModifyDate(string(ulid));
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_status pms;
	pms.ulid = this->ulid;
	pms.ShowDialog();
	updateData();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_locate pmls;
	pmls.ulid = this->ulid;
	pmls.ShowDialog();
	updateData();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_user pmu;
	pmu.ulid = this->ulid;
	pmu.ShowDialog();
	updateData();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_buyer pmb;
	pmb.ulid = this->ulid;
	pmb.ShowDialog();
	updateData();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_purchaseDate pmp;
	pmp.ulid = this->ulid;
	pmp.ShowDialog();
	updateData();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	popUp_modify_purchase pmp;
	pmp.ulid = this->ulid;
	pmp.ShowDialog();
	updateData();
}
};
}
