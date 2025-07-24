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
    using namespace System::Text::RegularExpressions;

    public ref class AddStudentForm : public System::Windows::Forms::Form
    {
    public:
        AddStudentForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~AddStudentForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::Label^ lblStudentName;
        System::Windows::Forms::Label^ lblEnrollmentNumber;
        System::Windows::Forms::Label^ lblStudentSemester;
        System::Windows::Forms::Label^ lblStudentContact;
        System::Windows::Forms::Label^ lblStudentEmail;
        System::Windows::Forms::Label^ lblStudentDepartment;
        System::Windows::Forms::TextBox^ txtStudentName;
        System::Windows::Forms::TextBox^ txtEnrollmentNo;
        System::Windows::Forms::TextBox^ txtDepartment;
        System::Windows::Forms::TextBox^ txtSemester;
        System::Windows::Forms::TextBox^ txtContact;
        System::Windows::Forms::TextBox^ txtEmail;
        System::Windows::Forms::Button^ btnRefresh;
        System::Windows::Forms::Button^ btnExit;
        System::Windows::Forms::Button^ btnSaveInfo;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudentForm::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->lblStudentName = (gcnew System::Windows::Forms::Label());
            this->lblEnrollmentNumber = (gcnew System::Windows::Forms::Label());
            this->lblStudentSemester = (gcnew System::Windows::Forms::Label());
            this->lblStudentContact = (gcnew System::Windows::Forms::Label());
            this->lblStudentEmail = (gcnew System::Windows::Forms::Label());
            this->lblStudentDepartment = (gcnew System::Windows::Forms::Label());
            this->txtStudentName = (gcnew System::Windows::Forms::TextBox());
            this->txtEnrollmentNo = (gcnew System::Windows::Forms::TextBox());
            this->txtDepartment = (gcnew System::Windows::Forms::TextBox());
            this->txtSemester = (gcnew System::Windows::Forms::TextBox());
            this->txtContact = (gcnew System::Windows::Forms::TextBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->btnRefresh = (gcnew System::Windows::Forms::Button());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnSaveInfo = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 112);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(250, 331);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->pictureBox2);
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(750, 111);
            this->panel1->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(347, 26);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(211, 51);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Add Student";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(246, -1);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(135, 111);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            // 
            // lblStudentName
            // 
            this->lblStudentName->AutoSize = true;
            this->lblStudentName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentName->Location = System::Drawing::Point(284, 147);
            this->lblStudentName->Name = L"lblStudentName";
            this->lblStudentName->Size = System::Drawing::Size(104, 16);
            this->lblStudentName->TabIndex = 2;
            this->lblStudentName->Text = L"Student Name";
            // 
            // lblEnrollmentNumber
            // 
            this->lblEnrollmentNumber->AutoSize = true;
            this->lblEnrollmentNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblEnrollmentNumber->Location = System::Drawing::Point(284, 176);
            this->lblEnrollmentNumber->Name = L"lblEnrollmentNumber";
            this->lblEnrollmentNumber->Size = System::Drawing::Size(104, 16);
            this->lblEnrollmentNumber->TabIndex = 3;
            this->lblEnrollmentNumber->Text = L"Enrollment No";
            // 
            // lblStudentSemester
            // 
            this->lblStudentSemester->AutoSize = true;
            this->lblStudentSemester->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentSemester->Location = System::Drawing::Point(284, 238);
            this->lblStudentSemester->Name = L"lblStudentSemester";
            this->lblStudentSemester->Size = System::Drawing::Size(129, 16);
            this->lblStudentSemester->TabIndex = 4;
            this->lblStudentSemester->Text = L"Student Semester";
            // 
            // lblStudentContact
            // 
            this->lblStudentContact->AutoSize = true;
            this->lblStudentContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentContact->Location = System::Drawing::Point(284, 273);
            this->lblStudentContact->Name = L"lblStudentContact";
            this->lblStudentContact->Size = System::Drawing::Size(115, 16);
            this->lblStudentContact->TabIndex = 5;
            this->lblStudentContact->Text = L"Student Contact";
            // 
            // lblStudentEmail
            // 
            this->lblStudentEmail->AutoSize = true;
            this->lblStudentEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblStudentEmail->Location = System::Drawing::Point(284, 307);
            this->lblStudentEmail->Name = L"lblStudentEmail";
            this->lblStudentEmail->Size = System::Drawing::Size(102, 16);
            this->lblStudentEmail->TabIndex = 6;
            this->lblStudentEmail->Text = L"Student Email";
            // 
            // lblStudentDepartment
            // 
            this->lblStudentDepartment->AutoSize = true;
            this->lblStudentDepartment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblStudentDepartment->Location = System::Drawing::Point(284, 206);
            this->lblStudentDepartment->Name = L"lblStudentDepartment";
            this->lblStudentDepartment->Size = System::Drawing::Size(87, 16);
            this->lblStudentDepartment->TabIndex = 7;
            this->lblStudentDepartment->Text = L"Department";
            // 
            // txtStudentName
            // 
            this->txtStudentName->ForeColor = System::Drawing::Color::Gray;
            this->txtStudentName->Location = System::Drawing::Point(422, 147);
            this->txtStudentName->Name = L"txtStudentName";
            this->txtStudentName->Size = System::Drawing::Size(274, 20);
            this->txtStudentName->TabIndex = 8;
            this->txtStudentName->Text = L"Enter Student Name";
            this->txtStudentName->Enter += gcnew System::EventHandler(this, &AddStudentForm::txtStudentName_Enter);
            this->txtStudentName->Leave += gcnew System::EventHandler(this, &AddStudentForm::txtStudentName_Leave);
            // 
            // txtEnrollmentNo
            // 
            this->txtEnrollmentNo->ForeColor = System::Drawing::Color::Gray;
            this->txtEnrollmentNo->Location = System::Drawing::Point(422, 176);
            this->txtEnrollmentNo->Name = L"txtEnrollmentNo";
            this->txtEnrollmentNo->Size = System::Drawing::Size(274, 20);
            this->txtEnrollmentNo->TabIndex = 9;
            this->txtEnrollmentNo->Text = L"Enter Enrollment No";
            this->txtEnrollmentNo->Enter += gcnew System::EventHandler(this, &AddStudentForm::txtEnrollmentNo_Enter);
            this->txtEnrollmentNo->Leave += gcnew System::EventHandler(this, &AddStudentForm::txtEnrollmentNo_Leave);
            // 
            // txtDepartment
            // 
            this->txtDepartment->ForeColor = System::Drawing::Color::Gray;
            this->txtDepartment->Location = System::Drawing::Point(422, 205);
            this->txtDepartment->Name = L"txtDepartment";
            this->txtDepartment->Size = System::Drawing::Size(274, 20);
            this->txtDepartment->TabIndex = 10;
            this->txtDepartment->Text = L"Enter Department Name";
            this->txtDepartment->Enter += gcnew System::EventHandler(this, &AddStudentForm::txtDepartment_Enter);
            this->txtDepartment->Leave += gcnew System::EventHandler(this, &AddStudentForm::txtDepartment_Leave);
            // 
            // txtSemester
            // 
            this->txtSemester->ForeColor = System::Drawing::Color::Gray;
            this->txtSemester->Location = System::Drawing::Point(422, 238);
            this->txtSemester->Name = L"txtSemester";
            this->txtSemester->Size = System::Drawing::Size(274, 20);
            this->txtSemester->TabIndex = 11;
            this->txtSemester->Text = L"Enter Student Current Semester";
            this->txtSemester->Enter += gcnew System::EventHandler(this, &AddStudentForm::txtSemester_Enter);
            this->txtSemester->Leave += gcnew System::EventHandler(this, &AddStudentForm::txtSemester_Leave);
            // 
            // txtContact
            // 
            this->txtContact->ForeColor = System::Drawing::Color::Gray;
            this->txtContact->Location = System::Drawing::Point(422, 273);
            this->txtContact->Name = L"txtContact";
            this->txtContact->Size = System::Drawing::Size(274, 20);
            this->txtContact->TabIndex = 12;
            this->txtContact->Text = L"Enter Contact No";
            this->txtContact->Enter += gcnew System::EventHandler(this, &AddStudentForm::txtContact_Enter);
            this->txtContact->Leave += gcnew System::EventHandler(this, &AddStudentForm::txtContact_Leave);
            // 
            // txtEmail
            // 
            this->txtEmail->ForeColor = System::Drawing::Color::Gray;
            this->txtEmail->Location = System::Drawing::Point(422, 303);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(274, 20);
            this->txtEmail->TabIndex = 13;
            this->txtEmail->Text = L"Enter Email";
            this->txtEmail->Enter += gcnew System::EventHandler(this, &AddStudentForm::txtEmail_Enter);
            this->txtEmail->Leave += gcnew System::EventHandler(this, &AddStudentForm::txtEmail_Leave);
            // 
            // btnRefresh
            // 
            this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRefresh->Location = System::Drawing::Point(356, 354);
            this->btnRefresh->Name = L"btnRefresh";
            this->btnRefresh->Size = System::Drawing::Size(80, 30);
            this->btnRefresh->TabIndex = 14;
            this->btnRefresh->Text = L"Refresh";
            this->btnRefresh->UseVisualStyleBackColor = true;
            this->btnRefresh->Click += gcnew System::EventHandler(this, &AddStudentForm::btnRefresh_Click);
            // 
            // btnExit
            // 
            this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExit->Location = System::Drawing::Point(558, 354);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(80, 30);
            this->btnExit->TabIndex = 15;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = true;
            this->btnExit->Click += gcnew System::EventHandler(this, &AddStudentForm::btnExit_Click);
            // 
            // btnSaveInfo
            // 
            this->btnSaveInfo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->btnSaveInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSaveInfo->Location = System::Drawing::Point(455, 354);
            this->btnSaveInfo->Name = L"btnSaveInfo";
            this->btnSaveInfo->Size = System::Drawing::Size(83, 30);
            this->btnSaveInfo->TabIndex = 16;
            this->btnSaveInfo->Text = L"Save Info";
            this->btnSaveInfo->UseVisualStyleBackColor = true;
            this->btnSaveInfo->Click += gcnew System::EventHandler(this, &AddStudentForm::btnSaveInfo_Click);
            // 
            // AddStudentForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->ClientSize = System::Drawing::Size(751, 443);
            this->Controls->Add(this->btnSaveInfo);
            this->Controls->Add(this->btnExit);
            this->Controls->Add(this->btnRefresh);
            this->Controls->Add(this->txtEmail);
            this->Controls->Add(this->txtContact);
            this->Controls->Add(this->txtSemester);
            this->Controls->Add(this->txtDepartment);
            this->Controls->Add(this->txtEnrollmentNo);
            this->Controls->Add(this->txtStudentName);
            this->Controls->Add(this->lblStudentDepartment);
            this->Controls->Add(this->lblStudentEmail);
            this->Controls->Add(this->lblStudentContact);
            this->Controls->Add(this->lblStudentSemester);
            this->Controls->Add(this->lblEnrollmentNumber);
            this->Controls->Add(this->lblStudentName);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->pictureBox1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"AddStudentForm";
            this->Text = L"AddStudentForm";
            this->Load += gcnew System::EventHandler(this, &AddStudentForm::AddStudentForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void AddStudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void txtStudentName_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtStudentName->Text == L"Enter Student Name") {
                txtStudentName->Text = L"";
                txtStudentName->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void txtStudentName_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtStudentName->Text->Trim() == L"") {
                txtStudentName->Text = L"Enter Student Name";
                txtStudentName->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void txtEnrollmentNo_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtEnrollmentNo->Text == L"Enter Enrollment No") {
                txtEnrollmentNo->Text = L"";
                txtEnrollmentNo->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void txtEnrollmentNo_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtEnrollmentNo->Text->Trim() == L"") {
                txtEnrollmentNo->Text = L"Enter Enrollment No";
                txtEnrollmentNo->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void txtDepartment_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtDepartment->Text == L"Enter Department Name") {
                txtDepartment->Text = L"";
                txtDepartment->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void txtDepartment_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtDepartment->Text->Trim() == L"") {
                txtDepartment->Text = L"Enter Department Name";
                txtDepartment->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void txtSemester_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtSemester->Text == L"Enter Student Current Semester") {
                txtSemester->Text = L"";
                txtSemester->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void txtSemester_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtSemester->Text->Trim() == L"") {
                txtSemester->Text = L"Enter Student Current Semester";
                txtSemester->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void txtContact_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtContact->Text == L"Enter Contact No") {
                txtContact->Text = L"";
                txtContact->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void txtContact_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtContact->Text->Trim() == L"") {
                txtContact->Text = L"Enter Contact No";
                txtContact->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void txtEmail_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtEmail->Text == L"Enter Email") {
                txtEmail->Text = L"";
                txtEmail->ForeColor = System::Drawing::Color::Black;
            }
        }

        System::Void txtEmail_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtEmail->Text->Trim() == L"") {
                txtEmail->Text = L"Enter Email";
                txtEmail->ForeColor = System::Drawing::Color::Gray;
            }
        }

        System::Void btnSaveInfo_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ studentName = txtStudentName->Text->Trim();
            String^ enrollmentNo = txtEnrollmentNo->Text->Trim();
            String^ department = txtDepartment->Text->Trim();
            String^ semester = txtSemester->Text->Trim();
            String^ contact = txtContact->Text->Trim();
            String^ email = txtEmail->Text->Trim();

            // Check for placeholder text or empty fields
            if (studentName == L"Enter Student Name" || studentName == L"" ||
                enrollmentNo == L"Enter Enrollment No" || enrollmentNo == L"" ||
                department == L"Enter Department Name" || department == L"" ||
                semester == L"Enter Student Current Semester" || semester == L"" ||
                contact == L"Enter Contact No" || contact == L"" ||
                email == L"Enter Email" || email == L"") {
                MessageBox::Show(L"All fields are required.", L"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Validate email format
            String^ emailPattern = L"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";
            if (!Regex::IsMatch(email, emailPattern)) {
                MessageBox::Show(L"Please enter a valid email address (e.g., example@domain.com).", L"Invalid Email", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            SqlConnection^ con = LibrarySystem::DBConnection::GetConnection();
            String^ query = L"INSERT INTO Students (StudentName, EnrollmentNo, Department, Semester, Contact, Email) " +
                L"VALUES (@StudentName, @EnrollmentNo, @Department, @Semester, @Contact, @Email)";
            SqlCommand^ cmd = gcnew SqlCommand(query, con);

            cmd->Parameters->AddWithValue(L"@StudentName", studentName);
            cmd->Parameters->AddWithValue(L"@EnrollmentNo", enrollmentNo);
            cmd->Parameters->AddWithValue(L"@Department", department);
            cmd->Parameters->AddWithValue(L"@Semester", semester);
            cmd->Parameters->AddWithValue(L"@Contact", contact);
            cmd->Parameters->AddWithValue(L"@Email", email);

            try {
                con->Open();
                int result = cmd->ExecuteNonQuery();
                if (result > 0) {
                    MessageBox::Show(L"Student data saved successfully!", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                    btnRefresh_Click(nullptr, nullptr); // Clear form after successful save
                }
                else {
                    MessageBox::Show(L"Failed to save student data.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Error: " + ex->Message, L"Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            finally {
                con->Close();
            }
        }

        System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
            txtStudentName->Text = L"Enter Student Name";
            txtEnrollmentNo->Text = L"Enter Enrollment No";
            txtDepartment->Text = L"Enter Department Name";
            txtSemester->Text = L"Enter Student Current Semester";
            txtContact->Text = L"Enter Contact No";
            txtEmail->Text = L"Enter Email";
            txtStudentName->ForeColor = System::Drawing::Color::Gray;
            txtEnrollmentNo->ForeColor = System::Drawing::Color::Gray;
            txtDepartment->ForeColor = System::Drawing::Color::Gray;
            txtSemester->ForeColor = System::Drawing::Color::Gray;
            txtContact->ForeColor = System::Drawing::Color::Gray;
            txtEmail->ForeColor = System::Drawing::Color::Gray;
        }

        System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }
    };
}