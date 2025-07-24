#pragma once
#include "MainForm.h"
#include "DBConnection.h"

namespace LibrarySystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        LoginForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~LoginForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::TextBox^ txtUserName;
        System::Windows::Forms::TextBox^ txtPassword;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::PictureBox^ pictureBox3;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::Button^ btnLogin;
        System::Windows::Forms::Button^ btnRegister;
        System::Windows::Forms::LinkLabel^ lnkForgotPassword;
        System::Windows::Forms::CheckBox^ chkShowPassword;
        System::Windows::Forms::Label^ lblPasswordStrength;
        System::Windows::Forms::NotifyIcon^ notifyIcon1;
        System::Windows::Forms::NotifyIcon^ notifyIcon2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: Form^ registerForm; // Member variable for the registration form
           System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->components = (gcnew System::ComponentModel::Container());
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->txtUserName = (gcnew System::Windows::Forms::TextBox());
               this->txtPassword = (gcnew System::Windows::Forms::TextBox());
               this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
               this->panel2 = (gcnew System::Windows::Forms::Panel());
               this->panel3 = (gcnew System::Windows::Forms::Panel());
               this->btnLogin = (gcnew System::Windows::Forms::Button());
               this->btnRegister = (gcnew System::Windows::Forms::Button());
               this->lnkForgotPassword = (gcnew System::Windows::Forms::LinkLabel());
               this->chkShowPassword = (gcnew System::Windows::Forms::CheckBox());
               this->lblPasswordStrength = (gcnew System::Windows::Forms::Label());
               this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
               this->notifyIcon2 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
               this->SuspendLayout();
               // 
               // pictureBox1
               // 
               this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
               this->pictureBox1->Location = System::Drawing::Point(145, 65);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(100, 100);
               this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox1->TabIndex = 0;
               this->pictureBox1->TabStop = false;
               // 
               // panel1
               // 
               this->panel1->BackColor = System::Drawing::Color::Red;
               this->panel1->Location = System::Drawing::Point(99, 166);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(200, 5);
               this->panel1->TabIndex = 1;
               // 
               // txtUserName
               // 
               this->txtUserName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(30)));
               this->txtUserName->BorderStyle = System::Windows::Forms::BorderStyle::None;
               this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->txtUserName->ForeColor = System::Drawing::Color::Gray;
               this->txtUserName->Location = System::Drawing::Point(108, 231);
               this->txtUserName->Name = L"txtUserName";
               this->txtUserName->Size = System::Drawing::Size(221, 19);
               this->txtUserName->TabIndex = 2;
               this->txtUserName->Text = L"Enter Username";
               this->txtUserName->Enter += gcnew System::EventHandler(this, &LoginForm::Username_Enter);
               this->txtUserName->Leave += gcnew System::EventHandler(this, &LoginForm::Username_Leave);
               // 
               // txtPassword
               // 
               this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(30)));
               this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
               this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->txtPassword->ForeColor = System::Drawing::Color::Gray;
               this->txtPassword->Location = System::Drawing::Point(108, 287);
               this->txtPassword->Name = L"txtPassword";
               this->txtPassword->Size = System::Drawing::Size(221, 19);
               this->txtPassword->TabIndex = 3;
               this->txtPassword->Text = L"Enter Password";
               this->txtPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtPassword_TextChanged);
               this->txtPassword->Enter += gcnew System::EventHandler(this, &LoginForm::Password_Enter);
               this->txtPassword->Leave += gcnew System::EventHandler(this, &LoginForm::Password_Leave);
               // 
               // pictureBox2
               // 
               this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
               this->pictureBox2->Location = System::Drawing::Point(63, 231);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(33, 28);
               this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox2->TabIndex = 4;
               this->pictureBox2->TabStop = false;
               // 
               // pictureBox3
               // 
               this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
               this->pictureBox3->Location = System::Drawing::Point(63, 287);
               this->pictureBox3->Name = L"pictureBox3";
               this->pictureBox3->Size = System::Drawing::Size(33, 28);
               this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox3->TabIndex = 5;
               this->pictureBox3->TabStop = false;
               // 
               // panel2
               // 
               this->panel2->BackColor = System::Drawing::Color::White;
               this->panel2->Location = System::Drawing::Point(108, 265);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(220, 5);
               this->panel2->TabIndex = 6;
               // 
               // panel3
               // 
               this->panel3->BackColor = System::Drawing::Color::White;
               this->panel3->Location = System::Drawing::Point(109, 321);
               this->panel3->Name = L"panel3";
               this->panel3->Size = System::Drawing::Size(220, 5);
               this->panel3->TabIndex = 7;
               // 
               // btnLogin
               // 
               this->btnLogin->BackColor = System::Drawing::Color::DodgerBlue;
               this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnLogin->Location = System::Drawing::Point(108, 358);
               this->btnLogin->Name = L"btnLogin";
               this->btnLogin->Size = System::Drawing::Size(100, 34);
               this->btnLogin->TabIndex = 8;
               this->btnLogin->Text = L"Login";
               this->btnLogin->UseVisualStyleBackColor = false;
               this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
               // 
               // btnRegister
               // 
               this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->btnRegister->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnRegister->Location = System::Drawing::Point(229, 358);
               this->btnRegister->Name = L"btnRegister";
               this->btnRegister->Size = System::Drawing::Size(100, 34);
               this->btnRegister->TabIndex = 9;
               this->btnRegister->Text = L"Register";
               this->btnRegister->UseVisualStyleBackColor = false;
               this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
               // 
               // lnkForgotPassword
               // 
               this->lnkForgotPassword->ActiveLinkColor = System::Drawing::Color::LightBlue;
               this->lnkForgotPassword->AutoSize = true;
               this->lnkForgotPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->lnkForgotPassword->LinkColor = System::Drawing::Color::White;
               this->lnkForgotPassword->Location = System::Drawing::Point(108, 398);
               this->lnkForgotPassword->Name = L"lnkForgotPassword";
               this->lnkForgotPassword->Size = System::Drawing::Size(116, 16);
               this->lnkForgotPassword->TabIndex = 10;
               this->lnkForgotPassword->TabStop = true;
               this->lnkForgotPassword->Text = L"Forgot Password\?";
               this->lnkForgotPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::lnkForgotPassword_LinkClicked);
               // 
               // chkShowPassword
               // 
               this->chkShowPassword->AutoSize = true;
               this->chkShowPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->chkShowPassword->ForeColor = System::Drawing::Color::White;
               this->chkShowPassword->Location = System::Drawing::Point(108, 328);
               this->chkShowPassword->Name = L"chkShowPassword";
               this->chkShowPassword->Size = System::Drawing::Size(122, 20);
               this->chkShowPassword->TabIndex = 11;
               this->chkShowPassword->Text = L"Show Password";
               this->chkShowPassword->UseVisualStyleBackColor = true;
               this->chkShowPassword->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::chkShowPassword_CheckedChanged);
               // 
               // lblPasswordStrength
               // 
               this->lblPasswordStrength->AutoSize = true;
               this->lblPasswordStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->lblPasswordStrength->ForeColor = System::Drawing::Color::White;
               this->lblPasswordStrength->Location = System::Drawing::Point(108, 305);
               this->lblPasswordStrength->Name = L"lblPasswordStrength";
               this->lblPasswordStrength->Size = System::Drawing::Size(96, 13);
               this->lblPasswordStrength->TabIndex = 12;
               this->lblPasswordStrength->Text = L"Password Strength";
               // 
               // notifyIcon1
               // 
               this->notifyIcon1->Text = L"notifyIcon1";
               this->notifyIcon1->Visible = true;
               // 
               // notifyIcon2
               // 
               this->notifyIcon2->Text = L"notifyIcon2";
               this->notifyIcon2->Visible = true;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(196, 5);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(35, 13);
               this->label1->TabIndex = 13;
               this->label1->Text = L"label1";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label2->Location = System::Drawing::Point(70, 18);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(279, 24);
               this->label2->TabIndex = 14;
               this->label2->Text = L"Library Management System ";
               // 
               // LoginForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(30)));
               this->ClientSize = System::Drawing::Size(397, 549);
               this->Controls->Add(this->lblPasswordStrength);
               this->Controls->Add(this->chkShowPassword);
               this->Controls->Add(this->lnkForgotPassword);
               this->Controls->Add(this->btnRegister);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->btnLogin);
               this->Controls->Add(this->panel3);
               this->Controls->Add(this->panel2);
               this->Controls->Add(this->pictureBox3);
               this->Controls->Add(this->pictureBox2);
               this->Controls->Add(this->txtPassword);
               this->Controls->Add(this->txtUserName);
               this->Controls->Add(this->panel1);
               this->Controls->Add(this->pictureBox1);
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->Name = L"LoginForm";
               this->Text = L"LoginForm";
               this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        System::Void Username_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtUserName->Text == L"Enter Username") {
                txtUserName->Text = L"";
                txtUserName->ForeColor = Color::White;
            }
        }

        System::Void Username_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtUserName->Text->Trim() == L"") {
                txtUserName->Text = L"Enter Username";
                txtUserName->ForeColor = Color::Gray;
            }
        }

        System::Void Password_Enter(System::Object^ sender, System::EventArgs^ e) {
            if (txtPassword->Text == L"Enter Password") {
                txtPassword->Text = L"";
                txtPassword->ForeColor = Color::White;
                txtPassword->UseSystemPasswordChar = !chkShowPassword->Checked;
            }
        }

        System::Void Password_Leave(System::Object^ sender, System::EventArgs^ e) {
            if (txtPassword->Text->Trim() == L"") {
                txtPassword->Text = L"Enter Password";
                txtPassword->ForeColor = Color::Gray;
                txtPassword->UseSystemPasswordChar = false;
            }
        }

        System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
            if (txtPassword->Text != L"Enter Password") {
                txtPassword->UseSystemPasswordChar = !chkShowPassword->Checked;
                txtPassword->ForeColor = Color::White;
                UpdatePasswordStrength();
            }
        }

        System::Void chkShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
            if (txtPassword->Text != L"Enter Password") {
                txtPassword->UseSystemPasswordChar = !chkShowPassword->Checked;
            }
        }

        System::Void UpdatePasswordStrength() {
            String^ password = txtPassword->Text;
            int strength = 0;

            if (password->Length >= 8) strength++;
            if (password->Length >= 12) strength++;
            if (System::Text::RegularExpressions::Regex::IsMatch(password, L"[0-9]")) strength++;
            if (System::Text::RegularExpressions::Regex::IsMatch(password, L"[A-Z]")) strength++;
            if (System::Text::RegularExpressions::Regex::IsMatch(password, L"[!@#$%^&*()]")) strength++;

            switch (strength) {
            case 0:
            case 1:
                lblPasswordStrength->Text = L"Password Strength: Weak";
                lblPasswordStrength->ForeColor = Color::Red;
                break;
            case 2:
            case 3:
                lblPasswordStrength->Text = L"Password Strength: Medium";
                lblPasswordStrength->ForeColor = Color::Yellow;
                break;
            case 4:
            case 5:
                lblPasswordStrength->Text = L"Password Strength: Strong";
                lblPasswordStrength->ForeColor = Color::Green;
                break;
            }
        }

        System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e)
        {
            String^ username = txtUserName->Text->Trim();
            String^ password = txtPassword->Text->Trim();

            if (username == L"Enter Username" || password == L"Enter Password" || username == L"" || password == L"") {
                MessageBox::Show(L"Please enter both username and password.", L"Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                txtUserName->BackColor = Color::FromArgb(255, 204, 204);
                txtPassword->BackColor = Color::FromArgb(255, 204, 204);
                return;
            }
            else {
                txtUserName->BackColor = Color::FromArgb(0, 0, 30);
                txtPassword->BackColor = Color::FromArgb(0, 0, 30);
            }

            SqlConnection^ conn = LibrarySystem::DBConnection::GetConnection();

            try {
                conn->Open();

                String^ query = L"SELECT Role FROM Users WHERE Username=@username AND Password=@password";
                SqlCommand^ cmd = gcnew SqlCommand(query, conn);
                cmd->Parameters->AddWithValue(L"@username", username);
                cmd->Parameters->AddWithValue(L"@password", password);

                SqlDataReader^ reader = cmd->ExecuteReader();

                if (reader->Read()) {
                    String^ role = reader[L"Role"]->ToString();
                    notifyIcon1->ShowBalloonTip(3000, L"Login Successful", L"Welcome, " + username + L"!", ToolTipIcon::Info);
                    this->Hide();
                    MainForm^ mainForm = gcnew MainForm();
                    mainForm->ShowDialog();
                    this->Close();
                }
                else {
                    MessageBox::Show(L"Invalid username or password.", L"Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                }

                reader->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Error during login: " + ex->Message, L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            finally {
                conn->Close();
            }
        }

        System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
            registerForm = gcnew Form();
            registerForm->Text = L"Register New User";
            registerForm->Size = System::Drawing::Size(300, 300);
            registerForm->StartPosition = FormStartPosition::CenterParent;
           
            registerForm->MaximizeBox = false;

            Label^ lblUsername = gcnew Label();
            lblUsername->Text = L"Username:";
            lblUsername->Location = Point(20, 20);
            lblUsername->Size = System::Drawing::Size(80, 20);

            TextBox^ txtRegUsername = gcnew TextBox();
            txtRegUsername->Location = Point(100, 20);
            txtRegUsername->Size = System::Drawing::Size(150, 20);

            Label^ lblPassword = gcnew Label();
            lblPassword->Text = L"Password:";
            lblPassword->Location = Point(20, 50);
            lblPassword->Size = System::Drawing::Size(80, 20);

            TextBox^ txtRegPassword = gcnew TextBox();
            txtRegPassword->Location = Point(100, 50);
            txtRegPassword->Size = System::Drawing::Size(150, 20);
            txtRegPassword->UseSystemPasswordChar = true;

            Label^ lblConfirmPassword = gcnew Label();
            lblConfirmPassword->Text = L"Confirm Password:";
            lblConfirmPassword->Location = Point(20, 80);
            lblConfirmPassword->Size = System::Drawing::Size(100, 20);

            TextBox^ txtConfirmPassword = gcnew TextBox();
            txtConfirmPassword->Location = Point(100, 80);
            txtConfirmPassword->Size = System::Drawing::Size(150, 20);
            txtConfirmPassword->UseSystemPasswordChar = true;

            Label^ lblRole = gcnew Label();
            lblRole->Text = L"Role:";
            lblRole->Location = Point(20, 110);
            lblRole->Size = System::Drawing::Size(80, 20);

            ComboBox^ cbRole = gcnew ComboBox();
            cbRole->Location = Point(100, 110);
            cbRole->Size = System::Drawing::Size(150, 20);
            cbRole->Items->AddRange(gcnew array<String^> { L"User", L"Admin" });
            cbRole->SelectedIndex = 0;

            Button^ btnSubmit = gcnew Button();
            btnSubmit->Text = L"Submit";
            btnSubmit->Location = Point(100, 150);
            btnSubmit->Size = System::Drawing::Size(100, 30);
            btnSubmit->Click += gcnew EventHandler(this, &LoginForm::RegisterSubmit_Click);

            registerForm->Controls->AddRange(gcnew array<Control^> { lblUsername, txtRegUsername, lblPassword, txtRegPassword,
                lblConfirmPassword, txtConfirmPassword, lblRole, cbRole, btnSubmit });

            registerForm->ShowDialog();
        }

        System::Void RegisterSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
            Button^ btn = safe_cast<Button^>(sender);
            Form^ regForm = btn->FindForm();

            TextBox^ txtRegUsername = safe_cast<TextBox^>(regForm->Controls[1]);
            TextBox^ txtRegPassword = safe_cast<TextBox^>(regForm->Controls[3]);
            TextBox^ txtConfirmPassword = safe_cast<TextBox^>(regForm->Controls[5]);
            ComboBox^ cbRole = safe_cast<ComboBox^>(regForm->Controls[7]);

            String^ username = txtRegUsername->Text->Trim();
            String^ password = txtRegPassword->Text->Trim();
            String^ confirmPassword = txtConfirmPassword->Text->Trim();
            String^ role = cbRole->SelectedItem->ToString();

            if (username == L"" || password == L"" || confirmPassword == L"") {
                MessageBox::Show(L"All fields are required.", L"Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            if (password != confirmPassword) {
                MessageBox::Show(L"Passwords do not match.", L"Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            SqlConnection^ conn = LibrarySystem::DBConnection::GetConnection();
            try {
                conn->Open();
                String^ query = L"INSERT INTO Users (Username, Password, Role) VALUES (@username, @password, @role)";
                SqlCommand^ cmd = gcnew SqlCommand(query, conn);
                cmd->Parameters->AddWithValue(L"@username", username);
                cmd->Parameters->AddWithValue(L"@password", password);
                cmd->Parameters->AddWithValue(L"@role", role);

                cmd->ExecuteNonQuery();
                MessageBox::Show(L"Registration successful!", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                regForm->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Error during registration: " + ex->Message, L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            finally {
                conn->Close();
            }
        }

        System::Void lnkForgotPassword_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
            MessageBox::Show(L"Please contact the system administrator to reset your password.", L"Forgot Password",
                MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

        System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
            txtPassword->UseSystemPasswordChar = false;
            lblPasswordStrength->Text = L"Password Strength: None";
        }
    };
}