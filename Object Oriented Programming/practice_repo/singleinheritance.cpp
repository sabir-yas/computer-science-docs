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


//Derived class: Square (inherits from Rectangle)
class Square : public Rectangle {
    public:
    //Constructor for Square
    Square(double side) : Rectangle(side, side) {} // Passes side as both width and height to rectangle

    //Method to display the sdie of the square
    void displaySide() const {
        cout << "Side: " << width << endl; // Since it's a square, width and height are the same
    }
};

int main(){

    Rectangle rect(5.0, 3.0);
    cout << "Rectangle:" << endl;
    rect.displayDimensions();
    cout << "Area: " << rect.area() << endl;

    //Create a square
    Square sq(4.0);
    cout << "\nSquare: "<< endl;
    sq.displaySide();
    sq.displayDimensions();
    cout << "Area: " << sq.area() << endl;
    
    return 0;
}