/********************************************
* Student class definition file with methods
* and operator overloading for sorting by id
*
* Author: Your Name
* Version: Due date
*********************************************/

#include "Student.h"

Student::Student() {
    firstName = "";
    lastName = "";
    id = 0;
}

Student::Student(std::string fn, std::string ln, int i) {
    firstName = fn;
    lastName = ln;
    id = i;
}

std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

int Student::getId() const {
    return id;
}

bool Student::operator<(const Student& other) const {
    return id < other.id;
}
