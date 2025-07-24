#pragma once
#include "AddBookForm.h"
#include "ViewBooksForm.h"
#include "AddStudentForm.h"
#include "IssueBookForm.h"
#include "ReturnBookForm.h"
#include "ViewStudentsForm.h"
#include "CompleteBookForm.h"


namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LibraryManagementSystem;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^ booksToolStripMenuItem;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ addNewBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewBooksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addStudentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewStudeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ issueBooksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ returnBooksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ completeBooksDetailToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	protected:

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->booksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewBooksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addStudentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewStudeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issueBooksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnBooksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->completeBooksDetailToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// booksToolStripMenuItem
			// 
			this->booksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addNewBookToolStripMenuItem,
					this->viewBooksToolStripMenuItem
			});
			this->booksToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"booksToolStripMenuItem.Image")));
			this->booksToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->booksToolStripMenuItem->Name = L"booksToolStripMenuItem";
			this->booksToolStripMenuItem->Size = System::Drawing::Size(101, 54);
			this->booksToolStripMenuItem->Text = L"Books";
			this->booksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::booksToolStripMenuItem_Click);
			// 
			// addNewBookToolStripMenuItem
			// 
			this->addNewBookToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addNewBookToolStripMenuItem.Image")));
			this->addNewBookToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->addNewBookToolStripMenuItem->Name = L"addNewBookToolStripMenuItem";
			this->addNewBookToolStripMenuItem->Size = System::Drawing::Size(233, 102);
			this->addNewBookToolStripMenuItem->Text = L"Add New Book";
			this->addNewBookToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::addNewBookToolStripMenuItem_Click);
			// 
			// viewBooksToolStripMenuItem
			// 
			this->viewBooksToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewBooksToolStripMenuItem.Image")));
			this->viewBooksToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->viewBooksToolStripMenuItem->Name = L"viewBooksToolStripMenuItem";
			this->viewBooksToolStripMenuItem->Size = System::Drawing::Size(233, 102);
			this->viewBooksToolStripMenuItem->Text = L"View Books";
			this->viewBooksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::viewBooksToolStripMenuItem_Click);
			// 
			// studentsToolStripMenuItem
			// 
			this->studentsToolStripMenuItem->BackColor = System::Drawing::Color::OldLace;
			this->studentsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addStudentsToolStripMenuItem,
					this->viewStudeToolStripMenuItem
			});
			this->studentsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"studentsToolStripMenuItem.Image")));
			this->studentsToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->studentsToolStripMenuItem->Name = L"studentsToolStripMenuItem";
			this->studentsToolStripMenuItem->Size = System::Drawing::Size(115, 54);
			this->studentsToolStripMenuItem->Text = L"Students";
			this->studentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::studentsToolStripMenuItem_Click);
			// 
			// addStudentsToolStripMenuItem
			// 
			this->addStudentsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addStudentsToolStripMenuItem.Image")));
			this->addStudentsToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->addStudentsToolStripMenuItem->Name = L"addStudentsToolStripMenuItem";
			this->addStudentsToolStripMenuItem->Size = System::Drawing::Size(251, 106);
			this->addStudentsToolStripMenuItem->Text = L"Add Students";
			this->addStudentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::addStudentsToolStripMenuItem_Click);
			// 
			// viewStudeToolStripMenuItem
			// 
			this->viewStudeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewStudeToolStripMenuItem.Image")));
			this->viewStudeToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->viewStudeToolStripMenuItem->Name = L"viewStudeToolStripMenuItem";
			this->viewStudeToolStripMenuItem->Size = System::Drawing::Size(251, 106);
			this->viewStudeToolStripMenuItem->Text = L"View Student Info";
			this->viewStudeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::viewStudeToolStripMenuItem_Click);
			// 
			// issueBooksToolStripMenuItem
			// 
			this->issueBooksToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"issueBooksToolStripMenuItem.Image")));
			this->issueBooksToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->issueBooksToolStripMenuItem->Name = L"issueBooksToolStripMenuItem";
			this->issueBooksToolStripMenuItem->Size = System::Drawing::Size(130, 54);
			this->issueBooksToolStripMenuItem->Text = L"Issue Books";
			this->issueBooksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::issueBooksToolStripMenuItem_Click);
			// 
			// returnBooksToolStripMenuItem
			// 
			this->returnBooksToolStripMenuItem->BackColor = System::Drawing::Color::OldLace;
			this->returnBooksToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnBooksToolStripMenuItem.Image")));
			this->returnBooksToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->returnBooksToolStripMenuItem->Name = L"returnBooksToolStripMenuItem";
			this->returnBooksToolStripMenuItem->Size = System::Drawing::Size(139, 54);
			this->returnBooksToolStripMenuItem->Text = L"Return Books";
			this->returnBooksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::returnBooksToolStripMenuItem_Click);
			// 
			// completeBooksDetailToolStripMenuItem
			// 
			this->completeBooksDetailToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"completeBooksDetailToolStripMenuItem.Image")));
			this->completeBooksDetailToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->completeBooksDetailToolStripMenuItem->Name = L"completeBooksDetailToolStripMenuItem";
			this->completeBooksDetailToolStripMenuItem->Size = System::Drawing::Size(189, 54);
			this->completeBooksDetailToolStripMenuItem->Text = L"Complete Books Detail";
			this->completeBooksDetailToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::completeBooksDetailToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::OldLace;
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(88, 54);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Wheat;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->booksToolStripMenuItem,
					this->studentsToolStripMenuItem, this->issueBooksToolStripMenuItem, this->returnBooksToolStripMenuItem, this->completeBooksDetailToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(855, 58);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(855, 455);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void booksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void studentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void viewBooksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewBooksForm^ viewForm = gcnew ViewBooksForm();
	viewForm->ShowDialog(); // Modal form	
}
private: System::Void addNewBookToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddBookForm^ addForm = gcnew AddBookForm();
	addForm->ShowDialog(); // ShowDialog keeps the new form modal (focused)
}


private: System::Void returnBooksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReturnBookForm^ returnForm = gcnew ReturnBookForm();
	returnForm->ShowDialog(); // Modal

}
private: System::Void issueBooksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	IssueBookForm^ issueForm = gcnew IssueBookForm();
	issueForm->ShowDialog(); // Modal
}
private: System::Void addStudentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddStudentForm^ StudentForm = gcnew AddStudentForm();
	StudentForm->ShowDialog(); // Modal
}
private: System::Void viewStudeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewStudentsForm^ ViewForm = gcnew ViewStudentsForm();
	ViewForm->ShowDialog(); // Modal
}
private: System::Void completeBooksDetailToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CompleteBookForm^ CompleteForm = gcnew CompleteBookForm();
	CompleteForm->ShowDialog(); // Modal
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Exit Confirmation",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		this->Close(); // Closes the current form
	}
}
};
}
