/********************************************
* Main function to read students from file,
* sort by ID using insertion sort, and display.
*
* Author: Your Name
* Version: Due date
*********************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Student.h"

void insertionSort(Student* arr, int size) {
    for (int i = 1; i < size; i++) {
        Student key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile) {
        std::cerr << "Error opening input file!" << std::endl;
        return 1;
    }

    std::vector<Student> students;
    std::string line;

    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string idStr, lastName, firstName;
        
        std::getline(ss, idStr, ',');
        std::getline(ss, lastName, ',');
        std::getline(ss, firstName, ',');

        int id = std::stoi(idStr);
        students.push_back(Student(firstName, lastName, id));
    }

    inputFile.close();

    int size = students.size();
    Student* studentArray = new Student[size];
    for (int i = 0; i < size; i++) {
        studentArray[i] = students[i];
    }

    insertionSort(studentArray, size);

    std::cout << "Sorted Student List by ID:\n";
    for (int i = 0; i < size; i++) {
        std::cout << studentArray[i].getFirstName() << " "
                  << studentArray[i].getLastName() << " (ID: "
                  << studentArray[i].getId() << ")\n";
    }

    delete[] studentArray;
    return 0;
}
