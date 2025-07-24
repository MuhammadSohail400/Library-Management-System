#pragma once

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for CompleteBookForm
	/// </summary>
	public ref class CompleteBookForm : public System::Windows::Forms::Form
	{
	public:
		CompleteBookForm(void)
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
		~CompleteBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ink Free", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label1->Location = System::Drawing::Point(343, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Issue Books";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ink Free", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label2->Location = System::Drawing::Point(349, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Return Books";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(762, 190);
			this->dataGridView1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 293);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(762, 190);
			this->dataGridView2->TabIndex = 3;
			// 
			// CompleteBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(786, 495);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CompleteBookForm";
			this->Text = L"CompleteBookForm";
			this->Load += gcnew System::EventHandler(this, &CompleteBookForm::CompleteBookForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CompleteBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Define your connection string
		String^ connStr =
			"Data Source=DESKTOP-80KQTM4\\SQLEXPRESS;"
			"Initial Catalog=LibraryDB;"
			"Integrated Security=True;";

		try {
			// Create connection
			SqlConnection^ conn = gcnew SqlConnection(connStr);

			// -------- Load IssueBooks Table into dataGridView1 --------
			String^ query1 = "SELECT * FROM IssueBooks";
			SqlDataAdapter^ da1 = gcnew SqlDataAdapter(query1, conn);
			DataTable^ dt1 = gcnew DataTable();
			da1->Fill(dt1);
			dataGridView1->DataSource = dt1;

			// -------- Load ReturnBooks Table into dataGridView2 --------
			String^ query2 = "SELECT * FROM ReturnBooks";
			SqlDataAdapter^ da2 = gcnew SqlDataAdapter(query2, conn);
			DataTable^ dt2 = gcnew DataTable();
			da2->Fill(dt2);
			dataGridView2->DataSource = dt2;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	};
}
