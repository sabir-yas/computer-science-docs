#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int capacity;
    int count;
    int front;
    int back;
    int *queue;

public:
    Queue();
    ~Queue();
    void push(int value);
    int pop();
    int peek();
    bool empty();
    void clear();
    void print();
    int size();

};
#endif