#include <iostream>

using namespace std;

// This problem is interpreted as "demonstrate passing objects to a function".
// We create one class 'Student' and a function 'calculate_average'
// that takes two 'Student' objects.

class Student {
public:
    int marks;

    void get_marks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

// This function takes two Student objects as arguments
void calculate_average(Student s1, Student s2) {
    double avg = (s1.marks + s2.marks) / 2.0;
    cout << "Marks of Student 1: " << s1.marks << endl;
    cout << "Marks of Student 2: " << s2.marks << endl;
    cout << "Average marks: " << avg << endl;
}

int main() {
    Student student1, student2;

    cout << "For Student 1:" << endl;
    student1.get_marks();

    cout << "For Student 2:" << endl;
    student2.get_marks();

    cout << "\n--- Calculating Average ---" << endl;
    calculate_average(student1, student2); // Pass objects to the function

    return 0;
}