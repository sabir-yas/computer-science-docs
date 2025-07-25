// Stack.h
/********************************************
* Stack class declaration for postfix evaluation
*
* Author: Yaseer
* Version: 3/23/2025
*********************************************/

#ifndef STACK_H
#define STACK_H

class Stack {
private:
    double arr[10];
    int top;

public:
    Stack();
    bool push(double value);
    bool pop();
    double peek();
    void clear();
    bool empty();
    int size();
};

#endif
