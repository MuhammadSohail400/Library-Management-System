// Student.h
#pragma once
#include "Person.h"

namespace LibrarySystem {

    public ref class Student : public Person
    {
    private:
        String^ enrollmentNo;
        String^ department;
        String^ semester;

    public:
        Student(String^ name, String^ enrollmentNo, String^ department, String^ semester, String^ contact, String^ email)
            : Person(name, contact, email)
        {
            this->enrollmentNo = enrollmentNo;
            this->department = department;
            this->semester = semester;
        }

        // Encapsulation
        String^ GetEnrollmentNo() { return enrollmentNo; }
        void SetEnrollmentNo(String^ value) { enrollmentNo = value; }

        String^ GetDepartment() { return department; }
        void SetDepartment(String^ value) { department = value; }

        String^ GetSemester() { return semester; }
        void SetSemester(String^ value) { semester = value; }

        // Polymorphism
        virtual String^ GetInfo() override
        {
            return Person::GetInfo() + ", Enrollment: " + enrollmentNo + ", Dept: " + department + ", Semester: " + semester;
        }
    };
}
