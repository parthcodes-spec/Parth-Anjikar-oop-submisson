#include <iostream>
using namespace std;

class Area {
public:
    float calculate(float length, float width) {
        return length * width; // Rectangle/lab
    }

    float calculate(float side) {
        return side * side; // Square/classroom
    }
};

int main() {
    Area a;
    float l, w, s;

    cout << "Enter length and width of Laboratory: ";
    cin >> l >> w;
    cout << "Area of Laboratory: " << a.calculate(l, w) << endl;

    cout << "Enter side of Classroom: ";
    cin >> s;
    cout << "Area of Classroom: " << a.calculate(s) << endl;

    return 0;
}