#include <iostream>

using namespace std;

class SumCalculator {
private:
    int n;
    long sum;

public:
    // Parameterized constructor
    SumCalculator(int val) {
        n = val;
        sum = 0;
        // Calculate sum inside the constructor
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
    }

    void display_sum() {
        cout << "The value of n is: " << n << endl;
        cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;
    }
};

int main() {
    int n_value;
    cout << "Enter the value of n: ";
    cin >> n_value;

    // Pass 'n_value' to the constructor when creating the object
    SumCalculator calc(n_value);
    
    calc.display_sum();

    return 0;
}