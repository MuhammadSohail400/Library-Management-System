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
	/// Summary for ViewStudentsForm
	/// </summary>
	public ref class ViewStudentsForm : public System::Windows::Forms::Form
	{
	public:
		ViewStudentsForm(void)
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
		~ViewStudentsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ lblViewStudent;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnUpdate;



	private: System::Windows::Forms::TextBox^ txtEnrollmentNo;
	private: System::Windows::Forms::DataGridView^ dataGridView1;














	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnLoadStudents;

	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnRefresh;


	private: System::Windows::Forms::Button^ btnExit;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewStudentsForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblViewStudent = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtEnrollmentNo = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnLoadStudents = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->lblViewStudent);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(881, 100);
			this->panel1->TabIndex = 0;
			// 
			// lblViewStudent
			// 
			this->lblViewStudent->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblViewStudent->AutoSize = true;
			this->lblViewStudent->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblViewStudent->Location = System::Drawing::Point(356, 34);
			this->lblViewStudent->Name = L"lblViewStudent";
			this->lblViewStudent->Size = System::Drawing::Size(180, 34);
			this->lblViewStudent->TabIndex = 1;
			this->lblViewStudent->Text = L"View Student";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(264, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// txtEnrollmentNo
			// 
			this->txtEnrollmentNo->Location = System::Drawing::Point(74, 123);
			this->txtEnrollmentNo->Name = L"txtEnrollmentNo";
			this->txtEnrollmentNo->Size = System::Drawing::Size(228, 20);
			this->txtEnrollmentNo->TabIndex = 2;
			this->txtEnrollmentNo->Text = L"Enter Enrollment No";
			// 
			// btnUpdate
			// 
			this->btnUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnUpdate->BackColor = System::Drawing::Color::MistyRose;
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(496, 451);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 3;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ViewStudentsForm::btnUpdate_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 158);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(748, 275);
			this->dataGridView1->TabIndex = 4;
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::MistyRose;
			this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(308, 122);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ViewStudentsForm::btnSearch_Click);
			// 
			// btnLoadStudents
			// 
			this->btnLoadStudents->BackColor = System::Drawing::Color::MistyRose;
			this->btnLoadStudents->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLoadStudents->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnLoadStudents->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadStudents->Location = System::Drawing::Point(389, 122);
			this->btnLoadStudents->Name = L"btnLoadStudents";
			this->btnLoadStudents->Size = System::Drawing::Size(159, 23);
			this->btnLoadStudents->TabIndex = 7;
			this->btnLoadStudents->Text = L"Load All Students";
			this->btnLoadStudents->UseVisualStyleBackColor = false;
			this->btnLoadStudents->Click += gcnew System::EventHandler(this, &ViewStudentsForm::btnLoadStudents_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDelete->BackColor = System::Drawing::Color::MistyRose;
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(593, 451);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 8;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ViewStudentsForm::btnDelete_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnRefresh->BackColor = System::Drawing::Color::MistyRose;
			this->btnRefresh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(683, 451);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(75, 23);
			this->btnRefresh->TabIndex = 9;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = false;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::MistyRose;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(554, 122);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 10;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &ViewStudentsForm::btnExit_Click);
			// 
			// ViewStudentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSalmon;
			this->ClientSize = System::Drawing::Size(777, 558);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnLoadStudents);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->txtEnrollmentNo);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ViewStudentsForm";
			this->Text = L"ViewStudentsForm";
			this->Load += gcnew System::EventHandler(this, &ViewStudentsForm::ViewStudentsForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma endregion

private: System::Void LoadStudentsData()
{
	try
	{
		SqlConnection^ conn = DBConnection::GetConnection();
		conn->Open();

		String^ query = "SELECT * FROM Students";
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error loading students: " + ex->Message);
	}
}

private: System::Void btnLoadStudents_Click(System::Object^ sender, System::EventArgs^ e)
{
	LoadStudentsData();
}

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		SqlConnection^ conn = DBConnection::GetConnection();
		conn->Open();

		String^ enrollNo = txtEnrollmentNo->Text;
		String^ query = "SELECT * FROM Students WHERE EnrollmentNo = @enrollNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@enrollNo", enrollNo);

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Search error: " + ex->Message);
	}
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		if (dataGridView1->SelectedRows->Count > 0)
		{
			SqlConnection^ conn = DBConnection::GetConnection();
			conn->Open();

			String^ enrollNo = dataGridView1->SelectedRows[0]->Cells["EnrollmentNo"]->Value->ToString();
			String^ query = "DELETE FROM Students WHERE EnrollmentNo = @enrollNo";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@enrollNo", enrollNo);
			cmd->ExecuteNonQuery();

			conn->Close();

			MessageBox::Show("Student deleted successfully.");
			LoadStudentsData(); // Refresh grid
		}
		else
		{
			MessageBox::Show("Please select a student row to delete.");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Delete error: " + ex->Message);
	}
}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
	
}

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

private: System::Void btnUpdate_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (dataGridView1->SelectedRows->Count > 0)
		{
			DataGridViewRow^ row = dataGridView1->SelectedRows[0];

			String^ name = row->Cells["StudentName"]->Value->ToString();
			String^ enrollNo = row->Cells["EnrollmentNo"]->Value->ToString();
			String^ department= row->Cells["Department"]->Value->ToString();
			String^ semester = row->Cells["Semester"]->Value->ToString();
			String^ contact = row->Cells["Contact"]->Value->ToString();
			String^ email = row->Cells["Email"]->Value->ToString();

			SqlConnection^ conn = DBConnection::GetConnection();
			conn->Open();

			String^ query = "UPDATE Students SET StudentName=@name, EnrollmentNo=@enrollNo, Semester=@semester,Department=@department, Contact=@contact, Email=@email WHERE EnrollmentNo=@enrollNo";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@name", name);
			cmd->Parameters->AddWithValue("@enrollNo", enrollNo);
			cmd->Parameters->AddWithValue("@department", department);
			cmd->Parameters->AddWithValue("@semester", semester);
			cmd->Parameters->AddWithValue("@contact", contact);
			cmd->Parameters->AddWithValue("@email", email);

			cmd->ExecuteNonQuery();
			conn->Close();

			MessageBox::Show("Student updated successfully.");
			LoadStudentsData(); // Refresh grid
		}
		else
		{
			MessageBox::Show("Please select a student row to update.");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Update error: " + ex->Message);
	}
}
private: System::Void ViewStudentsForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
