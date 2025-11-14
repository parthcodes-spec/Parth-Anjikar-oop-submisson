#include <iostream>
using namespace std;

class Number {
private:
    int x;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> x;
    }

    void operator++() {
        x = x + 1;
    }

    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Number n;

    n.input();

    ++n;
    cout << "After Pre-Increment: ";
    n.display();

    return 0;
}