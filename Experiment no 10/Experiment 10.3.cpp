#include <iostream>
#include <cmath>
using namespace std;

template<class T>
class A {
public:
    T m1, m2;

    void accept() {
        cout << "Enter the first number: ";
        cin >> m1;
        cout << "Enter the second number: ";
        cin >> m2;
    }

    void calc() {
        int choice;
        cout << "\n--- Simple Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Multiplication\n";
        cout << "3. Division\n";
        cout << "4. Subtraction\n";
        cout << "5. Square Root\n";
        cout << "6. Percentage (m1 is what % of m2)\n";
        cout << "7. Power (square of both numbers)\n";
        cout << "8. Trigonometric (sin values)\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Sum = " << m1 + m2 << endl;
                break;

            case 2:
                cout << "Multiplication = " << m1 * m2 << endl;
                break;

            case 3:
                cout << "Division = " << (m1/m2) << endl;
                break;

            case 4:
                cout << "Subtraction = " << m1 - m2 << endl;
                break;

            case 5:
                cout << "Square root of " << m1 << " = " << sqrt(m1) << endl;
                cout << "Square root of " << m2 << " = " << sqrt(m2) << endl;
                break;

            case 6:
                cout << m1 << " is " << ((m1 * 100.0) / m2) << "% of " << m2 << endl;
                break;

            case 7:
                cout << "Square of " << m1 << " = " << pow(m1, 2) << endl;
                cout << "Square of " << m2 << " = " << pow(m2, 2) << endl;
                break;

            case 8:
                cout << "sin(" << m1 << ") = " << sin(m1) << endl;
                cout << "sin(" << m2 << ") = " << sin(m2) << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
};

int main() {
    A<double> obj;
    obj.accept();
    obj.calc();
    return 0;
}