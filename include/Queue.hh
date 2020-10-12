#include "Node.hh"
class Queue
{
    private:
        Node* first{};
        Node* last{};
    public:
        Queue();
        ~Queue();
        void Add(Book*);
        Node* Peek() const; // Regresa al que va al frente de la cola
        void Pop(); //Remueve al que va al frente de la cola
        bool IsEmpty() const;
        void Print();
};

