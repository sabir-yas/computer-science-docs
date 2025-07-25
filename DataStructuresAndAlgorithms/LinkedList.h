
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <vector>

class LinkedList
{
private:
    Node *headPtr;
    int itemCount;
    // This is private function which will find an item
    // in the link list and will return a pointer to the node
    // which contains the given item
    Node *getPointerTo(const int target) const;

public:
    LinkedList();
    LinkedList(const LinkedList &linkedList); // Copy Constructor
    virtual ~LinkedList();                    // Destructor

    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const int anEntry);
    bool remove(const int anEntry);
    void clear();
    bool contains(const int anEntry) const;
    int getFrequencyOf(const int anEntry) const;
    std::vector<int> toVector() const;
};

#endif
