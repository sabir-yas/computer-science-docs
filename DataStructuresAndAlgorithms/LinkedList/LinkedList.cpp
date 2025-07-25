#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::append(int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}