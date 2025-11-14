#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v(10);
    
    for (size_t i = 0; i < v.size(); i++) {
        v[i] = i; 
    }
    
    int n, n1;
    cout << "\nEnter the number to be changed and the number it should be changed to: ";
    cin >> n >> n1;

    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it == n) {
            *it = n1;
        }
    }
    
    cout << "\nCurrent contents:\n";
    for (const int& x : v) {
        cout << x << " ";
    }
    cout << "\n\nEnter your scalar value to be added to the entire vector: ";

    int val;
    cin >> val;

    for (auto it = v.begin(); it != v.end(); ++it) {
        *it += val;
    }
    
    cout << "\nAfter adding scalar value, the contents are:\n";
    for (const int& x : v) {
        cout << x << " ";
    }
    cout << endl;

    int a = 10;
    for (auto it = v.begin(); it != v.end(); ++it) {
        *it = a;
        a += 10;
    }
    
    cout << "\nChanged form of the vector:\n";
    for (const int& x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}