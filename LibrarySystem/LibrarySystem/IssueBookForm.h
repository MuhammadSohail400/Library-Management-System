#pragma once
#include "DBConnection.h"
namespace LibrarySystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for IssueBookForm
    /// </summary>
    public ref class IssueBookForm : public System::Windows::Forms::Form
    {
    public:
        IssueBookForm(void)
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
        ~IssueBookForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ lblIsuueBooks;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ btnRefresh;
    private: System::Windows::Forms::Button^ btnSearchStudent;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ lblIsuueDate;
    private: System::Windows::Forms::Label^ lblBookName;
    private: System::Windows::Forms::Label^ lblEmail;
    private: System::Windows::Forms::Label^ lblStudentContact;
    private: System::Windows::Forms::Label^ lblStudentSemester;
    private: System::Windows::Forms::Label^ lblDepartment;
    private: System::Windows::Forms::Label^ lblStudentName;
    private: System::Windows::Forms::Button^ btnIssueBook;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::TextBox^ txtStudentContact;
    private: System::Windows::Forms::TextBox^ txtStudentSemester;
    private: System::Windows::Forms::TextBox^ txtDepartment;
    private: System::Windows::Forms::TextBox^ txtStudentName;
    private: System::Windows::Forms::ComboBox^ cmbBookName;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::TextBox^ txtEnrollmentNo;
    private: System::Windows::Forms::Label^ lblEnrollmnt;
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IssueBookForm::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lblIsuueBooks = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnRefresh = (gcnew System::Windows::Forms::Button());
            this->btnSearchStudent = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->txtEnrollmentNo = (gcnew System::Windows::Forms::TextBox());
            this->lblEnrollmnt = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->cmbBookName = (gcnew System::Windows::Forms::ComboBox());
            this->btnIssueBook = (gcnew System::Windows::Forms::Button());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtStudentContact = (gcnew System::Windows::Forms::TextBox());
            this->txtStudentSemester = (gcnew System::Windows::Forms::TextBox());
            this->txtDepartment = (gcnew System::Windows::Forms::TextBox());
            this->txtStudentName = (gcnew System::Windows::Forms::TextBox());
            this->lblIsuueDate = (gcnew System::Windows::Forms::Label());
            this->lblBookName = (gcnew System::Windows::Forms::Label());
            this->lblEmail = (gcnew System::Windows::Forms::Label());
            this->lblStudentContact = (gcnew System::Windows::Forms::Label());
            this->lblStudentSemester = (gcnew System::Windows::Forms::Label());
            this->lblDepartment = (gcnew System::Windows::Forms::Label());
            this->lblStudentName = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel1->BackColor = System::Drawing::Color::White;
            this->panel1->Controls->Add(this->lblIsuueBooks);
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Location = System::Drawing::Point(12, 12);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(799, 94);
            this->panel1->TabIndex = 0;
            // 
            // lblIsuueBooks
            // 
            this->lblIsuueBooks->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lblIsuueBooks->AutoSize = true;
            this->lblIsuueBooks->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblIsuueBooks->Location = System::Drawing::Point(363, 30);
            this->lblIsuueBooks->Name = L"lblIsuueBooks";
            this->lblIsuueBooks->Size = System::Drawing::Size(169, 47);
            this->lblIsuueBooks->TabIndex = 1;
            this->lblIsuueBooks->Text = L"Issue Books";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(258, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(143, 94);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel2->BackColor = System::Drawing::Color::DarkGray;
            this->panel2->Controls->Add(this->btnExit);
            this->panel2->Controls->Add(this->btnRefresh);
            this->panel2->Controls->Add(this->btnSearchStudent);
            this->panel2->Controls->Add(this->textBox1);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Location = System::Drawing::Point(12, 112);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(252, 392);
            this->panel2->TabIndex = 1;
            // 
            // btnExit
            // 
            this->btnExit->BackColor = System::Drawing::Color::DarkGray;
            this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExit->Location = System::Drawing::Point(123, 272);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(98, 29);
            this->btnExit->TabIndex = 6;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = false;
            this->btnExit->Click += gcnew System::EventHandler(this, &IssueBookForm::btnExit_Click);
            // 
            // btnRefresh
            // 
            this->btnRefresh->BackColor = System::Drawing::Color::DarkGray;
            this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRefresh->Location = System::Drawing::Point(20, 272);
            this->btnRefresh->Name = L"btnRefresh";
            this->btnRefresh->Size = System::Drawing::Size(98, 29);
            this->btnRefresh->TabIndex = 5;
            this->btnRefresh->Text = L"Refresh ";
            this->btnRefresh->UseVisualStyleBackColor = false;
            this->btnRefresh->Click += gcnew System::EventHandler(this, &IssueBookForm::btnRefresh_Click);
            // 
            // btnSearchStudent
            // 
            this->btnSearchStudent->BackColor = System::Drawing::Color::DarkGray;
            this->btnSearchStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnSearchStudent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSearchStudent->Location = System::Drawing::Point(41, 207);
            this->btnSearchStudent->Name = L"btnSearchStudent";
            this->btnSearchStudent->Size = System::Drawing::Size(162, 42);
            this->btnSearchStudent->TabIndex = 4;
            this->btnSearchStudent->Text = L"Search Student";
            this->btnSearchStudent->UseVisualStyleBackColor = false;
            this->btnSearchStudent->Click += gcnew System::EventHandler(this, &IssueBookForm::btnSearchStudent_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(20, 179);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(201, 20);
            this->textBox1->TabIndex = 3;
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
            // panel3
            // 
            this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel3->BackColor = System::Drawing::Color::LightBlue;
            this->panel3->Controls->Add(this->txtEnrollmentNo);
            this->panel3->Controls->Add(this->lblEnrollmnt);
            this->panel3->Controls->Add(this->dateTimePicker1);
            this->panel3->Controls->Add(this->cmbBookName);
            this->panel3->Controls->Add(this->btnIssueBook);
            this->panel3->Controls->Add(this->txtEmail);
            this->panel3->Controls->Add(this->txtStudentContact);
            this->panel3->Controls->Add(this->txtStudentSemester);
            this->panel3->Controls->Add(this->txtDepartment);
            this->panel3->Controls->Add(this->txtStudentName);
            this->panel3->Controls->Add(this->lblIsuueDate);
            this->panel3->Controls->Add(this->lblBookName);
            this->panel3->Controls->Add(this->lblEmail);
            this->panel3->Controls->Add(this->lblStudentContact);
            this->panel3->Controls->Add(this->lblStudentSemester);
            this->panel3->Controls->Add(this->lblDepartment);
            this->panel3->Controls->Add(this->lblStudentName);
            this->panel3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel3->Location = System::Drawing::Point(270, 112);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(541, 392);
            this->panel3->TabIndex = 2;
            // 
            // txtEnrollmentNo
            // 
            this->txtEnrollmentNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtEnrollmentNo->Location = System::Drawing::Point(183, 76);
            this->txtEnrollmentNo->Name = L"txtEnrollmentNo";
            this->txtEnrollmentNo->Size = System::Drawing::Size(308, 26);
            this->txtEnrollmentNo->TabIndex = 15;
            // 
            // lblEnrollmnt
            // 
            this->lblEnrollmnt->AutoSize = true;
            this->lblEnrollmnt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblEnrollmnt->Location = System::Drawing::Point(35, 78);
            this->lblEnrollmnt->Name = L"lblEnrollmnt";
            this->lblEnrollmnt->Size = System::Drawing::Size(97, 19);
            this->lblEnrollmnt->TabIndex = 14;
            this->lblEnrollmnt->Text = L"Enrollment No";
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dateTimePicker1->Location = System::Drawing::Point(183, 300);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(308, 26);
            this->dateTimePicker1->TabIndex = 13;
            this->dateTimePicker1->MinDate = System::DateTime::Today; // Restrict to current date and beyond
            this->dateTimePicker1->Value = System::DateTime::Today;   // Default to current date
            // 
            // cmbBookName
            // 
            this->cmbBookName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cmbBookName->FormattingEnabled = true;
            this->cmbBookName->Location = System::Drawing::Point(183, 262);
            this->cmbBookName->Name = L"cmbBookName";
            this->cmbBookName->Size = System::Drawing::Size(308, 27);
            this->cmbBookName->TabIndex = 12;
            // 
            // btnIssueBook
            // 
            this->btnIssueBook->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnIssueBook->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnIssueBook->Location = System::Drawing::Point(393, 337);
            this->btnIssueBook->Name = L"btnIssueBook";
            this->btnIssueBook->Size = System::Drawing::Size(98, 29);
            this->btnIssueBook->TabIndex = 7;
            this->btnIssueBook->Text = L"Issue Book";
            this->btnIssueBook->UseVisualStyleBackColor = true;
            this->btnIssueBook->Click += gcnew System::EventHandler(this, &IssueBookForm::btnIssueBook_Click);
            // 
            // txtEmail
            // 
            this->txtEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtEmail->Location = System::Drawing::Point(183, 226);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(308, 26);
            this->txtEmail->TabIndex = 11;
            // 
            // txtStudentContact
            // 
            this->txtStudentContact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtStudentContact->Location = System::Drawing::Point(183, 191);
            this->txtStudentContact->Name = L"txtStudentContact";
            this->txtStudentContact->Size = System::Drawing::Size(308, 26);
            this->txtStudentContact->TabIndex = 10;
            // 
            // txtStudentSemester
            // 
            this->txtStudentSemester->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtStudentSemester->Location = System::Drawing::Point(183, 152);
            this->txtStudentSemester->Name = L"txtStudentSemester";
            this->txtStudentSemester->Size = System::Drawing::Size(308, 26);
            this->txtStudentSemester->TabIndex = 9;
            // 
            // txtDepartment
            // 
            this->txtDepartment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtDepartment->Location = System::Drawing::Point(183, 114);
            this->txtDepartment->Name = L"txtDepartment";
            this->txtDepartment->Size = System::Drawing::Size(308, 26);
            this->txtDepartment->TabIndex = 8;
            // 
            // txtStudentName
            // 
            this->txtStudentName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtStudentName->Location = System::Drawing::Point(183, 42);
            this->txtStudentName->Name = L"txtStudentName";
            this->txtStudentName->Size = System::Drawing::Size(308, 26);
            this->txtStudentName->TabIndex = 7;
            // 
            // lblIsuueDate
            // 
            this->lblIsuueDate->AutoSize = true;
            this->lblIsuueDate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblIsuueDate->Location = System::Drawing::Point(35, 300);
            this->lblIsuueDate->Name = L"lblIsuueDate";
            this->lblIsuueDate->Size = System::Drawing::Size(111, 19);
            this->lblIsuueDate->TabIndex = 6;
            this->lblIsuueDate->Text = L"Book Issue Date";
            // 
            // lblBookName
            // 
            this->lblBookName->AutoSize = true;
            this->lblBookName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblBookName->Location = System::Drawing::Point(35, 262);
            this->lblBookName->Name = L"lblBookName";
            this->lblBookName->Size = System::Drawing::Size(84, 19);
            this->lblBookName->TabIndex = 5;
            this->lblBookName->Text = L"Book Name";
            // 
            // lblEmail
            // 
            this->lblEmail->AutoSize = true;
            this->lblEmail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblEmail->Location = System::Drawing::Point(35, 225);
            this->lblEmail->Name = L"lblEmail";
            this->lblEmail->Size = System::Drawing::Size(92, 19);
            this->lblEmail->TabIndex = 4;
            this->lblEmail->Text = L"Student Email";
            // 
            // lblStudentContact
            // 
            this->lblStudentContact->AutoSize = true;
            this->lblStudentContact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentContact->Location = System::Drawing::Point(35, 191);
            this->lblStudentContact->Name = L"lblStudentContact";
            this->lblStudentContact->Size = System::Drawing::Size(107, 19);
            this->lblStudentContact->TabIndex = 3;
            this->lblStudentContact->Text = L"Student Contact";
            // 
            // lblStudentSemester
            // 
            this->lblStudentSemester->AutoSize = true;
            this->lblStudentSemester->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentSemester->Location = System::Drawing::Point(35, 152);
            this->lblStudentSemester->Name = L"lblStudentSemester";
            this->lblStudentSemester->Size = System::Drawing::Size(115, 19);
            this->lblStudentSemester->TabIndex = 2;
            this->lblStudentSemester->Text = L"Student Semester";
            // 
            // lblDepartment
            // 
            this->lblDepartment->AutoSize = true;
            this->lblDepartment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDepartment->Location = System::Drawing::Point(35, 114);
            this->lblDepartment->Name = L"lblDepartment";
            this->lblDepartment->Size = System::Drawing::Size(80, 19);
            this->lblDepartment->TabIndex = 1;
            this->lblDepartment->Text = L"Department";
            // 
            // lblStudentName
            // 
            this->lblStudentName->AutoSize = true;
            this->lblStudentName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentName->Location = System::Drawing::Point(35, 44);
            this->lblStudentName->Name = L"lblStudentName";
            this->lblStudentName->Size = System::Drawing::Size(96, 19);
            this->lblStudentName->TabIndex = 0;
            this->lblStudentName->Text = L"Student Name";
            // 
            // IssueBookForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::LightSalmon;
            this->ClientSize = System::Drawing::Size(823, 516);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"IssueBookForm";
            this->Text = L"IssueBookForm";
            this->Activated += gcnew System::EventHandler(this, &IssueBookForm::OnActivated);
            this->Load += gcnew System::EventHandler(this, &IssueBookForm::IssueBookForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);
        }
#pragma endregion
    private: System::Void OnActivated(System::Object^ sender, System::EventArgs^ e) {
        LoadBooks(); // Refresh the book list each time the form is activated
    }
    private: Void LoadBooks() {
        cmbBookName->Items->Clear(); // Clear existing items

        SqlConnection^ conn = DBConnection::GetConnection();

        try {
            if (conn->State == ConnectionState::Open)
                conn->Close(); // Close first if already open

            conn->Open();

            String^ query = "SELECT Title FROM Books";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            SqlDataReader^ reader = cmd->ExecuteReader();

            while (reader->Read()) {
                cmbBookName->Items->Add(reader["Title"]->ToString());
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error loading books: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            if (conn->State == ConnectionState::Open)
                conn->Close();
        }
    }

    private: System::Void IssueBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
        LoadBooks(); // Populate the combo box with books
    }
    private: System::Void btnIssueBook_Click(System::Object^ sender, System::EventArgs^ e) {
        // --- Input Validations ---
        if (String::IsNullOrWhiteSpace(txtStudentName->Text) ||
            String::IsNullOrWhiteSpace(txtEnrollmentNo->Text) ||
            String::IsNullOrWhiteSpace(txtDepartment->Text) ||
            String::IsNullOrWhiteSpace(txtStudentSemester->Text) ||
            String::IsNullOrWhiteSpace(txtStudentContact->Text) ||
            String::IsNullOrWhiteSpace(txtEmail->Text) ||
            cmbBookName->SelectedIndex == -1)
        {
            MessageBox::Show("Please fill in all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        // --- Try DB Operation ---
        try {
            SqlConnection^ conn = DBConnection::GetConnection();
            conn->Open();

            String^ query = "INSERT INTO IssueBooks (StudentName, EnrollmentNo, Department, Semester, Contact, Email, BookName, IssueDate) " +
                "VALUES (@StudentName, @EnrollmentNo, @Department, @Semester, @Contact, @Email, @BookName, @IssueDate)";

            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@StudentName", txtStudentName->Text);
            cmd->Parameters->AddWithValue("@EnrollmentNo", txtEnrollmentNo->Text);
            cmd->Parameters->AddWithValue("@Department", txtDepartment->Text);
            cmd->Parameters->AddWithValue("@Semester", txtStudentSemester->Text);
            cmd->Parameters->AddWithValue("@Contact", txtStudentContact->Text);
            cmd->Parameters->AddWithValue("@Email", txtEmail->Text);
            cmd->Parameters->AddWithValue("@BookName", cmbBookName->SelectedItem->ToString());
            cmd->Parameters->AddWithValue("@IssueDate", dateTimePicker1->Value);

            int result = cmd->ExecuteNonQuery();

            if (result > 0) {
                MessageBox::Show("Book issued successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                MessageBox::Show("Failed to issue book.", "Failure", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }

            conn->Close();
        }
        catch (SqlException^ ex) {
            MessageBox::Show("SQL Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Unexpected Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    private: System::Void btnSearchStudent_Click(System::Object^ sender, System::EventArgs^ e) {
        // Validate Enrollment No is entered
        if (String::IsNullOrWhiteSpace(textBox1->Text)) {
            MessageBox::Show("Please enter Enrollment No.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        try {
            SqlConnection^ conn = DBConnection::GetConnection();
            conn->Open();

            String^ query = "SELECT StudentName, EnrollmentNo, Department, Semester, Contact, Email FROM Students WHERE EnrollmentNo = @EnrollmentNo";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@EnrollmentNo", textBox1->Text);

            SqlDataReader^ reader = cmd->ExecuteReader();

            if (reader->Read()) {
                // Fill textboxes
                txtStudentName->Text = reader["StudentName"]->ToString();
                txtEnrollmentNo->Text = reader["EnrollmentNo"]->ToString();
                txtDepartment->Text = reader["Department"]->ToString();
                txtStudentSemester->Text = reader["Semester"]->ToString();
                txtStudentContact->Text = reader["Contact"]->ToString();
                txtEmail->Text = reader["Email"]->ToString();
            }
            else {
                MessageBox::Show("Student not found.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }

            reader->Close();
            conn->Close();
        }
        catch (SqlException^ ex) {
            MessageBox::Show("SQL Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Unexpected Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
        // Clear all textboxes
        textBox1->Clear();
        txtStudentName->Clear();
        txtEnrollmentNo->Clear();
        txtDepartment->Clear();
        txtStudentSemester->Clear();
        txtStudentContact->Clear();
        txtEmail->Clear();

        // Reset DateTimePicker to current date
        dateTimePicker1->Value = System::DateTime::Today;

        // Optionally set focus back to Enrollment No
        textBox1->Focus();
    }

    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
        if (MessageBox::Show("Are you sure you want to exit?", "Exit Confirmation",
            MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            this->Close(); // Closes the current form
        }
    }
    };
}