// StudentService.cpp
#include "StudentService.h"

bool LibrarySystem::StudentService::AddStudent(Student^ student)
{
    String^ connectionString = "Data Source=DESKTOP-80KQTM4\\SQLEXPRESS;Initial Catalog=LibraryDB;Integrated Security=True;";
    SqlConnection^ conn = gcnew SqlConnection(connectionString);
    try
    {
        conn->Open();
        SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Students (Name, EnrollmentNo, Department, Semester, Contact, Email) VALUES (@Name, @EnrollmentNo, @Department, @Semester, @Contact, @Email)", conn);

        cmd->Parameters->AddWithValue("@Name", student->GetName());
        cmd->Parameters->AddWithValue("@EnrollmentNo", student->GetEnrollmentNo());
        cmd->Parameters->AddWithValue("@Department", student->GetDepartment());
        cmd->Parameters->AddWithValue("@Semester", student->GetSemester());
        cmd->Parameters->AddWithValue("@Contact", student->GetContact());
        cmd->Parameters->AddWithValue("@Email", student->GetEmail());

        cmd->ExecuteNonQuery();
        return true;
    }
    catch (Exception^ ex)
    {
        Console::WriteLine("Error: " + ex->Message);
        return false;
    }
    finally
    {
        conn->Close();
    }
}
