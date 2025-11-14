#include <iostream>

using namespace std;

class student {
private:
    int roll_no;
    float percentage;

public:
    // 'this' pointer is used to distinguish between
    // member variables and parameters with the same name.
    void accept_data(int roll_no, float percentage) {
        this->roll_no = roll_no;
        this->percentage = percentage;
    }

    void display_data() {
        // 'this' is implicit here, but can be used explicitly.
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << this->roll_no << endl;
        cout << "Percentage: " << this->percentage << "%" << endl;
    }
};

int main() {
    student s1;
    s1.accept_data(101, 88.5); // Pass data to the function
    s1.display_data();
    return 0;
}