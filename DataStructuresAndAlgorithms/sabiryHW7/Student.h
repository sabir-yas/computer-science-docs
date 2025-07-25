/********************************************
* Student class declaration with private members
* and operator overloading for sorting by id
*
* Author: Your Name
* Version: Due date
*********************************************/

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string firstName;
    std::string lastName;
    int id;

public:
    Student();  // Default constructor

    Student(std::string fn, std::string ln, int i);
    
    std::string getFirstName() const;
    std::string getLastName() const;
    int getId() const;

    bool operator<(const Student& other) const;
};

#endif
