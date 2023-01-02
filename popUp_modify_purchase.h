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
	/// popUp_modify_purchase�� ���� ����Դϴ�.
	/// </summary>
	public ref class popUp_modify_purchase : public System::Windows::Forms::Form
	{
	public:
		const char *ulid;
		popUp_modify_purchase(void)
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
		~popUp_modify_purchase()
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
	private: System::Windows::Forms::TextBox^ items;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(popUp_modify_purchase::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->etc_data = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->items = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(20, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 28);
			this->label3->TabIndex = 28;
			this->label3->Text = L"���";
			// 
			// etc_data
			// 
			this->etc_data->Location = System::Drawing::Point(124, 121);
			this->etc_data->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->etc_data->Name = L"etc_data";
			this->etc_data->Size = System::Drawing::Size(236, 25);
			this->etc_data->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(20, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 28);
			this->label2->TabIndex = 26;
			this->label2->Text = L"����";
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(67, 166);
			this->cancel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(98, 39);
			this->cancel->TabIndex = 25;
			this->cancel->Text = L"���";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &popUp_modify_purchase::cancel_Click);
			// 
			// submit_button
			// 
			this->submit_button->Location = System::Drawing::Point(231, 166);
			this->submit_button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(98, 39);
			this->submit_button->TabIndex = 24;
			this->submit_button->Text = L"�Ϸ�";
			this->submit_button->UseVisualStyleBackColor = true;
			this->submit_button->Click += gcnew System::EventHandler(this, &popUp_modify_purchase::submit_button_Click);
			// 
			// items
			// 
			this->items->Location = System::Drawing::Point(124, 87);
			this->items->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->items->Name = L"items";
			this->items->Size = System::Drawing::Size(236, 25);
			this->items->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"���� ���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(62, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 28);
			this->label1->TabIndex = 22;
			this->label1->Text = L"������ ������ �Է����ּ���.";
			// 
			// popUp_modify_purchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 255);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->etc_data);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit_button);
			this->Controls->Add(this->items);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"popUp_modify_purchase";
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

	string data = msclr::interop::marshal_as<std::string>(items->Text);
	string etc = msclr::interop::marshal_as<std::string>(etc_data->Text);

	if (data.size() <= 0) {
		MessageBox::Show("������ �Է����ּ���");
	}
	else {
		resourceData rd = rm.getDetailResource(ulid);
		string query = "UPDATE `comon`.`resource_details` SET `price` = '" + data + "��' WHERE (`ulid` = '" + string(ulid) + "');";
		int result = rm.updateResource(query);

		string contents = rd.price + "->" + data;

		rm.createHistory("����", "����", contents, etc);

		if (result == 1) {
			MessageBox::Show("������ �����߽��ϴ�");
			Close();
		}
		else {
			MessageBox::Show("������ �߻��߽��ϴ� �α׸� Ȯ�����ּ���.");
		}
	}
}
};
}
