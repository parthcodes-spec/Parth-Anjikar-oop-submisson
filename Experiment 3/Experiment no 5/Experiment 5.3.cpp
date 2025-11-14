#include <iostream>
#include <string>

using namespace std;

class College {
private:
    int roll_no;
    string name;
    string course;

public:
    // Constructor with default value for 'course'
    College(int r, string n, string c = "Computer Engineering") {
        roll_no = r;
        name = n;
        course = c;
    }

    void display_data() {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", Course: " << course << endl;
    }
};

int main() {
    // Create two objects
    
    // Object 1: Uses the default value for course
    College student1(101, "Alice");

    // Object 2: Overrides the default value
    College student2(102, "Bob", "Mechanical Engineering");

    cout << "--- Student Details ---" << endl;
    student1.display_data();
    student2.display_data();

    return 0;
}