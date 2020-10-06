#include <iostream>
#include "Node.hh"

int main()
{
    // Book* book1{new Book("libro bonito", "autor feito")};
    // std::cout << "Book name: " << book1->GetName() << std::endl;
    // std::cout << "Book author: " << book1->GetAuthor() << std::endl;

    Node* node1{new Node(new Book("libro 1", "autor 1"))};  
    Node* node2{new Node(new Book("libro 2", "autor 2"))};   
    node1->next = node2;
    Node* node3{new Node(new Book("libro 3", "autor 3"))};   
    node2->next = node3;

    Node* head = node1; //Inicio
    Node* tail = node3; //Final

    Node* current = head;

    while (current)
    {
        std::cout << "Book name: " << current->book->GetName() << std::endl;
        std::cout << "Book author: " << current->book->GetAuthor() << std::endl;
        current = current->next;
    }

    std::cin.get();

    return 0;
}