/*
 * This is the code for stack class. In this sample code top is initialized to 0. This implies that
 * top will points to an empty location instead of pointing to the item at the top of the stack.
 * top can also be initialized to -1, capacity, capacity-1. Note that the implementation of
 * push, pop, and peek function will depend on the initialization of the top.
 * Author: Dr. Salim Lakhani
 */

#include "Stack.h"

/**
 * Constructor. It will set the top to 0 which means the top will always point to empty location.
 * It will also create the array for the stack.
 * @param initCapacity
 */
Stack::Stack (int initCapacity) {
    capacity = initCapacity;
    top = 0;
    stack = new int[capacity];
}

/**
 * Push an item to top of the stack
 * @param anItem
 * @return
 */
bool Stack::push (int anItem) {
    //Make sure that stack is not fulll. If it is then return false.
    if (top == capacity) {
        return false;
    }
    else {
        //Add the item to the top of the stack and increment top
        stack[top] = anItem;
        top++;
        return true;
    }
}

/**
 * Remove the item at the top of the stack.
 * @return
 */
bool Stack::pop () {
    //Check to make sure that stack is not empty. If ir is return false to indicate failure.
    if (top == 0) {
        return false;
    }
    //Decrement the top by 1. If our stack contains objects then they must be also be deleted.
    else {
        top--;
    }
}

/**
 * Returns the item at the top of the stack. If stack is empty then it will throw an exception.
 * @return
 */
int Stack::peek () {
    //Checkt o make sure that stack is not empty
    if (top != 0)
        return stack[top-1];
    else
        //Throw an exception if stack is empty
        throw -1;
}

/**
 * Check to see if stack is empty.
 * @return true if stack is empty
 */
bool Stack::empty() {
    return (top == 0);
}

/**
 * Remove all the elements from the stack. If stack contains objects then they must be deleted whicl we clear out the
 * stack.
 */
void Stack::clear() {
    top = 0;
}


/**
 *
 * @return the number of itesm in the stack
 */
int Stack::size() {
    return top;
}

