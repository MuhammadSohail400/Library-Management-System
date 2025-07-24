// Program.cpp
#include "LoginForm.h"   // Include your MainForm header

using namespace System;
using namespace System::Windows::Forms;
using namespace LibraryManagementSystem;  // Replace with your actual namespace
using namespace LibrarySystem;
[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    LoginForm^ loginForm = gcnew LoginForm();  // Start with MainForm
    Application::Run(loginForm);

    return 0;
}
