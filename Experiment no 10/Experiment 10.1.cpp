#include <iostream>
using namespace std;

template<class T>
T add(T arr[], int n) {
    T total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    const int n = 10;
    int intarr[n];
    float floatarr[n];
    double doublearr[n];

    cout << "Enter 10 Integer elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> intarr[i];
    }

    cout << "\nEnter 10 Float elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> floatarr[i];
    }

    cout << "\nEnter 10 Double elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> doublearr[i];
    }

    cout << "\nSum of Integer Array : " << add(intarr, n) <<endl;
    cout << "\nSum of Integer Array : " << add(floatarr, n) <<endl;
    cout << "\nSum of Integer Array : " << add(doublearr, n) <<endl;
}