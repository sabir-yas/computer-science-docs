#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();
    void append(int value);
    void prepend(int value);
    void deleteNode(int value);
    void display();
};
#endif