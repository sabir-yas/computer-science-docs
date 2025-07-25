//Derived class: Square (inherits from Rectangle)
class Square : public Rectangle {
    public:
    //Constructor for Square
    Square(double side) : Rectangle(side, side) {} // Passes side as both width and height to rectangle

    //Method to display the sdie of the square
    void displaySide() const {
        cout << "Side: " << width << endl; //since it's a square, width and height are the same
    }
};