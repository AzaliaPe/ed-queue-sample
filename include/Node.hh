#include "Book.hh"

struct Node
{
    Book* book{};
    Node* next{}; //Esto sirve para hacer cadenas

    Node(Book* book, Node* next)
    {
        this->book = book;
        this->next = next;
    }

    Node(Book* book)
    {
        this->book = book;
    }
};

