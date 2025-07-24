// Person.h
#pragma once
using namespace System;

namespace LibrarySystem {

    public ref class Person
    {
    protected:
        String^ name;
        String^ contact;
        String^ email;

    public:
        Person(String^ name, String^ contact, String^ email)
        {
            this->name = name;
            this->contact = contact;
            this->email = email;
        }

        // Encapsulation
        String^ GetName() { return name; }
        void SetName(String^ value) { name = value; }

        String^ GetContact() { return contact; }
        void SetContact(String^ value) { contact = value; }

        String^ GetEmail() { return email; }
        void SetEmail(String^ value) { email = value; }

        // Polymorphism
        virtual String^ GetInfo()
        {
            return "Name: " + name + ", Contact: " + contact + ", Email: " + email;
        }
    };
}
