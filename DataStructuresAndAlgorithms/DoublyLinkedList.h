/********************************************
* Doubly Linked List Implementation in C++
* Stores integers in sorted order.
*
* Author: Yaseer Sabir
* Version: 3/9/2025
*********************************************/

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* prev;
        Node* next;
        Node(int val) : data(val), prev(nullptr), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList();  
    ~DoublyLinkedList(); 

    int getCurrentSize() const;
    bool isEmpty() const;
    void clear();
    int find(int value) const;
    void add(int value);
    void remove(int value);
    void print() const;
};

#endif // DOUBLYLINKEDLIST_H
