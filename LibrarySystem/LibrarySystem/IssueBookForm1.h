#pragma once

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class IssueBookForm : public System::Windows::Forms::Form
	{
	public:
		IssueBookForm(void)
		{
			InitializeComponent();
		}

	protected:
		~IssueBookForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblBookID;
	private: System::Windows::Forms::TextBox^ txtBookID;
	private: System::Windows::Forms::Label^ lblMemberID;
	private: System::Windows::Forms::TextBox^ txtMemberID;
	private: System::Windows::Forms::Label^ lblIssueDate;
	private: System::Windows::Forms::DateTimePicker^ dtpIssueDate;
	private: System::Windows::Forms::Label^ lblReturnDate;
	private: System::Windows::Forms::DateTimePicker^ dtpReturnDate;
	private: System::Windows::Forms::Button^ btnIssue;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Label^ lblStatus;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->lblBookID = (gcnew System::Windows::Forms::Label());
			   this->txtBookID = (gcnew System::Windows::Forms::TextBox());
			   this->lblMemberID = (gcnew System::Windows::Forms::Label());
			   this->txtMemberID = (gcnew System::Windows::Forms::TextBox());
			   this->lblIssueDate = (gcnew System::Windows::Forms::Label());
			   this->dtpIssueDate = (gcnew System::Windows::Forms::DateTimePicker());
			   this->lblReturnDate = (gcnew System::Windows::Forms::Label());
			   this->dtpReturnDate = (gcnew System::Windows::Forms::DateTimePicker());
			   this->btnIssue = (gcnew System::Windows::Forms::Button());
			   this->btnReset = (gcnew System::Windows::Forms::Button());
			   this->lblStatus = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // lblBookID
			   // 
			   this->lblBookID->AutoSize = true;
			   this->lblBookID->Location = System::Drawing::Point(40, 30);
			   this->lblBookID->Name = L"lblBookID";
			   this->lblBookID->Size = System::Drawing::Size(49, 13);
			   this->lblBookID->TabIndex = 0;
			   this->lblBookID->Text = L"Book ID:";
			   // 
			   // txtBookID
			   // 
			   this->txtBookID->Location = System::Drawing::Point(150, 27);
			   this->txtBookID->Name = L"txtBookID";
			   this->txtBookID->Size = System::Drawing::Size(200, 20);
			   this->txtBookID->TabIndex = 1;
			   // 
			   // lblMemberID
			   // 
			   this->lblMemberID->AutoSize = true;
			   this->lblMemberID->Location = System::Drawing::Point(40, 70);
			   this->lblMemberID->Name = L"lblMemberID";
			   this->lblMemberID->Size = System::Drawing::Size(62, 13);
			   this->lblMemberID->TabIndex = 2;
			   this->lblMemberID->Text = L"Member ID:";
			   // 
			   // txtMemberID
			   // 
			   this->txtMemberID->Location = System::Drawing::Point(150, 67);
			   this->txtMemberID->Name = L"txtMemberID";
			   this->txtMemberID->Size = System::Drawing::Size(200, 20);
			   this->txtMemberID->TabIndex = 3;
			   // 
			   // lblIssueDate
			   // 
			   this->lblIssueDate->AutoSize = true;
			   this->lblIssueDate->Location = System::Drawing::Point(40, 110);
			   this->lblIssueDate->Name = L"lblIssueDate";
			   this->lblIssueDate->Size = System::Drawing::Size(61, 13);
			   this->lblIssueDate->TabIndex = 4;
			   this->lblIssueDate->Text = L"Issue Date:";
			   // 
			   // dtpIssueDate
			   // 
			   this->dtpIssueDate->Location = System::Drawing::Point(150, 107);
			   this->dtpIssueDate->Name = L"dtpIssueDate";
			   this->dtpIssueDate->Size = System::Drawing::Size(200, 20);
			   this->dtpIssueDate->TabIndex = 5;
			   // 
			   // lblReturnDate
			   // 
			   this->lblReturnDate->AutoSize = true;
			   this->lblReturnDate->Location = System::Drawing::Point(40, 150);
			   this->lblReturnDate->Name = L"lblReturnDate";
			   this->lblReturnDate->Size = System::Drawing::Size(68, 13);
			   this->lblReturnDate->TabIndex = 6;
			   this->lblReturnDate->Text = L"Return Date:";
			   // 
			   // dtpReturnDate
			   // 
			   this->dtpReturnDate->Location = System::Drawing::Point(150, 147);
			   this->dtpReturnDate->Name = L"dtpReturnDate";
			   this->dtpReturnDate->Size = System::Drawing::Size(200, 20);
			   this->dtpReturnDate->TabIndex = 7;
			   // 
			   // btnIssue
			   // 
			   this->btnIssue->Location = System::Drawing::Point(150, 190);
			   this->btnIssue->Name = L"btnIssue";
			   this->btnIssue->Size = System::Drawing::Size(100, 23);
			   this->btnIssue->TabIndex = 8;
			   this->btnIssue->Text = L"Issue Book";
			   this->btnIssue->Click += gcnew System::EventHandler(this, &IssueBookForm::btnIssue_Click);
			   // 
			   // btnReset
			   // 
			   this->btnReset->Location = System::Drawing::Point(260, 190);
			   this->btnReset->Name = L"btnReset";
			   this->btnReset->Size = System::Drawing::Size(90, 23);
			   this->btnReset->TabIndex = 9;
			   this->btnReset->Text = L"Reset";
			   this->btnReset->Click += gcnew System::EventHandler(this, &IssueBookForm::btnReset_Click);
			   // 
			   // lblStatus
			   // 
			   this->lblStatus->AutoSize = true;
			   this->lblStatus->ForeColor = System::Drawing::Color::Green;
			   this->lblStatus->Location = System::Drawing::Point(150, 230);
			   this->lblStatus->Name = L"lblStatus";
			   this->lblStatus->Size = System::Drawing::Size(0, 13);
			   this->lblStatus->TabIndex = 10;
			   // 
			   // IssueBookForm
			   // 
			   this->ClientSize = System::Drawing::Size(420, 280);
			   this->Controls->Add(this->lblBookID);
			   this->Controls->Add(this->txtBookID);
			   this->Controls->Add(this->lblMemberID);
			   this->Controls->Add(this->txtMemberID);
			   this->Controls->Add(this->lblIssueDate);
			   this->Controls->Add(this->dtpIssueDate);
			   this->Controls->Add(this->lblReturnDate);
			   this->Controls->Add(this->dtpReturnDate);
			   this->Controls->Add(this->btnIssue);
			   this->Controls->Add(this->btnReset);
			   this->Controls->Add(this->lblStatus);
			   this->Name = L"IssueBookForm";
			   this->Text = L"Issue Book";
			   this->Load += gcnew System::EventHandler(this, &IssueBookForm::IssueBookForm_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void btnIssue_Click(System::Object^ sender, System::EventArgs^ e) {
		lblStatus->Text = "? Book issued successfully!";
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBookID->Text = "";
		txtMemberID->Text = "";
		dtpIssueDate->Value = DateTime::Now;
		dtpReturnDate->Value = DateTime::Now.AddDays(7);
		lblStatus->Text = "";
	}
	private: System::Void IssueBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
