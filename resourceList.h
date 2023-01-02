#pragma once

#include "resourceDetailPage.h"
namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// resourceList에 대한 요약입니다.
	/// </summary>
	public ref class resourceList : public System::Windows::Forms::Form
	{
	public:
		char* ulid;
		resourceList(void)
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
		~resourceList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ search_Box;
	private: System::Windows::Forms::TextBox^ searchIndex;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::ComboBox^ offset_box;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(resourceList::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->search_Box = (gcnew System::Windows::Forms::ComboBox());
			this->searchIndex = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->offset_box = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(38, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"자산 관리";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 8;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.2463F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.7537F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				108)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				128)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				128)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				89)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel2->Controls->Add(this->label9, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->label8, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->label7, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->label6, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 2);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(933, 26);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label9->Location = System::Drawing::Point(809, 1);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 24);
			this->label9->TabIndex = 7;
			this->label9->Text = L"구매 정보";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(719, 1);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 24);
			this->label8->TabIndex = 6;
			this->label8->Text = L"위치";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->Location = System::Drawing::Point(590, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 24);
			this->label7->TabIndex = 5;
			this->label7->Text = L"사용 직원";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(461, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"상태";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->Location = System::Drawing::Point(352, 1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"분류";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(258, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"자산명";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(132, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"일련번호";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(4, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"자산 이미지";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search_Box
			// 
			this->search_Box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->search_Box->FormattingEnabled = true;
			this->search_Box->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"분류", L"사용 직원", L"상태", L"위치", L"일련번호", L"자산명",
					L"전체"
			});
			this->search_Box->Location = System::Drawing::Point(648, 10);
			this->search_Box->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search_Box->Name = L"search_Box";
			this->search_Box->Size = System::Drawing::Size(106, 20);
			this->search_Box->TabIndex = 2;
			// 
			// searchIndex
			// 
			this->searchIndex->Location = System::Drawing::Point(760, 10);
			this->searchIndex->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchIndex->Name = L"searchIndex";
			this->searchIndex->Size = System::Drawing::Size(93, 21);
			this->searchIndex->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(858, 10);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 20);
			this->button1->TabIndex = 4;
			this->button1->Text = L"검색";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &resourceList::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(906, 343);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 20);
			this->button2->TabIndex = 5;
			this->button2->Text = L"생성";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &resourceList::button2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				27)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				38)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				36)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				34)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(354, 357);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(326, 20);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->tableLayoutPanel2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(30, 46);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(941, 292);
			this->flowLayoutPanel1->TabIndex = 7;
			// 
			// offset_box
			// 
			this->offset_box->BackColor = System::Drawing::SystemColors::HighlightText;
			this->offset_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->offset_box->FormattingEnabled = true;
			this->offset_box->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"10개", L"20개", L"30개" });
			this->offset_box->Location = System::Drawing::Point(508, 10);
			this->offset_box->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->offset_box->Name = L"offset_box";
			this->offset_box->Size = System::Drawing::Size(106, 20);
			this->offset_box->TabIndex = 8;
			this->offset_box->SelectedIndexChanged += gcnew System::EventHandler(this, &resourceList::offset_box_SelectedIndexChanged);
			// 
			// resourceList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(999, 386);
			this->Controls->Add(this->offset_box);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->searchIndex);
			this->Controls->Add(this->search_Box);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"resourceList";
			this->Text = L"ITMan-PC";
			this->Load += gcnew System::EventHandler(this, &resourceList::MyForm_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public: Void refreshList(list<string> result) {
			tableLayoutPanel2->Controls->Clear();

			System::Windows::Forms::Label^ result_label;
			System::Windows::Forms::Label^ infolabel;
			string items[] = {"자산 이미지" , "일련번호" , "자산명" , "분류" , "상태" , "사용 직원" , "위치" , "구매 정보"};

			for (int i = 0; i <= 7; i++) {
				result_label = (gcnew System::Windows::Forms::Label());
				result_label->Dock = System::Windows::Forms::DockStyle::Fill;
				result_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				result_label->Location = System::Drawing::Point(4, 1);
				result_label->Name = L"software_label";
				result_label->Size = System::Drawing::Size(84, 38);
				result_label->TabIndex = 0;
				result_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				result_label->Text = gcnew String(items[i].c_str());
				tableLayoutPanel2->Controls->Add(result_label);
			}

			int idx = 0;
			for (string str : result) {
				if (idx > 0 && idx % 7 == 0) {
					infolabel = (gcnew System::Windows::Forms::Label());
					infolabel->Dock = System::Windows::Forms::DockStyle::Fill;
					infolabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
					infolabel->Location = System::Drawing::Point(4, 1);
					infolabel->Name = gcnew String(ulid);
					infolabel->Size = System::Drawing::Size(84, 38);
					infolabel->TabIndex = 0;
					infolabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
					infolabel->Text = gcnew String("상세 보기");
					infolabel->Click += gcnew System::EventHandler(this, &resourceList::openData);
					tableLayoutPanel2->Controls->Add(infolabel);
					idx = 0;
				}

				if (idx == 1) {
					ulid = (char*)malloc(sizeof(char) * str.length());
					strcpy(ulid, str.c_str());
				}
				result_label = (gcnew System::Windows::Forms::Label());
				result_label->Dock = System::Windows::Forms::DockStyle::Fill;
				result_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				result_label->Location = System::Drawing::Point(4, 1);
				result_label->Name = L"software_label";
				result_label->Size = System::Drawing::Size(84, 38);
				result_label->TabIndex = 0;
				result_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				result_label->Text = gcnew String(str.c_str());
				tableLayoutPanel2->Controls->Add(result_label);
				idx++;
			}

			infolabel = (gcnew System::Windows::Forms::Label());
			infolabel->Dock = System::Windows::Forms::DockStyle::Fill;
			infolabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			infolabel->Location = System::Drawing::Point(4, 1);
			infolabel->Name = gcnew String(ulid);
			infolabel->Size = System::Drawing::Size(84, 38);
			infolabel->TabIndex = 0;
			infolabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			infolabel->Text = gcnew String("상세 보기");
			infolabel->Click += gcnew System::EventHandler(this, &resourceList::openData);
			tableLayoutPanel2->Controls->Add(infolabel);
			idx = 0;
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// offset_box->SelectedItem = NULL;
		offset_box->Text = "20개";
		search_Box->Text = "전체";

		resourceManagement rm;
		list<string> result = rm.searchResource("" , "" , 20 , 1);

		refreshList(result);

	}

	private: System::Void openData(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Label^ infolabel = (System::Windows::Forms::Label ^)sender;
		string data = msclr::interop::marshal_as<std::string>(infolabel->Name);

		resourceManagement rm;
		resourceData result = rm.getDetailResource(data.c_str());

		cout << result.classification;
	}
#pragma endregion
	private: System::Void offset_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		string offsets = msclr::interop::marshal_as<std::string>(offset_box->Text);

		resourceManagement rm;
		int offset_data = 20;
		if (offsets == "10개") offset_data = 10;
		else if (offsets == "20개") offset_data = 20;
		else if (offsets == "30개") offset_data = 30;

		list<string> result = rm.searchResource("", "", offset_data, 1);

		refreshList(result);
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string offsets = msclr::interop::marshal_as<std::string>(offset_box->Text);
	string classifi = msclr::interop::marshal_as<std::string>(search_Box->Text);
	string searchData = msclr::interop::marshal_as<std::string>(searchIndex->Text);

	int offset_data = 20;
	if (offsets == "10개") offset_data = 10;
	else if (offsets == "20개") offset_data = 20;
	else if (offsets == "30개") offset_data = 30;

	/*
분류
사용 직원
상태
위치
일련번호
자산명
전체
	*/
	string item = "";
	if (classifi == "전체") item = "";
	else if (classifi == "자산명") item = "resourcename";
	else if (classifi == "일련번호") item = "ulid";
	else if (classifi == "위치") item = "location";
	else if (classifi == "상태") item = "status";
	else if (classifi == "사용 직원") item = "user";
	else if (classifi == "분류") item = "classification";

	resourceManagement rm;
	list<string> result = rm.searchResource(item.c_str() , searchData.c_str() , offset_data, 1);

	refreshList(result);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
