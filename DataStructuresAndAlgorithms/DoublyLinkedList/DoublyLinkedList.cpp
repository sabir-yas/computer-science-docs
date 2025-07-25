/********************************************
 * Doubly Linked List Implementation
 * Maintains sorted order and supports various operations.
 *
 * Author: Yaseer Sabir
 * Version: 3/9/2025
 *********************************************/

#include "DoublyLinkedList.h"

// Constructor - initializes an empty list
DoublyLinkedList::DoublyLinkedList()
{
    head = tail = nullptr;
    size = 0;
}

// Destructor - deletes all nodes
DoublyLinkedList::~DoublyLinkedList()
{
    clear();
}

// Returns the number of items in the list
int DoublyLinkedList::getCurrentSize() const
{
    return size;
}

// Returns true if the list is empty
bool DoublyLinkedList::isEmpty() const
{
    return size == 0;
}

// Clears the list by deleting all nodes
void DoublyLinkedList::clear()
{
    Node *current = head;
    while (current)
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = tail = nullptr;
    size = 0;
}

// Finds the index of a value, returns -1 if not found
int DoublyLinkedList::find(int value) const
{
    Node *current = head;
    int index = 0;
    while (current)
    {
        if (current->data == value)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1; // Value not found
}

// Adds a new item while maintaining sorted order
void DoublyLinkedList::add(int value)
{
    Node *newNode = new Node(value);

    if (!head)
    {
        head = tail = newNode;
    }
    else if (value <= head->data)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else if (value >= tail->data)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next && current->next->data < value)
        {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
    }
    size++;
}

// Removes an item while maintaining order
void DoublyLinkedList::remove(int value)
{
    if (!head)
        return;

    Node *current = head;
    while (current && current->data != value)
    {
        current = current->next;
    }

    if (!current)
        return;

    if (current == head)
    {
        head = head->next;
        if (head)
            head->prev = nullptr;
    }
    else if (current == tail)
    {
        tail = tail->prev;
        if (tail)
            tail->next = nullptr;
    }
    else
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }

    delete current;
    size--;

    if (size == 0)
    {
        head = tail = nullptr;
    }
}

// Prints the list contents
void DoublyLinkedList::print() const
{
    Node *current = head;
    while (current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
