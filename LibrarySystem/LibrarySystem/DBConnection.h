#pragma once
using namespace System;
using namespace System::Data::SqlClient;

namespace LibrarySystem {

    public ref class DBConnection
    {
    private:
        static SqlConnection^ conn = nullptr;

    public:
        static SqlConnection^ GetConnection()
        {
            if (conn == nullptr || conn->State == System::Data::ConnectionState::Closed || conn->State == System::Data::ConnectionState::Broken)
            {
                String^ connectionString =
                    "Data Source=DESKTOP-80KQTM4\\SQLEXPRESS;"  // Your SQL Server instance
                    "Initial Catalog=LibraryDB;"                // Your database name
                    "Integrated Security=True;";               // Using Windows Auth

                conn = gcnew SqlConnection(connectionString);
            }
            return conn;
        }

        // Optional: method to close the connection if needed
        static void CloseConnection()
        {
            if (conn != nullptr && conn->State == System::Data::ConnectionState::Open)
            {
                conn->Close();
            }
        }
    };

}
