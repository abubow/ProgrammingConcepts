#pragma once
#include <stdio.h>
#include <iostream>
#include "LinkedListADT.h"

template <typename type>
class SinglyLinkedListADT : public LinkedListADT<type>{
public:
    SinglyLinkedListADT(){
        head = nullptr;
        tail = nullptr;
    }
    ~SinglyLinkedListADT(){
        Node<type> *temp = head;
        while(temp != nullptr){
            head = head->next;
            delete temp;
            temp = head;
        }
    }
    void insert(type value){
        tail->next=new Node<type>(value);
        tail = tail->next;
        size++;
    }
    void insert(type value, int index){
        if (index > size){
            printf("Index out of bounds\n");
            return;
        }
        if (index == size){
            insertAtEnd(value);
            return;
        }
        static Node<type>* temp = head;
        if(index == 0){
            temp = new Node<type>(value, temp);
            return;
        }
        temp = temp->next;
        insert(value, index-1);
    }
    /* //iterative implementation
    void insert(type value, int index){
        int i = 0;
        for(Node<type>* temp = head; temp != nullptr; temp = temp->next, i++){
            if(i == index){
                temp = new Node<type>(value, temp);
                return;
            }
        }
    }
    */
    void insertAtStart(type value){
        insert(value, 0);
    }
    void insertAtEnd(type value){
        tail -> next = new Node<type>(value);
        tail = tail->next;
    }
    void remove(int index){
        if (index >= size){
            printf("Index out of bounds\n");
            return;
        }
        Node<type>* temp = head;
        if (index == 0){
            
        }

    }
    void removeAll(type value);
    void removeAtStart(){
        Node<type>* temp = head;
        head = head->next;
        delete head;
    }
    void removeAtEnd(){
        Node<type>* temp = head;
        while(temp->next!=tail;)
    }

    type get(int index){
        static Node<type>* temp = head;
        if(index==0)
            return temp->value;
        temp = temp -> next;
        get(index - 1);
    }
    void print(){
        Node<type>* temp = head;
        while(temp!=nullptr){
            std::cout << temp->value << " -> ";
        }
        std::cout << std::endl;
    }
private:
    struct Node{
        type data;
        Node* next;
        Node(type value){
            data = value;
            next = nullptr;
        }
        Node(type value, Node* next){
            data = value;
            this->next = next;
        }
        Node(){
            next = nullptr;
        }
    };
    Node* head;
    Node* tail;
    int size;
};