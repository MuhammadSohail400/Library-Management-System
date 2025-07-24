#pragma once
#include "DBConnection.h"
namespace LibrarySystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace LibrarySystem;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for ReturnBookForm
    /// </summary>
    public ref class ReturnBookForm : public System::Windows::Forms::Form
    {
    public:
        ReturnBookForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~ReturnBookForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ panel2;
    protected:
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ btnRefresh;
    private: System::Windows::Forms::Button^ btnSearchStudent;
    private: System::Windows::Forms::TextBox^ txtEnrollment;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TextBox^ txtBookName;
    private: System::Windows::Forms::Label^ lblBookReturnDate;
    private: System::Windows::Forms::Label^ lblBookIssueDate;
    private: System::Windows::Forms::Label^ lblBookName;
    private: System::Windows::Forms::Button^ btnCancel;
    private: System::Windows::Forms::Button^ btnReturn;
    private: System::Windows::Forms::TextBox^ txtBookIssueDate;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReturnBookForm::typeid));
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnRefresh = (gcnew System::Windows::Forms::Button());
            this->btnSearchStudent = (gcnew System::Windows::Forms::Button());
            this->txtEnrollment = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->btnReturn = (gcnew System::Windows::Forms::Button());
            this->txtBookIssueDate = (gcnew System::Windows::Forms::TextBox());
            this->txtBookName = (gcnew System::Windows::Forms::TextBox());
            this->lblBookReturnDate = (gcnew System::Windows::Forms::Label());
            this->lblBookIssueDate = (gcnew System::Windows::Forms::Label());
            this->lblBookName = (gcnew System::Windows::Forms::Label());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel2
            // 
            this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel2->BackColor = System::Drawing::Color::Gainsboro;
            this->panel2->Controls->Add(this->btnExit);
            this->panel2->Controls->Add(this->btnRefresh);
            this->panel2->Controls->Add(this->btnSearchStudent);
            this->panel2->Controls->Add(this->txtEnrollment);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Location = System::Drawing::Point(7, 8);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(252, 392);
            this->panel2->TabIndex = 2;
            // 
            // btnExit
            // 
            this->btnExit->BackColor = System::Drawing::Color::LightGray;
            this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExit->Location = System::Drawing::Point(123, 272);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(98, 29);
            this->btnExit->TabIndex = 6;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = false;
            this->btnExit->Click += gcnew System::EventHandler(this, &ReturnBookForm::btnExit_Click);
            // 
            // btnRefresh
            // 
            this->btnRefresh->BackColor = System::Drawing::Color::LightGray;
            this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRefresh->Location = System::Drawing::Point(20, 272);
            this->btnRefresh->Name = L"btnRefresh";
            this->btnRefresh->Size = System::Drawing::Size(98, 29);
            this->btnRefresh->TabIndex = 5;
            this->btnRefresh->Text = L"Refresh ";
            this->btnRefresh->UseVisualStyleBackColor = false;
            this->btnRefresh->Click += gcnew System::EventHandler(this, &ReturnBookForm::btnRefresh_Click);
            // 
            // btnSearchStudent
            // 
            this->btnSearchStudent->BackColor = System::Drawing::Color::LightGray;
            this->btnSearchStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnSearchStudent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSearchStudent->Location = System::Drawing::Point(41, 207);
            this->btnSearchStudent->Name = L"btnSearchStudent";
            this->btnSearchStudent->Size = System::Drawing::Size(162, 42);
            this->btnSearchStudent->TabIndex = 4;
            this->btnSearchStudent->Text = L"Search Student";
            this->btnSearchStudent->UseVisualStyleBackColor = false;
            this->btnSearchStudent->Click += gcnew System::EventHandler(this, &ReturnBookForm::btnSearchStudent_Click);
            // 
            // txtEnrollment
            // 
            this->txtEnrollment->Location = System::Drawing::Point(20, 179);
            this->txtEnrollment->Name = L"txtEnrollment";
            this->txtEnrollment->Size = System::Drawing::Size(201, 20);
            this->txtEnrollment->TabIndex = 3;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(37, 146);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(166, 21);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Enter Enrollment No";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(70, 44);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(104, 94);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // dataGridView1
            // 
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(265, 8);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(616, 392);
            this->dataGridView1->TabIndex = 3;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReturnBookForm::dataGridView1_CellContentClick);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::LightBlue;
            this->panel1->Controls->Add(this->dateTimePicker1);
            this->panel1->Controls->Add(this->btnCancel);
            this->panel1->Controls->Add(this->btnReturn);
            this->panel1->Controls->Add(this->txtBookIssueDate);
            this->panel1->Controls->Add(this->txtBookName);
            this->panel1->Controls->Add(this->lblBookReturnDate);
            this->panel1->Controls->Add(this->lblBookIssueDate);
            this->panel1->Controls->Add(this->lblBookName);
            this->panel1->Location = System::Drawing::Point(265, 405);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(615, 144);
            this->panel1->TabIndex = 4;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(233, 80);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(219, 20);
            this->dateTimePicker1->TabIndex = 8;
            this->dateTimePicker1->MinDate = DateTime::Today; // Restrict past dates
            // 
            // btnCancel
            // 
            this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnCancel->BackColor = System::Drawing::Color::Orange;
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCancel->Location = System::Drawing::Point(470, 83);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(92, 29);
            this->btnCancel->TabIndex = 7;
            this->btnCancel->Text = L"Cancel";
            this->btnCancel->UseVisualStyleBackColor = false;
            this->btnCancel->Click += gcnew System::EventHandler(this, &ReturnBookForm::btnCancel_Click);
            // 
            // btnReturn
            // 
            this->btnReturn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnReturn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnReturn->Location = System::Drawing::Point(470, 48);
            this->btnReturn->Name = L"btnReturn";
            this->btnReturn->Size = System::Drawing::Size(92, 29);
            this->btnReturn->TabIndex = 6;
            this->btnReturn->Text = L"Return";
            this->btnReturn->UseVisualStyleBackColor = true;
            this->btnReturn->Click += gcnew System::EventHandler(this, &ReturnBookForm::btnReturn_Click);
            // 
            // txtBookIssueDate
            // 
            this->txtBookIssueDate->Location = System::Drawing::Point(233, 48);
            this->txtBookIssueDate->Name = L"txtBookIssueDate";
            this->txtBookIssueDate->Size = System::Drawing::Size(219, 20);
            this->txtBookIssueDate->TabIndex = 4;
            // 
            // txtBookName
            // 
            this->txtBookName->Location = System::Drawing::Point(233, 19);
            this->txtBookName->Name = L"txtBookName";
            this->txtBookName->Size = System::Drawing::Size(219, 20);
            this->txtBookName->TabIndex = 3;
            // 
            // lblBookReturnDate
            // 
            this->lblBookReturnDate->AutoSize = true;
            this->lblBookReturnDate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblBookReturnDate->Location = System::Drawing::Point(109, 83);
            this->lblBookReturnDate->Name = L"lblBookReturnDate";
            this->lblBookReturnDate->Size = System::Drawing::Size(106, 15);
            this->lblBookReturnDate->TabIndex = 2;
            this->lblBookReturnDate->Text = L"Book Return Date";
            // 
            // lblBookIssueDate
            // 
            this->lblBookIssueDate->AutoSize = true;
            this->lblBookIssueDate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblBookIssueDate->Location = System::Drawing::Point(109, 50);
            this->lblBookIssueDate->Name = L"lblBookIssueDate";
            this->lblBookIssueDate->Size = System::Drawing::Size(96, 15);
            this->lblBookIssueDate->TabIndex = 1;
            this->lblBookIssueDate->Text = L"Book Issue Date";
            // 
            // lblBookName
            // 
            this->lblBookName->AutoSize = true;
            this->lblBookName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblBookName->Location = System::Drawing::Point(109, 22);
            this->lblBookName->Name = L"lblBookName";
            this->lblBookName->Size = System::Drawing::Size(70, 15);
            this->lblBookName->TabIndex = 0;
            this->lblBookName->Text = L"Book Name";
            // 
            // ReturnBookForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::DarkSalmon;
            this->ClientSize = System::Drawing::Size(893, 554);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel2);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"ReturnBookForm";
            this->Text = L"ReturnBookForm";
            this->Load += gcnew System::EventHandler(this, &ReturnBookForm::ReturnBookForm_Load);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void ReturnBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close(); // Close the current form
    }

    private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
        // Clear all relevant input fields
        this->txtEnrollment->Clear();
        this->txtBookName->Clear();
        this->txtBookIssueDate->Clear();
        this->dateTimePicker1->Value = DateTime::Now;
        this->dataGridView1->DataSource = nullptr; // Clear grid if needed
    }

    private: System::Void btnSearchStudent_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrWhiteSpace(txtEnrollment->Text)) {
            MessageBox::Show("Please enter Enrollment Number.");
            return;
        }

        SqlConnection^ con = LibrarySystem::DBConnection::GetConnection();
        try {
            con->Open();

            String^ query =
                "SELECT ID, BookName, IssueDate FROM IssueBooks WHERE EnrollmentNo = @enrollment AND ReturnDate IS NULL";

            SqlCommand^ cmd = gcnew SqlCommand(query, con);
            cmd->Parameters->AddWithValue("@enrollment", txtEnrollment->Text);

            SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
            DataTable^ dt = gcnew DataTable();
            da->Fill(dt);
            dataGridView1->DataSource = dt;

            if (dt->Rows->Count == 0)
                MessageBox::Show("No issued books found for this Enrollment Number.");
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message);
        }
        finally {
            LibrarySystem::DBConnection::CloseConnection();
        }
    }

    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        if (e->RowIndex >= 0) {
            DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
            txtBookName->Text = row->Cells["BookName"]->Value->ToString();
            txtBookIssueDate->Text = row->Cells["IssueDate"]->Value->ToString();
        }
    }

    private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e) {
        if (dataGridView1->SelectedRows->Count == 0) {
            MessageBox::Show("Please select a book to return.");
            return;
        }

        DateTime returnDate = dateTimePicker1->Value;
        if (returnDate.Date < DateTime::Today) {
            MessageBox::Show("Return date cannot be in the past. Please select a valid date.");
            return;
        }

        SqlConnection^ con = LibrarySystem::DBConnection::GetConnection();
        try {
            con->Open();

            // Get data from selected row
            int selectedID = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["ID"]->Value);
            String^ bookName = dataGridView1->SelectedRows[0]->Cells["BookName"]->Value->ToString();
            DateTime issueDate = Convert::ToDateTime(dataGridView1->SelectedRows[0]->Cells["IssueDate"]->Value);
            String^ enrollmentNo = txtEnrollment->Text;

            // 1. Update IssueBooks Table
            String^ updateQuery = "UPDATE IssueBooks SET ReturnDate = @ReturnDate WHERE ID = @id";
            SqlCommand^ updateCmd = gcnew SqlCommand(updateQuery, con);
            updateCmd->Parameters->AddWithValue("@ReturnDate", returnDate);
            updateCmd->Parameters->AddWithValue("@id", selectedID);
            updateCmd->ExecuteNonQuery();

            // 2. Insert into ReturnBooks Table
            String^ insertQuery = "INSERT INTO ReturnBooks (EnrollmentNo, BookName, IssueDate, ReturnDate) " +
                "VALUES (@EnrollmentNo, @BookName, @IssueDate, @ReturnDate)";
            SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, con);
            insertCmd->Parameters->AddWithValue("@EnrollmentNo", enrollmentNo);
            insertCmd->Parameters->AddWithValue("@BookName", bookName);
            insertCmd->Parameters->AddWithValue("@IssueDate", issueDate);
            insertCmd->Parameters->AddWithValue("@ReturnDate", returnDate);
            insertCmd->ExecuteNonQuery();

            MessageBox::Show("Book returned and saved successfully.");

            // Clear UI
            dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
            txtBookName->Clear();
            txtBookIssueDate->Clear();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message);
        }
        finally {
            LibrarySystem::DBConnection::CloseConnection();
        }
    }

    private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
        // Clear everything
        txtEnrollment->Clear();
        txtBookName->Clear();
        txtBookIssueDate->Clear();
        dateTimePicker1->Value = DateTime::Now;
        dataGridView1->DataSource = nullptr;
        txtEnrollment->Focus();
    }
    };
}