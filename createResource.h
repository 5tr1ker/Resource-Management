#pragma once

#include "functions.h"
#include <msclr\marshal_cppstd.h>
using namespace System::Text;
using namespace System::IO;
using namespace System::Security;

namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// createResource에 대한 요약입니다.
	/// </summary>
	public ref class createResource : public System::Windows::Forms::Form
	{
	public:
		createResource(void)
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
		~createResource()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ resourceName;
	private: System::Windows::Forms::TextBox^ buyDate_label;

	private: System::Windows::Forms::TextBox^ price_label;



	private: System::Windows::Forms::ComboBox^ classification_box;
	private: System::Windows::Forms::ComboBox^ status_box;
	private: System::Windows::Forms::ComboBox^ locate_box;
	private: System::Windows::Forms::ComboBox^ user_box;
	private: System::Windows::Forms::ComboBox^ whereBuy_box;









	private: System::Windows::Forms::Label^ ulid_number;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ imageName;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(createResource::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->classification_box = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->resourceName = (gcnew System::Windows::Forms::TextBox());
			this->status_box = (gcnew System::Windows::Forms::ComboBox());
			this->locate_box = (gcnew System::Windows::Forms::ComboBox());
			this->user_box = (gcnew System::Windows::Forms::ComboBox());
			this->ulid_number = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->imageName = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->whereBuy_box = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->buyDate_label = (gcnew System::Windows::Forms::TextBox());
			this->price_label = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(37, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"자산 생성";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.27881F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.72119F)));
			this->tableLayoutPanel1->Controls->Add(this->classification_box, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->resourceName, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->status_box, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->locate_box, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->user_box, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->ulid_number, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(29, 48);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.5625F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.4375F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(538, 212);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// classification_box
			// 
			this->classification_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->classification_box->FormattingEnabled = true;
			this->classification_box->Location = System::Drawing::Point(140, 99);
			this->classification_box->Name = L"classification_box";
			this->classification_box->Size = System::Drawing::Size(394, 20);
			this->classification_box->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label14->Location = System::Drawing::Point(4, 182);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 29);
			this->label14->TabIndex = 12;
			this->label14->Text = L"* 사용 직원";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->Location = System::Drawing::Point(4, 153);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 28);
			this->label12->TabIndex = 10;
			this->label12->Text = L"* 위치";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Dock = System::Windows::Forms::DockStyle::Left;
			this->label10->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->Location = System::Drawing::Point(4, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 28);
			this->label10->TabIndex = 8;
			this->label10->Text = L"* 상태";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(4, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 27);
			this->label8->TabIndex = 6;
			this->label8->Text = L"* 분류";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(4, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 27);
			this->label6->TabIndex = 4;
			this->label6->Text = L"* 자산명";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(4, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 31);
			this->label4->TabIndex = 2;
			this->label4->Text = L"자산 이미지";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(4, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 34);
			this->label2->TabIndex = 0;
			this->label2->Text = L"일련번호 (ULID)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// resourceName
			// 
			this->resourceName->Location = System::Drawing::Point(140, 71);
			this->resourceName->Name = L"resourceName";
			this->resourceName->Size = System::Drawing::Size(394, 21);
			this->resourceName->TabIndex = 13;
			// 
			// status_box
			// 
			this->status_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->status_box->FormattingEnabled = true;
			this->status_box->Location = System::Drawing::Point(140, 127);
			this->status_box->Name = L"status_box";
			this->status_box->Size = System::Drawing::Size(394, 20);
			this->status_box->TabIndex = 14;
			// 
			// locate_box
			// 
			this->locate_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->locate_box->FormattingEnabled = true;
			this->locate_box->Location = System::Drawing::Point(140, 156);
			this->locate_box->Name = L"locate_box";
			this->locate_box->Size = System::Drawing::Size(394, 20);
			this->locate_box->TabIndex = 15;
			// 
			// user_box
			// 
			this->user_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->user_box->FormattingEnabled = true;
			this->user_box->Location = System::Drawing::Point(140, 185);
			this->user_box->Name = L"user_box";
			this->user_box->Size = System::Drawing::Size(394, 20);
			this->user_box->TabIndex = 16;
			// 
			// ulid_number
			// 
			this->ulid_number->AutoSize = true;
			this->ulid_number->Dock = System::Windows::Forms::DockStyle::Left;
			this->ulid_number->Font = (gcnew System::Drawing::Font(L"맑은 고딕 Semilight", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->ulid_number->Location = System::Drawing::Point(140, 1);
			this->ulid_number->Name = L"ulid_number";
			this->ulid_number->Size = System::Drawing::Size(68, 34);
			this->ulid_number->TabIndex = 17;
			this->ulid_number->Text = L"unknown";
			this->ulid_number->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				266)));
			this->tableLayoutPanel3->Controls->Add(this->button7, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->imageName, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(140, 39);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(394, 25);
			this->tableLayoutPanel3->TabIndex = 18;
			this->tableLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &createResource::tableLayoutPanel3_Paint);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(3, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 19);
			this->button7->TabIndex = 10;
			this->button7->Text = L"이미지 추가";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &createResource::button7_Click);
			// 
			// imageName
			// 
			this->imageName->Dock = System::Windows::Forms::DockStyle::Left;
			this->imageName->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->imageName->Location = System::Drawing::Point(131, 0);
			this->imageName->Name = L"imageName";
			this->imageName->Size = System::Drawing::Size(100, 25);
			this->imageName->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(32, 291);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"구매 정보";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.27881F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.72119F)));
			this->tableLayoutPanel2->Controls->Add(this->whereBuy_box, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label13, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label15, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label16, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->buyDate_label, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->price_label, 1, 2);
			this->tableLayoutPanel2->Location = System::Drawing::Point(29, 319);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.12281F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.87719F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 26)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(538, 88);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// whereBuy_box
			// 
			this->whereBuy_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->whereBuy_box->FormattingEnabled = true;
			this->whereBuy_box->Location = System::Drawing::Point(140, 4);
			this->whereBuy_box->Name = L"whereBuy_box";
			this->whereBuy_box->Size = System::Drawing::Size(394, 20);
			this->whereBuy_box->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->Dock = System::Windows::Forms::DockStyle::Left;
			this->label13->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->Location = System::Drawing::Point(4, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 29);
			this->label13->TabIndex = 4;
			this->label13->Text = L"가격";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->Dock = System::Windows::Forms::DockStyle::Left;
			this->label15->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label15->Location = System::Drawing::Point(4, 29);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(129, 28);
			this->label15->TabIndex = 2;
			this->label15->Text = L"최초 구매일";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->Dock = System::Windows::Forms::DockStyle::Left;
			this->label16->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label16->Location = System::Drawing::Point(4, 1);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 27);
			this->label16->TabIndex = 0;
			this->label16->Text = L"구매처";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// buyDate_label
			// 
			this->buyDate_label->Location = System::Drawing::Point(140, 32);
			this->buyDate_label->Name = L"buyDate_label";
			this->buyDate_label->Size = System::Drawing::Size(394, 21);
			this->buyDate_label->TabIndex = 14;
			// 
			// price_label
			// 
			this->price_label->Location = System::Drawing::Point(140, 61);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(394, 21);
			this->price_label->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(203, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"취소";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &createResource::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(377, 434);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"완료";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &createResource::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(573, 319);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"구매처 등록";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(573, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 28);
			this->button4->TabIndex = 7;
			this->button4->Text = L"직원 등록";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(573, 202);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 27);
			this->button5->TabIndex = 8;
			this->button5->Text = L"추가";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(573, 172);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 27);
			this->button6->TabIndex = 9;
			this->button6->Text = L"추가";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(573, 143);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 27);
			this->button8->TabIndex = 10;
			this->button8->Text = L"추가";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// createResource
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(686, 499);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"createResource";
			this->Text = L"ITMan-PC";
			this->Load += gcnew System::EventHandler(this, &createResource::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		resourceManagement rm;
		string str = rm.createULID();
		ulid_number->Text = gcnew String(str.c_str());

		// 분류 리스트 가져오기
		list<string> classicicationList = rm.getClassificationList(); 
		for (string listData : classicicationList) {
			classification_box->Items->Add(gcnew String(listData.c_str()));
		}

		// 상태 리스트 가져오기
		list<string> statusList = rm.getStatusList();
		for (string listData : statusList) {
			status_box->Items->Add(gcnew String(listData.c_str()));
		}

		// 위치 정보 가져오기
		list<string> locateList = rm.getLocationList();
		for (string listData : locateList) {
			locate_box->Items->Add(gcnew String(listData.c_str()));
		}

		// 사용자 정보 가져오기
		list<string> userList = rm.getUserList();
		for (string listData : userList) {
			user_box->Items->Add(gcnew String(listData.c_str()));
		}

		// 구매처 정보 가져오기
		list<string> buyerList = rm.getBuyerList();
		for (string listData : buyerList) {
			whereBuy_box->Items->Add(gcnew String(listData.c_str()));
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	resourceManagement rm;

	string ulid = msclr::interop::marshal_as<std::string>(ulid_number->Text);
	string images = msclr::interop::marshal_as<std::string>(imageName->Text);
	string resource = msclr::interop::marshal_as<std::string>(resourceName->Text);
	string classification = msclr::interop::marshal_as<std::string>(classification_box->Text);
	string status = msclr::interop::marshal_as<std::string>(status_box->Text);
	string location = msclr::interop::marshal_as<std::string>(locate_box->Text);
	string user = msclr::interop::marshal_as<std::string>(user_box->Text);
	string buyer = msclr::interop::marshal_as<std::string>(whereBuy_box->Text);
	string purchaseDate = msclr::interop::marshal_as<std::string>(buyDate_label->Text);
	string price = msclr::interop::marshal_as<std::string>(price_label->Text);

	int result = rm.createResource(ulid , images , resource , classification , status , location , user , buyer , purchaseDate , price);
	if (result != -1) {
		MessageBox::Show("등록에 성공했습니다!");
		Close();
	}
	else {
		MessageBox::Show("등록에 실패했습니다. 로그를 확인해주세요.");
	}
}

	   // 이미지 파일
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	/**/
	Stream^ myStream;
	Encoding^ encoding = gcnew System::Text::UTF8Encoding;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	//openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "Images Files(*.jpg; *.jpeg; *.gif; *.bmp; *.png)|*.jpg;*.jpeg;*.gif;*.bmp;*.png";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;


	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ Readfile = File::ReadAllText(strfilename, encoding);
			// Insert code to read the stream here.
			myStream->Close();
		}
	}
	
}
private: System::Void tableLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
