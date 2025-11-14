#include <iostream>
using namespace std;

template <class T>
class Vector {
    T v[10];     // Fixed-size array for simplicity
    int size;

public:
    // Function to create vector
    void create() {
        cout << "Enter size of vector: ";
        cin >> size;
        cout << "Enter elements:\n";
        for (int i = 0; i < size; i++)
            cin >> v[i];
    }

    // Function to modify a given element
    void modify() {
        int index;
        T value;
        cout << "Enter index to modify (0-based): ";
        cin >> index;
        cout << "Enter new value: ";
        cin >> value;
        if (index >= 0 && index < size)
            v[index] = value;
        else
            cout << "Invalid index!\n";
    }

    // Function to multiply by a scalar
    void multiply() {
        T scalar;
        cout << "Enter scalar value: ";
        cin >> scalar;
        for (int i = 0; i < size; i++)
            v[i] = v[i] * scalar;
    }

    // Function to display the vector
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << v[i];
            if (i != size - 1)
                cout << ",";
        }
        cout << ")\n";
    }
};

int main() {
    Vector<int> vec; // You can also use Vector<float> or Vector<double>
    vec.create();
    cout << "Original Vector: ";
    vec.display();

    vec.modify();
    cout << "After modification: ";
    vec.display();

    vec.multiply();
    cout << "After multiplying by scalar: ";
    vec.display();

    return 0;
}