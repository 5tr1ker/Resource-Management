#pragma once

#include "functions.h"
namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// formHistory에 대한 요약입니다.
	/// </summary>
	public ref class formHistory : public System::Windows::Forms::Form
	{
	public:
		formHistory(void)
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
		~formHistory()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formHistory::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->tableLayoutPanel2);
			this->panel1->Location = System::Drawing::Point(79, 75);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1092, 290);
			this->panel1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 6;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				43.84058F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				56.15942F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				177)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				213)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				275)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				136)));
			this->tableLayoutPanel2->Controls->Add(this->label13, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label12, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1077, 46);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label13->Location = System::Drawing::Point(452, 1);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(207, 44);
			this->label13->TabIndex = 6;
			this->label13->Text = L"분류";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label12->Location = System::Drawing::Point(666, 1);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(269, 44);
			this->label12->TabIndex = 5;
			this->label12->Text = L"내용";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label11->Location = System::Drawing::Point(942, 1);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 44);
			this->label11->TabIndex = 4;
			this->label11->Text = L"비고";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->Location = System::Drawing::Point(4, 1);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 44);
			this->label10->TabIndex = 3;
			this->label10->Text = L"처리자";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label9->Location = System::Drawing::Point(122, 1);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 44);
			this->label9->TabIndex = 2;
			this->label9->Text = L"일시";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(274, 1);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(171, 44);
			this->label8->TabIndex = 1;
			this->label8->Text = L"활동 구분";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->Location = System::Drawing::Point(72, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 41);
			this->label7->TabIndex = 2;
			this->label7->Text = L"히스토리";
			// 
			// formHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1235, 410);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"formHistory";
			this->Text = L"ITMan-PC";
			this->Load += gcnew System::EventHandler(this, &formHistory::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		resourceManagement rm;
		System::Windows::Forms::Label^ memory_label;
		for (string listData : rm.getHistory()) {
			memory_label = (gcnew System::Windows::Forms::Label());
			memory_label->Dock = System::Windows::Forms::DockStyle::Fill;
			memory_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			memory_label->Location = System::Drawing::Point(4, 1);
			memory_label->Name = L"memory_label";
			memory_label->Size = System::Drawing::Size(84, 38);
			memory_label->TabIndex = 0;
			memory_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			memory_label->Text = gcnew String(listData.c_str());
			tableLayoutPanel2->Controls->Add(memory_label);
		}
	}
	};
}
