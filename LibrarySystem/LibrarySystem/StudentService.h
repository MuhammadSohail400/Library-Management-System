// StudentService.h
#pragma once
#include "Student.h"

using namespace System;
using namespace System::Data::SqlClient;

namespace LibrarySystem {

    public ref class StudentService
    {
    public:
        bool AddStudent(Student^ student);
    };
}
