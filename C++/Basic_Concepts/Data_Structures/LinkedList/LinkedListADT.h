#pragma once
#include <stdio.h>
template <typename type>
class LinkedListADT{
public:
    virtual void insert(type) = 0; // O(1)
    virtual void insert(type, int) = 0; // O(n)
    virtual void insertAtStart(type) = 0; // O(1)
    virtual void insertAtEnd(type) = 0; // O(1)
    virtual void remove(int) = 0; // O(n)
    virtual void remove(type) = 0; // O(n)
    virtual void removeAtStart() = 0; // O(1)
    virtual void removeAtEnd() = 0; // O(1)
    virtual void get(int) = 0; // O(n)
    virtual void print() = 0; // O(n)
    virtual ~LinkedListADT(){} // O(1)
};