#pragma once
#include "BookService.h"
#include "Book.h"
#include "DBConnection.h"

namespace LibraryManagementSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace LibrarySystem;
    using namespace System::Collections::Generic;

    public ref class ViewBooksForm : public System::Windows::Forms::Form
    {
    public:
        ViewBooksForm(void)
        {
            InitializeComponent();
            List<Book^>^ books = BookService::GetAllBooks(); // یہ static call ہے



        }

    protected:
        ~ViewBooksForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::TextBox^ txtSearch;


    private: System::Windows::Forms::Button^ btnSearch;
    private: System::Windows::Forms::Button^ btnLoadAll;

    private: System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Button^ btnRefresh;
    private: System::Windows::Forms::Button^ btnDelete;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label1;








    private: System::Windows::Forms::Button^ btnUpdate;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewBooksForm::typeid));
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               this->txtSearch = (gcnew System::Windows::Forms::TextBox());
               this->btnSearch = (gcnew System::Windows::Forms::Button());
               this->btnLoadAll = (gcnew System::Windows::Forms::Button());
               this->btnRefresh = (gcnew System::Windows::Forms::Button());
               this->btnDelete = (gcnew System::Windows::Forms::Button());
               this->btnUpdate = (gcnew System::Windows::Forms::Button());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->label1 = (gcnew System::Windows::Forms::Label());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->panel1->SuspendLayout();
               this->SuspendLayout();
               // 
               // dataGridView1
               // 
               this->dataGridView1->AllowUserToAddRows = false;
               this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Location = System::Drawing::Point(31, 152);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->Size = System::Drawing::Size(560, 300);
               this->dataGridView1->TabIndex = 0;
               // 
               // txtSearch
               // 
               this->txtSearch->Location = System::Drawing::Point(31, 112);
               this->txtSearch->Name = L"txtSearch";
               this->txtSearch->Size = System::Drawing::Size(200, 20);
               this->txtSearch->TabIndex = 1;
               this->txtSearch->Text = L"Enter Book Title";
               // 
               // btnSearch
               // 
               this->btnSearch->BackColor = System::Drawing::Color::PeachPuff;
               this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnSearch->Location = System::Drawing::Point(239, 110);
               this->btnSearch->Name = L"btnSearch";
               this->btnSearch->Size = System::Drawing::Size(75, 23);
               this->btnSearch->TabIndex = 2;
               this->btnSearch->Text = L"Search";
               this->btnSearch->UseVisualStyleBackColor = false;
               this->btnSearch->Click += gcnew System::EventHandler(this, &ViewBooksForm::btnSearch_Click);
               // 
               // btnLoadAll
               // 
               this->btnLoadAll->BackColor = System::Drawing::Color::PeachPuff;
               this->btnLoadAll->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnLoadAll->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnLoadAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnLoadAll->Location = System::Drawing::Point(329, 110);
               this->btnLoadAll->Name = L"btnLoadAll";
               this->btnLoadAll->Size = System::Drawing::Size(100, 23);
               this->btnLoadAll->TabIndex = 3;
               this->btnLoadAll->Text = L"Load All Books";
               this->btnLoadAll->UseVisualStyleBackColor = false;
               this->btnLoadAll->Click += gcnew System::EventHandler(this, &ViewBooksForm::btnLoadAll_Click);
               // 
               // btnRefresh
               // 
               this->btnRefresh->BackColor = System::Drawing::Color::PeachPuff;
               this->btnRefresh->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnRefresh->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->btnRefresh->Location = System::Drawing::Point(255, 474);
               this->btnRefresh->Name = L"btnRefresh";
               this->btnRefresh->Size = System::Drawing::Size(117, 27);
               this->btnRefresh->TabIndex = 4;
               this->btnRefresh->Text = L"Refresh";
               this->btnRefresh->UseVisualStyleBackColor = false;
               this->btnRefresh->Click += gcnew System::EventHandler(this, &ViewBooksForm::btnRefresh_Click);
               // 
               // btnDelete
               // 
               this->btnDelete->BackColor = System::Drawing::Color::PeachPuff;
               this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnDelete->Location = System::Drawing::Point(39, 472);
               this->btnDelete->Name = L"btnDelete";
               this->btnDelete->Size = System::Drawing::Size(100, 30);
               this->btnDelete->TabIndex = 5;
               this->btnDelete->Text = L"Delete";
               this->btnDelete->UseVisualStyleBackColor = false;
               this->btnDelete->Click += gcnew System::EventHandler(this, &ViewBooksForm::btnDelete_Click);
               // 
               // btnUpdate
               // 
               this->btnUpdate->BackColor = System::Drawing::Color::PeachPuff;
               this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
               this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->btnUpdate->Location = System::Drawing::Point(149, 472);
               this->btnUpdate->Name = L"btnUpdate";
               this->btnUpdate->Size = System::Drawing::Size(100, 30);
               this->btnUpdate->TabIndex = 6;
               this->btnUpdate->Text = L"Update";
               this->btnUpdate->UseVisualStyleBackColor = false;
               this->btnUpdate->Click += gcnew System::EventHandler(this, &ViewBooksForm::btnUpdate_Click);
               // 
               // panel1
               // 
               this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->panel1->BackColor = System::Drawing::Color::Wheat;
               this->panel1->Controls->Add(this->label1);
               this->panel1->Location = System::Drawing::Point(-132, 1);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(812, 103);
               this->panel1->TabIndex = 7;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(357, 37);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(177, 33);
               this->label1->TabIndex = 0;
               this->label1->Text = L"View Books";
               // 
               // ViewBooksForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::LightSalmon;
               this->ClientSize = System::Drawing::Size(677, 526);
               this->Controls->Add(this->panel1);
               this->Controls->Add(this->btnUpdate);
               this->Controls->Add(this->btnDelete);
               this->Controls->Add(this->btnRefresh);
               this->Controls->Add(this->btnLoadAll);
               this->Controls->Add(this->btnSearch);
               this->Controls->Add(this->txtSearch);
               this->Controls->Add(this->dataGridView1);
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->Name = L"ViewBooksForm";
               this->Text = L"ViewBooksForm";
               this->Load += gcnew System::EventHandler(this, &ViewBooksForm::ViewBooksForm_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->panel1->ResumeLayout(false);
               this->panel1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
           
    private: void LoadAllBooks()
    {
        List<Book^>^ books = BookService::GetAllBooks();

        // Clear previous rows
        dataGridView1->Rows->Clear();
        dataGridView1->Columns->Clear();

        // Set columns (only once)
        dataGridView1->Columns->Add("BookId", "Book ID");
        dataGridView1->Columns->Add("Title", "Title");
        dataGridView1->Columns->Add("Author", "Author");
        dataGridView1->Columns->Add("ISBN", "ISBN");
        dataGridView1->Columns->Add("Status", "Status");

        // Add rows
        for each (Book ^ book in books)
        {
            dataGridView1->Rows->Add(book->BookId, book->Title, book->Author, book->ISBN, book->Status);
        }
    }
           void LoadBooksData() {
               SqlConnection^ con = gcnew SqlConnection("your_connection_string");
               SqlDataAdapter^ da = gcnew SqlDataAdapter("SELECT * FROM Books", con);
               DataTable^ dt = gcnew DataTable();
               da->Fill(dt);
               dataGridView1->DataSource = dt;
           }


           // Event handlers will go below here (in next code step)

    private: System::Void ViewBooksForm_Load(System::Object^ sender, System::EventArgs^ e)
    {
        LoadAllBooks();
    }

   private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e)
   {
       String^ keyword = txtSearch->Text->Trim();

       List<Book^>^ books = BookService::SearchBooksByTitle(keyword);

       // Clear and populate DataGridView
       dataGridView1->Rows->Clear();

       for each (Book ^ book in books)
       {
           dataGridView1->Rows->Add(book->BookId, book->Title, book->Author, book->ISBN, book->Status);
       }
   }

private: System::Void btnLoadAll_Click(System::Object^ sender, System::EventArgs^ e)
{
    LoadAllBooks();
}

private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
    // Clear the DataGridView
    dataGridView1->DataSource = nullptr;
    dataGridView1->Rows->Clear();
}


private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dataGridView1->SelectedRows->Count == 1)
    {
        int bookId = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value);

        if (MessageBox::Show("Are you sure you want to delete this book?", "Confirm Delete", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
        {
            if (BookService::DeleteBook(bookId))
            {
                MessageBox::Show("Book deleted successfully.");
                LoadAllBooks(); // reload grid
            }
            else
            {
                MessageBox::Show("Failed to delete the book.");
            }
        }
    }
    else
    {
        MessageBox::Show("Please select one row to delete.");
    }
}

       private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
           if (dataGridView1->CurrentRow != nullptr) {
               try {
                   // Get values from the selected/edited row
                   DataGridViewRow^ row = dataGridView1->CurrentRow;

                   int bookId = Convert::ToInt32(row->Cells["BookId"]->Value);
                   String^ title = row->Cells["Title"]->Value->ToString();
                   String^ author = row->Cells["Author"]->Value->ToString();
                   String^ isbn = row->Cells["ISBN"]->Value->ToString();
                   String^ status = row->Cells["Status"]->Value->ToString();

                   // Connection String
                   
                   SqlConnection^ conn = DBConnection::GetConnection();
                   conn->Open();

                   // SQL Update Query
                   String^ query = "UPDATE Books SET Title=@Title, Author=@Author, ISBN=@ISBN, Status=@Status WHERE BookId=@BookId";

                   SqlCommand^ cmd = gcnew SqlCommand(query, conn);
                   cmd->Parameters->AddWithValue("@Title", title);
                   cmd->Parameters->AddWithValue("@Author", author);
                   cmd->Parameters->AddWithValue("@ISBN", isbn);
                   cmd->Parameters->AddWithValue("@Status", status);
                   cmd->Parameters->AddWithValue("@BookId", bookId);
                   
                   int result = cmd->ExecuteNonQuery();
                   conn->Close();

                   if (result > 0) {
                       MessageBox::Show("Record updated successfully.");
                       LoadAllBooks(); // Refresh table
                   }
                   else {
                       MessageBox::Show("Update failed.");
                   }
               }
               catch (Exception^ ex) {
                   MessageBox::Show("Error: " + ex->Message);
               }
           }
           else {
               MessageBox::Show("No row selected.");
           }
       }


};
}
