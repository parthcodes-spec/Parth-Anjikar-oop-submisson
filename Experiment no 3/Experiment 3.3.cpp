#include <iostream>
#include <string>

using namespace std;

// The outer class
class Person {
private:
    string name;

    // The nested (inner) class
    class Address {
    private:
        string street;
        string city;
        string zip;
    public:
        void set_address(string s, string c, string z) {
            street = s;
            city = c;
            zip = z;
        }
        void display_address() {
            cout << "Address: " << street << ", " << city << ", " << zip << endl;
        }
    };

    Address addr; // Outer class has an object of the inner class

public:
    void set_person(string n, string s, string c, string z) {
        name = n;
        addr.set_address(s, c, z); // Outer class can access private inner class
    }

    void display_person() {
        cout << "Name: " << name << endl;
        addr.display_address();
    }
};

int main() {
    Person p1;
    p1.set_person("Alice", "123 Main St", "Anytown", "12345");
    p1.display_person();

    return 0;
}