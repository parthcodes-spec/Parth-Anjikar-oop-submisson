// Program 6(b): Demonstrate Multilevel Inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
};

class Marks : public Student {
protected:
    int sub1, sub2, sub3;

public:
    void getMarks() {
        cout << "Enter marks in 3 subjects: ";
        cin >> sub1 >> sub2 >> sub3;
    }
};

class Result : public Marks {
public:
    void display() {
        int total = sub1 + sub2 + sub3;
        float per = total / 3.0;
        cout << "\nRoll No: " << roll
             << "\nName: " << name
             << "\nTotal: " << total
             << "\nPercentage: " << per << "%" << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}