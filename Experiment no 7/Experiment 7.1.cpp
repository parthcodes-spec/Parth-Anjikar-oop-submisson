#include <iostream>
using namespace std;

class Sum {
public:
    float calculate(float a, float b, float c, float d, float e) {
        return a + b + c + d + e;
    }

    int calculate(int arr[], int size) {
        int total = 0;
        for(int i = 0; i < size; i++)
            total += arr[i];
        return total;
    }
};

int main() {
    Sum s;
    float a, b, c, d, e;
    cout << "Enter 5 float values: ";
    cin >> a >> b >> c >> d >> e;
    cout << "Sum of 5 floats = " << s.calculate(a,b,c,d,e) << endl;

    int arr[10];
    cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "Sum of 10 integers = " << s.calculate(arr, 10) << endl;

    return 0;
}