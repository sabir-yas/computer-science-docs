
#ifndef NODE_H
#define NODE_H

class Node
{
private:
    Node *next; // Pointer to next node
    int item;   // A data item

public:
    // Constructors
    Node();
    Node(const int anItem);
    Node(const int anItem, Node *nextNodePtr);

    // Set methods
    void setItem(const int anItem);
    void setNext(Node *nextNodePtr);

    // Get methods
    int getItem() const;
    Node *getNext() const;
};

#endif
