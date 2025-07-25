#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int data;
        Node* next;

    public:
        Node(int val);
        int getData() const;
        Node* getNext() const;
        void setNext(Node* n);    

};
#endif