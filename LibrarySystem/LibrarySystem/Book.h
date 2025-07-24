#pragma once

using namespace System;

namespace LibrarySystem {

    public ref class Book
    {
    private:
        int bookId;
        String^ title;
        String^ author;
        String^ isbn;
        String^ status;

    public:
        // Constructor4
        Book(int id, String^ t, String^ a, String^ i, String^ s)
            : bookId(id), title(t), author(a), isbn(i), status(s)
        {
        }

        // BookId property
        property int BookId {
            int get() { return bookId; }
            void set(int value) { bookId = value; }
        }

        // Title property
        property String^ Title {
            String^ get() { return title; }
            void set(String^ value) { title = value; }
        }

        // Author property
        property String^ Author {
            String^ get() { return author; }
            void set(String^ value) { author = value; }
        }

        // ISBN property
        property String^ ISBN {
            String^ get() { return isbn; }
            void set(String^ value) { isbn = value; }
        }

        // Status property
        property String^ Status {
            String^ get() { return status; }
            void set(String^ value) { status = value; }
        }
    };

}
