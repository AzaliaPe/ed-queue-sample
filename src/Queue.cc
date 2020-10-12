#include <iostream>
#include "Queue.hh"

Queue::Queue(){}

Queue::~Queue()
{
    Node* temp = first;

    Node* currentHead{};

    while (temp)
    {
        currentHead = temp;
        temp = currentHead->next;
        delete currentHead;
    }
}

void Queue::Add(Book* book)
{
    Node* node{new Node(book)};
    //Checar si esta vacia
    if(IsEmpty())
    {  //Si esta vacia
        first = node; //Aquí se añade un elemento, que es el 1ero.
        last = node; //Y al ser el unico que se encuentra también es el ultimo.
    }
    else
    {
        last->next = node;
        last = node;
    }
}

bool Queue::IsEmpty() const
{
    return !first; // pregunta si no existo osea si estoy null
}

Node* Queue::Peek() const
{
    if (IsEmpty())
    {
        return nullptr;
    }
    else
    {
        return first;   
    }
}

void Queue::Pop()
{
    Node* temp = first;
    first = temp->next;
    delete temp;
}

void Queue::Print()
{
    Node* temp = first;

    if(IsEmpty())
    {
        std::cout << "La cola esta vacía" << std::endl;
        return;
    }

    while (temp)
    {
        std::cout << "Nombre del libro" << temp->book->GetName() << std::endl;
        std::cout << "Nombre del autor" << temp->book->GetAuthor() << std::endl;
        std::cout << std::endl;

        temp = temp->next;
    }
    
}