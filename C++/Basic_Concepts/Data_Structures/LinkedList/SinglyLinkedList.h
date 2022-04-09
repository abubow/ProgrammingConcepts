#pragma once
#include <stdio.h>
#include "LinkedListADT.h"

template <typename type>
class SinglyLinkedListADT : public LinkedListADT<type>{
public:
    SinglyLinkedListADT(){
        head = NULL;
        tail = NULL;
    }
    ~SinglyLinkedListADT(){
        Node<type> *temp = head;
        while(temp != NULL){
            head = head->next;
            delete temp;
            temp = head;
        }
    }
    void insert(type);
    void insert(type, int);
    void insertAtStart(type);
    void insertAtEnd(type);
    void remove(int);
    void remove(type);
    void removeAtStart();
    void removeAtEnd();
    void get(int);
    void print();
private:
    struct Node{
        type data;
        Node* next;
    };
    Node* head;
    Node* tail;
    int size;
};