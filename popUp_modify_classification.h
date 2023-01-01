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
	/// popUp_modify_classification에 대한 요약입니다.
	/// </summary>
	public ref class popUp_modify_classification : public System::Windows::Forms::Form
	{
	public:
		const char* ulid;
		popUp_modify_classification(void)
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
		~popUp_modify_classification()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::TextBox^ etc_data;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Button^ submit_button;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(popUp_modify_classification::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->etc_data = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(23, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 21);
			this->label3->TabIndex = 21;
			this->label3->Text = L"비고";
			// 
			// etc_data
			// 
			this->etc_data->Location = System::Drawing::Point(114, 88);
			this->etc_data->Name = L"etc_data";
			this->etc_data->Size = System::Drawing::Size(207, 21);
			this->etc_data->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(23, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 21);
			this->label2->TabIndex = 19;
			this->label2->Text = L"분류";
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(64, 124);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(86, 31);
			this->cancel->TabIndex = 18;
			this->cancel->Text = L"취소";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &popUp_modify_classification::cancel_Click);
			// 
			// submit_button
			// 
			this->submit_button->Location = System::Drawing::Point(208, 124);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(86, 31);
			this->submit_button->TabIndex = 17;
			this->submit_button->Text = L"완료";
			this->submit_button->UseVisualStyleBackColor = true;
			this->submit_button->Click += gcnew System::EventHandler(this, &popUp_modify_classification::submit_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(76, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 21);
			this->label1->TabIndex = 15;
			this->label1->Text = L"수정할 분류를 선택해주세요.";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(114, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 20);
			this->comboBox1->TabIndex = 22;
			// 
			// popUp_modify_classification
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 183);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->etc_data);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"popUp_modify_classification";
			this->Text = L"ITMan-PC";
			this->Load += gcnew System::EventHandler(this, &popUp_modify_classification::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		resourceManagement rm;

		string data = msclr::interop::marshal_as<std::string>(comboBox1->Text);
		string etc = msclr::interop::marshal_as<std::string>(etc_data->Text);

		if (data.size() <= 0) {
			MessageBox::Show("문항을 입력해주세요");
		}
		else {
			resourceData rd = rm.getDetailResource(ulid);
			string query = "UPDATE `comon`.`resource_details` SET `classification` = '" + data + "' WHERE (`ulid` = '" + string(ulid) + "');";
			int result = rm.updateResource(query);

			string contents = rd.classification + "->" + data;

			rm.createHistory("수정", "분류", contents, etc);

			if (result == 1) {
				MessageBox::Show("수정에 성공했습니다");
				Close();
			}
			else {
				MessageBox::Show("오류가 발생했습니다 로그를 확인해주세요.");
			}
		}
		
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		resourceManagement rm;
		list<string> result = rm.getClassificationList();

		for (string data : result) {
			comboBox1->Items->Add(gcnew String(data.c_str()));
		}
	}
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
