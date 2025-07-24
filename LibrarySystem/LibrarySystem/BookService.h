#pragma once

#include "Book.h"
#include "DBConnection.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace LibrarySystem;

namespace LibrarySystem {

    public ref class BookService
    {
    public:
        // Insert a new book
        static bool AddBook(Book^ book)
        {
            SqlConnection^ conn = DBConnection::GetConnection();
            try
            {
                conn->Open();
                String^ sql =
                    "INSERT INTO Books (Title, Author, ISBN, Status) "
                    "VALUES (@Title, @Author, @ISBN, @Status);";

                SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
                cmd->Parameters->AddWithValue("@Title", book->Title);
                cmd->Parameters->AddWithValue("@Author", book->Author);
                cmd->Parameters->AddWithValue("@ISBN", book->ISBN);
                cmd->Parameters->AddWithValue("@Status", book->Status);

                int rows = cmd->ExecuteNonQuery();
                conn->Close();
                return (rows > 0);
            }
            catch (Exception^ ex)
            {
                if (conn->State == ConnectionState::Open)
                    conn->Close();
                System::Diagnostics::Debug::WriteLine("AddBook Error: " + ex->Message);
                return false;
            }
        }

        // Retrieve all books
        static List<Book^>^ GetAllBooks()
        {
            List<Book^>^ list = gcnew List<Book^>();
            SqlConnection^ conn = DBConnection::GetConnection();

            try
            {
                conn->Open();
                String^ sql = "SELECT BookId, Title, Author, ISBN, Status FROM Books;";
                SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
                SqlDataReader^ rdr = cmd->ExecuteReader();

                while (rdr->Read())
                {
                    int id = Convert::ToInt32(rdr["BookId"]);
                    String^ title = rdr["Title"]->ToString();
                    String^ auth = rdr["Author"]->ToString();
                    String^ isbn = rdr["ISBN"]->ToString();
                    String^ stat = rdr["Status"]->ToString();

                    Book^ b = gcnew Book(id, title, auth, isbn, stat);
                    list->Add(b);
                }
                conn->Close();
            }
            catch (Exception^ ex)
            {
                if (conn->State == ConnectionState::Open)
                    conn->Close();
                System::Diagnostics::Debug::WriteLine("GetAllBooks Error: " + ex->Message);
            }
            return list;
        }

        // Search books by title
        static List<Book^>^ SearchBooksByTitle(String^ keyword)
        {
            List<Book^>^ list = gcnew List<Book^>();
            SqlConnection^ conn = DBConnection::GetConnection();

            try
            {
                conn->Open();
                String^ sql = "SELECT BookId, Title, Author, ISBN, Status FROM Books WHERE Title LIKE @keyword;";
                SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
                cmd->Parameters->AddWithValue("@keyword", "%" + keyword + "%");

                SqlDataReader^ rdr = cmd->ExecuteReader();
                while (rdr->Read())
                {
                    int id = Convert::ToInt32(rdr["BookId"]);
                    String^ title = rdr["Title"]->ToString();
                    String^ auth = rdr["Author"]->ToString();
                    String^ isbn = rdr["ISBN"]->ToString();
                    String^ stat = rdr["Status"]->ToString();

                    Book^ b = gcnew Book(id, title, auth, isbn, stat);
                    list->Add(b);
                }
                conn->Close();
            }
            catch (Exception^ ex)
            {
                if (conn->State == ConnectionState::Open)
                    conn->Close();
                System::Diagnostics::Debug::WriteLine("SearchBooksByTitle Error: " + ex->Message);
            }

            return list;
        }

        // Delete book by ID
        static bool DeleteBook(int bookId)
        {
            SqlConnection^ conn = DBConnection::GetConnection();
            try
            {
                conn->Open();
                String^ sql = "DELETE FROM Books WHERE BookId = @BookId;";
                SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
                cmd->Parameters->AddWithValue("@BookId", bookId);
                int rows = cmd->ExecuteNonQuery();
                conn->Close();
                return (rows > 0);
            }
            catch (Exception^ ex)
            {
                if (conn->State == ConnectionState::Open)
                    conn->Close();
                System::Diagnostics::Debug::WriteLine("DeleteBook Error: " + ex->Message);
                return false;
            }
        }

        // Update book by ID
        static bool UpdateBook(Book^ book)
        {
            SqlConnection^ conn = DBConnection::GetConnection();
            try
            {
                conn->Open();
                String^ sql = "UPDATE Books SET Title=@Title, Author=@Author, ISBN=@ISBN, Status=@Status WHERE BookId=@BookId;";
                SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
                cmd->Parameters->AddWithValue("@Title", book->Title);
                cmd->Parameters->AddWithValue("@Author", book->Author);
                cmd->Parameters->AddWithValue("@ISBN", book->ISBN);
                cmd->Parameters->AddWithValue("@Status", book->Status);
                cmd->Parameters->AddWithValue("@BookId", book->BookId);
                int rows = cmd->ExecuteNonQuery();
                conn->Close();
                return (rows > 0);
            }
            catch (Exception^ ex)
            {
                if (conn->State == ConnectionState::Open)
                    conn->Close();
                System::Diagnostics::Debug::WriteLine("UpdateBook Error: " + ex->Message);
                return false;
            }
        }
    };

}
