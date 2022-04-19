#include "Queue.h"
#include <iostream>
using namespace std;

template <typename typeT>
class Stack {
private:
    Queue<typeT>* queue;
public:
    Stack(int);
    ~Stack();
    void push(typeT data);
    typeT pop();
    typeT peek();
    bool isEmpty();
    bool isFull();
    int getSize();
};

template <typename typeT>
Stack<typeT>::Stack(int size)
{
    queue = Queue<typeT>(size);
}

template <typename typeT>
Stack<typeT>::~Stack()
{
    if(queue != nullptr)
    {
        delete queue;
    }
}

template <typename typeT>
void Stack<typeT>::push(typeT data)
{
    queue->enqueue(data);
}

template <typename typeT>
typeT Stack<typeT>::pop()
{
    for(int i = 0; i < queue->getSize() - 1; i++)
    {
        queue->enqueue(queue->dequeue());
    }
    return queue->dequeue();
}

template <typename typeT>
typeT Stack<typeT>::peek()
{
    for(int i = 0; i < queue->getSize() - 1; i++)
    {
        queue->enqueue(queue->dequeue());
    }
    typeT value = queue->peek();
    queue->enqueue(queue->dequeue());
    return value;
}

template <typename typeT>
bool Stack<typeT>::isEmpty()
{
    return queue->isEmpty();
}

template <typename typeT>
bool Stack<typeT>::isFull()
{
    return queue->isFull();
}

template <typename typeT>
int Stack<typeT>::getSize()
{
    return queue->getSize();
}

