#pragma once

namespace comonResourceManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// popUp에 대한 요약입니다.
	/// </summary>
	public ref class popUp : public System::Windows::Forms::Form
	{
	public:
		popUp(void)
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
		~popUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ submit_button;
	private: System::Windows::Forms::Button^ cancel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(popUp::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(30, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"추가할 항목을 입력해주세요.";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(214, 21);
			this->textBox1->TabIndex = 1;
			// 
			// submit_button
			// 
			this->submit_button->Location = System::Drawing::Point(152, 95);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(86, 31);
			this->submit_button->TabIndex = 2;
			this->submit_button->Text = L"추가";
			this->submit_button->UseVisualStyleBackColor = true;
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(34, 95);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(86, 31);
			this->cancel->TabIndex = 3;
			this->cancel->Text = L"취소";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &popUp::cancel_Click);
			// 
			// popUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(277, 138);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"popUp";
			this->Text = L"ITMan-PC";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
