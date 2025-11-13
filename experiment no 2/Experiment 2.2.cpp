
#include <iostream>

using namespace std;

class Account {
public:
    int Account_no;
    double balance;

    void accept_data() {
        cout << "Enter Account No: ";
        cin >> Account_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void apply_interest() {
        if (balance >= 5000) {
            balance = balance + (balance * 0.10);
            cout << "  (10% interest added)" << endl;
        }
    }

    void display_data() {
        cout << "Account No: " << Account_no << ", New Balance: " << balance << endl;
    }
};

int main() {
    const int ACCOUNT_COUNT = 10;
    Account accounts[ACCOUNT_COUNT];

    cout << "--- Enter details for 10 accounts ---" << endl;
    for (int i = 0; i < ACCOUNT_COUNT; ++i) {
        cout << "\nAccount " << (i + 1) << ":" << endl;
        accounts[i].accept_data();
    }

    cout << "\n--- Applying Interest (if balance >= 5000) ---" << endl;
    for (int i = 0; i < ACCOUNT_COUNT; ++i) {
        cout << "Account " << accounts[i].Account_no;
        accounts[i].apply_interest();
    }

    cout << "\n--- Final Account Balances ---" << endl;
    for (int i = 0; i < ACCOUNT_COUNT; ++i) {
        accounts[i].display_data();
    }

    return 0;
}
