#include <iostream>
#include <string>

using namespace std;

class student {
private:
    int roll_no;
    string name;
    string student_class; // "class" is a keyword, so we use "student_class"

public:
    // Function to accept data
    void accept_data() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin.ignore(); // To consume the newline character left by cin
        getline(cin, name);
        cout << "Enter Class: ";
        getline(cin, student_class);
    }

    // Function to display data
    void display_data() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << student_class << endl;
    }
};

int main() {
    student s1; // Create one object of the student class

    cout << "Enter details for student 1:" << endl;
    s1.accept_data(); // Call accept function
    s1.display_data(); // Call display function

    return 0;
}