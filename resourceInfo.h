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
	/// resourceInfo�� ���� ����Դϴ�.
	/// </summary>

	public ref class resourceInfo : public System::Windows::Forms::Form
	{
	public:
		resourceInfo(void)
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
		~resourceInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ uuid_info;







	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ cpu_info;

	private: System::Windows::Forms::Label^ os_info;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ baseboard_info;
	private: System::Windows::Forms::TableLayoutPanel^ memory_table;
	private: System::Windows::Forms::TableLayoutPanel^ disk_table;
	private: System::Windows::Forms::TableLayoutPanel^ graphic_table;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ software_table;






	protected:
	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(resourceInfo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->uuid_info = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->baseboard_info = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cpu_info = (gcnew System::Windows::Forms::Label());
			this->os_info = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->memory_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->disk_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->graphic_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->software_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(43, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�μ�ǰ ����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"���� ��� Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(437, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����Ʈ���� ����";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.09091F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				66.90909F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				23)));
			this->tableLayoutPanel1->Controls->Add(this->uuid_info, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->label15, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->baseboard_info, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->cpu_info, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->os_info, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->memory_table, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->disk_table, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->graphic_table, 1, 5);
			this->tableLayoutPanel1->Location = System::Drawing::Point(49, 82);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.9434F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.0566F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 75)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 89)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(341, 416);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// uuid_info
			// 
			this->uuid_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->uuid_info->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->uuid_info->Location = System::Drawing::Point(116, 368);
			this->uuid_info->Name = L"uuid_info";
			this->uuid_info->Size = System::Drawing::Size(221, 47);
			this->uuid_info->TabIndex = 17;
			this->uuid_info->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(4, 368);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(105, 47);
			this->label15->TabIndex = 13;
			this->label15->Text = L"UUID";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(4, 278);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(105, 89);
			this->label13->TabIndex = 11;
			this->label13->Text = L"GRAPHICS";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(4, 223);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 54);
			this->label11->TabIndex = 9;
			this->label11->Text = L"DISK";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(4, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 75);
			this->label9->TabIndex = 7;
			this->label9->Text = L"MEMORY";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// baseboard_info
			// 
			this->baseboard_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->baseboard_info->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->baseboard_info->Location = System::Drawing::Point(116, 98);
			this->baseboard_info->Name = L"baseboard_info";
			this->baseboard_info->Size = System::Drawing::Size(221, 48);
			this->baseboard_info->TabIndex = 6;
			this->baseboard_info->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(4, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 48);
			this->label7->TabIndex = 5;
			this->label7->Text = L"BASEBOARD";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// cpu_info
			// 
			this->cpu_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cpu_info->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cpu_info->Location = System::Drawing::Point(116, 50);
			this->cpu_info->Name = L"cpu_info";
			this->cpu_info->Size = System::Drawing::Size(221, 47);
			this->cpu_info->TabIndex = 4;
			this->cpu_info->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// os_info
			// 
			this->os_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->os_info->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->os_info->Location = System::Drawing::Point(116, 1);
			this->os_info->Name = L"os_info";
			this->os_info->Size = System::Drawing::Size(221, 48);
			this->os_info->TabIndex = 3;
			this->os_info->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(4, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 47);
			this->label5->TabIndex = 2;
			this->label5->Text = L"CPU";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(4, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 48);
			this->label3->TabIndex = 0;
			this->label3->Text = L"OS";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// memory_table
			// 
			this->memory_table->ColumnCount = 1;
			this->memory_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->memory_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->memory_table->Location = System::Drawing::Point(116, 151);
			this->memory_table->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->memory_table->Name = L"memory_table";
			this->memory_table->RowCount = 1;
			this->memory_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->memory_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->memory_table->Size = System::Drawing::Size(219, 67);
			this->memory_table->TabIndex = 18;
			// 
			// disk_table
			// 
			this->disk_table->ColumnCount = 1;
			this->disk_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->disk_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->disk_table->Location = System::Drawing::Point(116, 227);
			this->disk_table->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->disk_table->Name = L"disk_table";
			this->disk_table->RowCount = 1;
			this->disk_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->disk_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->disk_table->Size = System::Drawing::Size(219, 46);
			this->disk_table->TabIndex = 19;
			// 
			// graphic_table
			// 
			this->graphic_table->ColumnCount = 1;
			this->graphic_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->graphic_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->graphic_table->Location = System::Drawing::Point(116, 282);
			this->graphic_table->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->graphic_table->Name = L"graphic_table";
			this->graphic_table->RowCount = 1;
			this->graphic_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->graphic_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->graphic_table->Size = System::Drawing::Size(219, 81);
			this->graphic_table->TabIndex = 20;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->software_table);
			this->panel1->Location = System::Drawing::Point(442, 82);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 416);
			this->panel1->TabIndex = 4;
			// 
			// software_table
			// 
			this->software_table->AutoSize = true;
			this->software_table->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->software_table->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->software_table->ColumnCount = 3;
			this->software_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.06349F)));
			this->software_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.93651F)));
			this->software_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				178)));
			this->software_table->Dock = System::Windows::Forms::DockStyle::Top;
			this->software_table->Location = System::Drawing::Point(0, 0);
			this->software_table->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->software_table->Name = L"software_table";
			this->software_table->RowCount = 1;
			this->software_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->software_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->software_table->Size = System::Drawing::Size(465, 2);
			this->software_table->TabIndex = 0;
			// 
			// resourceInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(936, 526);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"resourceInfo";
			this->Text = L"ITMan-IT";
			this->Load += gcnew System::EventHandler(this, &resourceInfo::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		resourceManagement rm;
		os_info->Text = gcnew String(rm.GetOSName().c_str());
		cpu_info->Text = gcnew String(rm.GetProcessorName().c_str());
		baseboard_info->Text = gcnew String(rm.getBaseBoard().c_str());
		uuid_info->Text = gcnew String(rm.getOSUUID().c_str());

		System::Windows::Forms::Label^ memory_label;
		for (string listData : rm.getMemory()) {
			memory_label = (gcnew System::Windows::Forms::Label());
			memory_label->Dock = System::Windows::Forms::DockStyle::Fill;
			memory_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			memory_label->Location = System::Drawing::Point(4, 1);
			memory_label->Name = L"memory_label";
			memory_label->Size = System::Drawing::Size(84, 38);
			memory_label->TabIndex = 0;
			memory_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			memory_label->Text = gcnew String(listData.c_str());
			memory_table->Controls->Add(memory_label);
		}

		System::Windows::Forms::Label^ hdd_label;
		for (string listData : rm.getHDD()) {
			hdd_label = (gcnew System::Windows::Forms::Label());
			hdd_label->Dock = System::Windows::Forms::DockStyle::Fill;
			hdd_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			hdd_label->Location = System::Drawing::Point(4, 1);
			hdd_label->Name = L"hdd_label";
			hdd_label->Size = System::Drawing::Size(84, 38);
			hdd_label->TabIndex = 0;
			hdd_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			hdd_label->Text = gcnew String(listData.c_str());
			disk_table->Controls->Add(hdd_label);
		}

		System::Windows::Forms::Label^ gpu_label;
		for (string listData : rm.getGPU()) {
			gpu_label = (gcnew System::Windows::Forms::Label());
			gpu_label->Dock = System::Windows::Forms::DockStyle::Fill;
			gpu_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			gpu_label->Location = System::Drawing::Point(4, 1);
			gpu_label->Name = L"gpu_label";
			gpu_label->Size = System::Drawing::Size(84, 38);
			gpu_label->TabIndex = 0;
			gpu_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			gpu_label->Text = gcnew String(listData.c_str());
			graphic_table->Controls->Add(gpu_label);
		}

		map<string, vector<string>> result = rm.getInstalledSoftware();
		vector<string> nameResult = result["name"];
		vector<string> vendorResult = result["vendor"];
		vector<string> versionResult = result["version"];
		System::Windows::Forms::Label^ software_label;
		for (int i = 0; i < nameResult.size(); i++) {
			software_label = (gcnew System::Windows::Forms::Label());
			software_label->Dock = System::Windows::Forms::DockStyle::Fill;
			software_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			software_label->Location = System::Drawing::Point(4, 1);
			software_label->Name = L"software_label";
			software_label->Size = System::Drawing::Size(84, 38);
			software_label->TabIndex = 0;
			software_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			software_label->Text = gcnew String(nameResult[i].c_str());
			software_table->Controls->Add(software_label);

			software_label = (gcnew System::Windows::Forms::Label());
			software_label->Dock = System::Windows::Forms::DockStyle::Fill;
			software_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			software_label->Location = System::Drawing::Point(4, 1);
			software_label->Name = L"software_label";
			software_label->Size = System::Drawing::Size(84, 38);
			software_label->TabIndex = 0;
			software_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			software_label->Text = gcnew String(vendorResult[i].c_str());
			software_table->Controls->Add(software_label);

			software_label = (gcnew System::Windows::Forms::Label());
			software_label->Dock = System::Windows::Forms::DockStyle::Fill;
			software_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			software_label->Location = System::Drawing::Point(4, 1);
			software_label->Name = L"software_label";
			software_label->Size = System::Drawing::Size(84, 38);
			software_label->TabIndex = 0;
			software_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			software_label->Text = gcnew String(versionResult[i].c_str());
			software_table->Controls->Add(software_label);
		}
	}
	};
}
