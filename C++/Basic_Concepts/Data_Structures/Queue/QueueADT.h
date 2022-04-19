#pragma once
template <typename T>
class QueueADT
{
public:
    virtual void enqueue(T data) = 0;
    virtual T dequeue() = 0;
    virtual T peek() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};