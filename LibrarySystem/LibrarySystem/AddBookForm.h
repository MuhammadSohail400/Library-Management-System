#pragma once
#include "Book.h"
#include "BookService.h"
#include "DBConnection.h"
namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddBookForm
	/// </summary>
	public ref class AddBookForm : public System::Windows::Forms::Form
	{
	public:
		AddBookForm(void)
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
		~AddBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	protected:
	private: System::Windows::Forms::Label^ lblAuthor;
	private: System::Windows::Forms::Label^ lblISBN;
	private: System::Windows::Forms::Label^ lblStatus;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::TextBox^ txtISBN;
	private: System::Windows::Forms::ComboBox^ cmbStatus;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;





























	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddBookForm::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->lblISBN = (gcnew System::Windows::Forms::Label());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtISBN = (gcnew System::Windows::Forms::TextBox());
			this->cmbStatus = (gcnew System::Windows::Forms::ComboBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(256, 171);
			this->lblTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(38, 16);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Title";
			this->lblTitle->Click += gcnew System::EventHandler(this, &AddBookForm::label1_Click);
			// 
			// lblAuthor
			// 
			this->lblAuthor->AutoSize = true;
			this->lblAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAuthor->Location = System::Drawing::Point(256, 211);
			this->lblAuthor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(51, 16);
			this->lblAuthor->TabIndex = 1;
			this->lblAuthor->Text = L"Author";
			// 
			// lblISBN
			// 
			this->lblISBN->AutoSize = true;
			this->lblISBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblISBN->Location = System::Drawing::Point(256, 251);
			this->lblISBN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblISBN->Name = L"lblISBN";
			this->lblISBN->Size = System::Drawing::Size(42, 16);
			this->lblISBN->TabIndex = 2;
			this->lblISBN->Text = L"ISBN";
			this->lblISBN->Click += gcnew System::EventHandler(this, &AddBookForm::label3_Click);
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatus->Location = System::Drawing::Point(256, 290);
			this->lblStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(50, 16);
			this->lblStatus->TabIndex = 3;
			this->lblStatus->Text = L"Status";
			// 
			// txtTitle
			// 
			this->txtTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTitle->Location = System::Drawing::Point(346, 171);
			this->txtTitle->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(250, 25);
			this->txtTitle->TabIndex = 4;
			this->txtTitle->TextChanged += gcnew System::EventHandler(this, &AddBookForm::textBox1_TextChanged);
			// 
			// txtAuthor
			// 
			this->txtAuthor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAuthor->Location = System::Drawing::Point(346, 211);
			this->txtAuthor->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(250, 25);
			this->txtAuthor->TabIndex = 5;
			// 
			// txtISBN
			// 
			this->txtISBN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtISBN->Location = System::Drawing::Point(346, 251);
			this->txtISBN->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtISBN->Name = L"txtISBN";
			this->txtISBN->Size = System::Drawing::Size(250, 25);
			this->txtISBN->TabIndex = 6;
			// 
			// cmbStatus
			// 
			this->cmbStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbStatus->FormattingEnabled = true;
			this->cmbStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Issued" });
			this->cmbStatus->Location = System::Drawing::Point(346, 290);
			this->cmbStatus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmbStatus->Name = L"cmbStatus";
			this->cmbStatus->Size = System::Drawing::Size(250, 25);
			this->cmbStatus->TabIndex = 7;
			this->cmbStatus->SelectedIndexChanged += gcnew System::EventHandler(this, &AddBookForm::cmbStatus_SelectedIndexChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(521, 341);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(102, 35);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Add Book";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddBookForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(230, 328);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::Wheat;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(711, 97);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddBookForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(341, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Book";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(227, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(94, 98);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// AddBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSalmon;
			this->ClientSize = System::Drawing::Size(710, 416);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->cmbStatus);
			this->Controls->Add(this->txtISBN);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->lblStatus);
			this->Controls->Add(this->lblISBN);
			this->Controls->Add(this->lblAuthor);
			this->Controls->Add(this->lblTitle);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"AddBookForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddBookForm";
			this->Load += gcnew System::EventHandler(this, &AddBookForm::AddBookForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get values from form
	String^ title = txtTitle->Text;
	String^ author = txtAuthor->Text;
	String^ isbn = txtISBN->Text;
	String^ status = cmbStatus->SelectedItem != nullptr ? cmbStatus->SelectedItem->ToString() : "";

	// Check if fields are empty
	if (String::IsNullOrWhiteSpace(title) || String::IsNullOrWhiteSpace(author) || String::IsNullOrWhiteSpace(isbn) || String::IsNullOrWhiteSpace(status)) {
		MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Connection string (adjust Data Source, Initial Catalog, and credentials)
	String^ connStr =
		"Data Source=DESKTOP-80KQTM4\\SQLEXPRESS;"
		"Initial Catalog=LibraryDB;"
		"Integrated Security=True;";



	// SQL Insert command
	String^ query = "INSERT INTO Books (Title, Author, ISBN, Status) VALUES (@Title, @Author, @ISBN, @Status)";

	// Try to open connection and execute
	try {
		SqlConnection^ conn = gcnew SqlConnection(connStr);

		SqlCommand^ cmd = gcnew SqlCommand(query, conn);

		cmd->Parameters->AddWithValue("@Title", title);
		cmd->Parameters->AddWithValue("@Author", author);
		cmd->Parameters->AddWithValue("@ISBN", isbn);
		cmd->Parameters->AddWithValue("@Status", status);

		conn->Open();
		int rowsAffected = cmd->ExecuteNonQuery();
		conn->Close();

		if (rowsAffected > 0) {
			MessageBox::Show("Book added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// Clear fields
			txtTitle->Text = "";
			txtAuthor->Text = "";
			txtISBN->Text = "";
			cmbStatus->SelectedIndex = -1;
		}
		else {
			MessageBox::Show("Failed to add book.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void cmbStatus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddBookForm_Load(System::Object^ sender, System::EventArgs^ e) {

	// Place this in your form’s Load event
	try {
		auto c = LibrarySystem::DBConnection::GetConnection();
		c->Open();
		MessageBox::Show("Connection OK!");
		c->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Connect failed: " + ex->Message);
	}
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
