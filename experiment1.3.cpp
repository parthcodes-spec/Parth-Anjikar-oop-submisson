#include <iostream>

using namespace std;

class time {
private:
    int HH, MM, SS;

public:
    void accept_time() {
        cout << "Enter time in HH:MM:SS format: ";
        scanf("%d:%d:%d", &HH, &MM, &SS);
    }

    void display_total_seconds() {
        long total_seconds = (HH * 3600) + (MM * 60) + SS;
        cout << "\nTime: " << HH << ":" << MM << ":" << SS << endl;
        cout << "Total seconds: " << total_seconds << endl;
    }
};

int main() {
    time t1;
    t1.accept_time();
    t1.display_total_seconds();
    return 0;
}