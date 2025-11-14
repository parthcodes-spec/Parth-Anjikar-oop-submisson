// Program 6(c): Demonstrate Multiple Inheritance
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void getPerson() {
        cout << "Enter name: ";
        getline(cin, name);
    }
};

class Employee {
protected:
    int empID;

public:
    void getEmployee() {
        cout << "Enter employee ID: ";
        cin >> empID;
    }
};

class Teacher : public Person, public Employee {
    string subject;

public:
    void getTeacher() {
        cin.ignore();
        cout << "Enter subject taught: ";
        getline(cin, subject);
    }

    void display() {
        cout << "\nTeacher Details:\n";
        cout << "Name: " << name << "\nEmployee ID: " << empID
             << "\nSubject: " << subject << endl;
    }
};

int main() {
    Teacher t;
    cout << "--- Enter Teacher Details ---\n";
    t.getPerson();
    t.getEmployee();
    t.getTeacher();
    t.display();
    return 0;
}