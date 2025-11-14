#include <iostream>

using namespace std;

class Data {
private:
    int value;
public:
    Data(int v) : value(v) {}

    void display() {
        cout << "Value: " << value << endl;
    }

    // Friend function declaration
    // We pass by reference (&) to modify the original objects
    friend void swap_data(Data &obj1, Data &obj2);
};

// Friend function definition
void swap_data(Data &obj1, Data &obj2) {
    // Access private 'value' member and swap
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    Data d1(10);
    Data d2(20);

    cout << "Before swap:" << endl;
    cout << "Object 1: ";
    d1.display();
    cout << "Object 2: ";
    d2.display();

    swap_data(d1, d2); // Call friend function

    cout << "\nAfter swap:" << endl;
    cout << "Object 1: ";
    d1.display();
    cout << "Object 2: ";
    d2.display();

    return 0;
}