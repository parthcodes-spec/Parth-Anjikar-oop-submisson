// Program 6(a): Demonstrate Single Inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll;

public:
    void getStudentData() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Marks : public Student {
    int sub1, sub2, sub3;

public:
    void getMarks() {
        cout << "Enter marks in 3 subjects: ";
        cin >> sub1 >> sub2 >> sub3;
    }

    void displayResult() const {
        int total = sub1 + sub2 + sub3;
        float avg = total / 3.0;
        cout << "\nName: " << name << " | Roll: " << roll;
        cout << "\nTotal: " << total << " | Average: " << avg << endl;
    }
};

int main() {
    Marks m;
    m.getStudentData();
    m.getMarks();
    m.displayResult();
    return 0;
}