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

    void operator-() {
        x = -x;
    }

    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Number n;
    n.input();
    -n;    // Unary minus operator
    n.display();
    return 0;
}