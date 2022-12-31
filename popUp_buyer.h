#pragma once
#include <msclr\marshal_cppstd.h>
#include "functions.h"
namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// popUp_buyer에 대한 요약입니다.
	/// </summary>
	public ref class popUp_buyer : public System::Windows::Forms::Form
	{
	public:
		popUp_buyer(void)
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
		~popUp_buyer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel;
	protected:
	private: System::Windows::Forms::Button^ submit_button;
	private: System::Windows::Forms::TextBox^ items;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(popUp_buyer::typeid));
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->items = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(38, 102);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(86, 31);
			this->cancel->TabIndex = 7;
			this->cancel->Text = L"취소";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &popUp_buyer::cancel_Click);
			// 
			// submit_button
			// 
			this->submit_button->Location = System::Drawing::Point(156, 102);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(86, 31);
			this->submit_button->TabIndex = 6;
			this->submit_button->Text = L"추가";
			this->submit_button->UseVisualStyleBackColor = true;
			this->submit_button->Click += gcnew System::EventHandler(this, &popUp_buyer::submit_button_Click);
			// 
			// items
			// 
			this->items->Location = System::Drawing::Point(38, 65);
			this->items->Name = L"items";
			this->items->Size = System::Drawing::Size(214, 21);
			this->items->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"추가할 구매처 항목을 입력해주세요.";
			// 
			// popUp_buyer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 162);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->items);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"popUp_buyer";
			this->Text = L"ITMan-PC";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void submit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	resourceManagement rm;
	string item = msclr::interop::marshal_as<std::string>(items->Text);
	if (item.size() == 0) {
		MessageBox::Show("문항을 입력해주세요.");
	}
	else {
		string query = "INSERT INTO `comon`.`buyer_list` (`buyer_items`) VALUES ('" + item + "');";
		int result = rm.createNewList(query);

		if (result == 1) {
			MessageBox::Show("등록하였습니다!");
			Close();
		}
		else {
			MessageBox::Show("오류가 발생했습니다. 로그를 확인해주세요.");
		}
	}
}
};
}
