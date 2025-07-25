#include "Node.h"

Node::Node(int val) {
    data = val;
    next = nullptr;
}

int Node::getData() const {
    return data;
}

Node* Node::getNext() const {
    return next;
}

void Node::setNext(Node* n) {
    next = n;
}