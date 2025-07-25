/**
 * This main function can be sued to test our stack class.
 * Author: Dr. Salim Lakhani
 */


/**
 * This main function can be sued to test our stack class.
 * Author: Dr. Salim Lakhani
 */

//  #include <iostream>

//  #include "stack.h"
//  using namespace std;
 
 
//  int main() {
//      //Create a stack with a capacity of 10
//      Stack stack(10);
 
//      //Add some items to the stack
//      stack.push(1);
//      stack.push(2);
//      stack.push(3);
//      stack.push(4);
//      stack.push(5);
//      stack.push(6);
//      stack.push(7);
//      stack.push(8);
//      stack.push(9);
//      stack.push(10);
 
//      //Stack is full. Another push will return a false
//      if (!stack.push(11) ) {
//          cout << "Stack is full. Cannot add more items." << endl;
//      }
 
//      //Check to see if stack is empty
//      if (!stack.empty()) {
//          cout << "Stack is not empty"<< endl;
//      }
 
//      //Get the item at the top of the stack
//      cout << "Item at the top of the stack is " << stack.peek() << endl;
 
//      //Check for the number of items in stack
//      cout << "There are " << stack.size() << " items in the stack" << endl;
 
//      //Pop some items from the stack
//      stack.pop();
//      stack.pop();
 
//      if (!stack.empty()) {
//          cout << "Stack is not empty"<< endl;
//      }
 
//      //Get the item at the top of the stack
//      cout << "Item at the top of the stack is " << stack.peek() << endl;
 
//      //Check for the number of items in stack
//      cout << "There are " << stack.size() << " items in the stack" << endl;
 
//      //Clear out the stack
//      stack.clear();
 
//      if (!stack.empty()) {
//          cout << "Stack is not empty"<< endl;
//      }
//      else {
//          cout << "Stack is empty"<< endl;
//      }
 
//      //Check for the number of items in stack
//      cout << "There are " << stack.size() << " items in the stack" << endl;
 
//      //Try to get the item at top of the stack
//      try {
//          int value = stack.peek();
//          cout << "Item at the top of the stack is " << value << endl;
//      }
//      catch (int i){
//          cout << "There is no item at the top of the stack" << endl;
//          cout << "Error code is: " << i << endl;
//      }
 
 
 
 
 
 
//  }
 
#include <iostream>

#include "Stack.h"
#include "Stack.cpp"
using namespace std;


int main() {
    //Create a stack with a capacity of 10
    Stack stack(10);

    //Add some items to the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);

    //Stack is full. Another push will return a false
    if (!stack.push(11) ) {
        cout << "Stack is full. Cannot add more items." << endl;
    }

    //Check to see if stack is empty
    if (!stack.empty()) {
        cout << "Stack is not empty"<< endl;
    }

    //Get the item at the top of the stack
    cout << "Item at the top of the stack is " << stack.peek() << endl;

    //Check for the number of items in stack
    cout << "There are " << stack.size() << " items in the stack" << endl;

    //Pop some items from the stack
    stack.pop();
    stack.pop();

    if (!stack.empty()) {
        cout << "Stack is not empty"<< endl;
    }

    //Get the item at the top of the stack
    cout << "Item at the top of the stack is " << stack.peek() << endl;

    //Check for the number of items in stack
    cout << "There are " << stack.size() << " items in the stack" << endl;

    //Clear out the stack
    stack.clear();

    if (!stack.empty()) {
        cout << "Stack is not empty"<< endl;
    }
    else {
        cout << "Stack is empty"<< endl;
    }

    //Check for the number of items in stack
    cout << "There are " << stack.size() << " items in the stack" << endl;

    //Try to get the item at top of the stack
    try {
        int value = stack.peek();
        cout << "Item at the top of the stack is " << value << endl;
    }
    catch (int i){
        cout << "There is no item at the top of the stack" << endl;
        cout << "Error code is: " << i << endl;
    }






}
