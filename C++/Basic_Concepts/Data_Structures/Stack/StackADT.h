#pragma once
template <typename type>
class StackADT{
public:
    virtual void push(type) = 0;
    virtual type pop() = 0;
    virtual bool isEmpty() = 0;
    virtual type top() = 0;
    virtual ~StackADT(){}
    virtual void print() = 0;
};