#include <iostream>
#include "Queue.hh"

Queue::Queue(){}

Queue::~Queue()
{
    if(!IsEmpty())
    {
        Node* current = first; //Se guarda el valor del principio para recorrerlo.
        while (current)
        {
            Pop();
            current = first; 
        }
    }
    else
    {
        std::cout << "La cola esta vacia" << std::endl; //Se detiene cuando llegue a un first vacio.
    }
    
}

//agregar nodos
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
    return !first; //Pregunta si no existo/si estoy null
}

//Antes de agregar algo hay que preguntar si esta vacio
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

void Queue::Pop() //En la cola se elimina el primero que este a la cabeza.
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
        std::cout << "La cola esta vacia" << std::endl;
        return;
    }

    while (temp)
    {
        std::cout << "Nombre del libro: " << temp->book->GetName() << std::endl;
        std::cout << "Nombre del autor: " << temp->book->GetAuthor() << std::endl;
        std::cout << std::endl;

        temp = temp->next;
    }
    
}