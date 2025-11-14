#include <iostream>

using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // 1. Default constructor (no parameters)
    Box() {
        length = 1.0;
        width = 1.0;
        height = 1.0;
    }

    // 2. Constructor for a cube (one parameter)
    Box(double side) {
        length = side;
        width = side;
        height = side;
    }

    // 3. Constructor for a cuboid (three parameters)
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    void display_volume() {
        cout << "Volume: " << (length * width * height) << endl;
    }
};

int main() {
    cout << "--- Constructor Overloading ---" << endl;

    Box b1; // Calls default constructor
    cout << "Box 1 (Default): ";
    b1.display_volume();

    Box b2(5.0); // Calls constructor for a cube
    cout << "Box 2 (Cube): ";
    b2.display_volume();

    Box b3(3.0, 4.0, 5.0); // Calls constructor for a cuboid
    cout << "Box 3 (Cuboid): ";
    b3.display_volume();

    return 0;
}