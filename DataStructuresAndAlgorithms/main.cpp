/********************************************
* Doubly Linked List Tester
* Tests the functionality of DoublyLinkedList class.
*
* Author: Yaseer Sabir
* Version: 3/9/2025
*********************************************/

#include "DoublyLinkedList.h"
#include <iostream>

int main() {
    DoublyLinkedList list;

    // Adding elements to the list
    list.add(1);
    list.add(5);
    list.add(9);
    list.add(16);
    list.add(25);
    list.add(2);
    list.add(7);
    list.add(19);

    // Display the list
    std::cout << "List: ";
    list.print(); // Expected output: 1 2 5 7 9 16 19 25

    // Add 10 and display
    list.add(10);
    std::cout << "After adding 10: ";
    list.print(); // Expected output: 1 2 5 7 9 10 16 19 25

    // Display current size
    std::cout << "Number of items in the list is: " << list.getCurrentSize() << std::endl;

    // Check if list is empty
    std::cout << "List is " << (list.isEmpty() ? "empty." : "not empty.") << std::endl;

    // Remove 9 and display
    list.remove(9);
    std::cout << "After removing 9: ";
    list.print(); // Expected output: 1 2 5 7 10 16 19 25

    // Display current size
    std::cout << "Number of items in the list is: " << list.getCurrentSize() << std::endl;

    // Find 16
    int index16 = list.find(16);
    if (index16 != -1)
        std::cout << "Number 16 is located at position " << index16 << "." << std::endl;
    else
        std::cout << "Number 16 is not in the list." << std::endl;

    // Find 9
    int index9 = list.find(9);
    if (index9 != -1)
        std::cout << "Number 9 is located at position " << index9 << "." << std::endl;
    else
        std::cout << "Number 9 is not in the list." << std::endl;

    // Clear the list
    list.clear();
    std::cout << "After clearing the list, ";
    std::cout << "List is " << (list.isEmpty() ? "empty." : "not empty.") << std::endl;

    return 0;
}
