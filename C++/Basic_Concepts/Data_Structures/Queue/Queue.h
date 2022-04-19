#include "QueueADT.h"
#include <iostream>
using namespace std;

template <typename typeT>
class Queue : public QueueADT<typeT>
{
private:
    int size;
    int front;
    int rear;
    typeT *data;
public:
    Queue(int size);
    ~Queue();
    void enqueue(typeT data);
    typeT dequeue();
    typeT peek();
    bool isEmpty();
    bool isFull();
    int getSize();
};

template <typename typeT>
Queue<typeT>::Queue(int size)
{
    this->size = size;
    this->front = 0;
    this->rear = 0;
    this->data = new typeT[size];
}

template <typename typeT>
Queue<typeT>::~Queue()
{
    if(data != nullptr)
    {
        delete [] data;
    }
}

template <typename typeT>
void Queue<typeT>::enqueue(typeT data)
{
    if(isFull())
    {
        cout << "Queue is full" << endl;
        return;
    }
    this->data[rear] = data;
    rear = (rear + 1) % size;
}

template <typename typeT>
typeT Queue<typeT>::dequeue()
{
    if(isEmpty())
    {
        cout << "Queue is empty" << endl;
        return 0;
    }
    typeT data = this->data[front];
    front = (front + 1) % size;
    return data;
}

template <typename typeT>
typeT Queue<typeT>::peek()
{
    if(isEmpty())
    {
        cout << "Queue is empty" << endl;
        return 0;
    }
    return this->data[front];
}

template <typename typeT>
bool Queue<typeT>::isEmpty()
{
    return front == rear;
}

template <typename typeT>
bool Queue<typeT>::isFull()
{
    return (rear + 1) % size == front;
}

template <typename typeT>
int Queue<typeT>::getSize()
{
    return size;
}


