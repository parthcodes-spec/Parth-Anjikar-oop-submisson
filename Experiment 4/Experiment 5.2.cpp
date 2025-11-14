#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string name;
    float percentage;

public:
    // Parameterized constructor to initialize data
    student(string n, float p) {
        name = n;
        percentage = p;
        cout << "Constructor called for " << name << endl;
    }

    void display_data() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    // We "accept" data by passing it to the constructor
    // The problem statement is a bit ambiguous, but this is the
    // correct use of a constructor.
    
    // Create object and initialize it using the constructor
    student s1("Alice", 92.5);

    s1.display_data(); // Display the initialized data

    return 0;
}