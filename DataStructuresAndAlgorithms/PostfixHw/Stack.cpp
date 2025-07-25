// stack.cpp
/********************************************
* Stack class implementation for postfix evaluation
*
* Author: Elmer Hernandez
* Version: Due date: TBD
*********************************************/

#include "Stack.h"

Stack::Stack() {
    top = -1;
}

bool Stack::push(double value) {
    if (top >= 9) return false; // stack overflow
    arr[++top] = value;
    return true;
}

bool Stack::pop() {
    if (top == -1) return false; // stack underflow
    --top;
    return true;
}

double Stack::peek() {
    if (top == -1) return -1; // stack is empty
    return arr[top];
}

void Stack::clear() {
    top = -1;
}

bool Stack::empty() {
    return top == -1;
}

int Stack::size() {
    return top + 1;
}
