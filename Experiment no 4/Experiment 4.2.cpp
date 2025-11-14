#include <iostream>

using namespace std;

// Forward declaration of class B
class B; 

class A {
private:
    int num1;
public:
    void set_data(int val) { num1 = val; }
    // Declare friend function
    friend void find_greatest(A objA, B objB);
};

class B {
private:
    int num2;
public:
    void set_data(int val) { num2 = val; }
    // Declare friend function
    friend void find_greatest(A objA, B objB);
};

// Define the friend function
// It can access private members of both A and B
void find_greatest(A objA, B objB) {
    cout << "Number from Class A: " << objA.num1 << endl;
    cout << "Number from Class B: " << objB.num2 << endl;

    if (objA.num1 > objB.num2) {
        cout << "Greatest number is: " << objA.num1 << endl;
    } else if (objB.num2 > objA.num1) {
        cout << "Greatest number is: " << objB.num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}

int main() {
    A a;
    B b;

    a.set_data(150);
    b.set_data(99);

    find_greatest(a, b);

    return 0;
}