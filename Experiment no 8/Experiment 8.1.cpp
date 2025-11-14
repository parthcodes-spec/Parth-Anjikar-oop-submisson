
#include <iostream>
using namespace std;

class MyString {
private:
    string str;
public:
    void input() {
        cout << "Enter string: ";
        cin >> str;
    }

    MyString operator+(MyString &obj) {
        MyString temp;
        temp.str = str + obj.str;
        return temp;
    }

    void display() {
        cout << "Resultant String: " << str << endl;
    }
};

int main() {
    MyString s1, s2, s3;

    cout << "Enter first string: ";
    s1.input();
    cout << "Enter second string: ";
    s2.input();

    s3 = s1 + s2; // concatenation

    s3.display();

    return 0;
}
