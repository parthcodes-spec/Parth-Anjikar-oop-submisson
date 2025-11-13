#include <iostream>
#include <string>

using namespace std;

class Staff {
public:
    string name;
    string post;

    void accept_data() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Post (e.g., 'Teacher', 'HOD'): ";
        getline(cin, post);
    }
};

int main() {
    const int STAFF_COUNT = 5;
    Staff staff_members[STAFF_COUNT];

    cout << "--- Enter details for 5 staff members ---" << endl;
    for (int i = 0; i < STAFF_COUNT; ++i) {
        cout << "\nStaff Member " << (i + 1) << ":" << endl;
        staff_members[i].accept_data();
    }

    cout << "\n--- Staff Members who are 'HOD' ---" << endl;
    bool found_hod = false;
    for (int i = 0; i < STAFF_COUNT; ++i) {
        if (staff_members[i].post == "HOD") {
            cout << staff_members[i].name << endl;
            found_hod = true;
        }
    }

    if (!found_hod) {
        cout << "No staff members found with the post 'HOD'." << endl;
    }

    return 0;
}