#pragma once
template <typename type>
class StackADT{
public:
    virtual void push(type) = 0; // O(1)
    virtual type pop() = 0; // O(1)
    virtual bool isEmpty() = 0; // O(1)
    virtual type top() = 0; // O(1)
    virtual ~StackADT(){} // O(1)
    virtual void print() = 0; // O(n)
};