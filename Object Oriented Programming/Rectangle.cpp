#include <iostream>
using namespace std;

// Base class: Rectangle
class Rectangle {
    protected:
    double width, height;

    public:
    //Constructor for Rectangle
    Rectangle(double w, double h) : width(w), height(h) {}

    //Method to calculate area
    double area() const {
        return width * height;
    }

    //Method to display dimensions
    void displayDimensions() const {
        cout << "Width: "<< width << " , Height: "<< height << endl;
    }
};