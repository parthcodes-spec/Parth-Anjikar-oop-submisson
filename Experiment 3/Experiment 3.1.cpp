#include <iostream>
#include <string>

using namespace std;

class book {
public:
    string book_title;
    string author_name;
    float price;

    void accept_data() {
        cout << "Enter Book Title: ";
        getline(cin, book_title);
        cout << "Enter Author Name: ";
        getline(cin, author_name);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display_data() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << book_title << endl;
        cout << "Author: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    book b1;       // Create a book object
    book *ptr;    // Create a pointer to a book object
    ptr = &b1;    // Point the pointer to the b1 object

    cout << "Enter book details:" << endl;
    
    // Use the arrow operator (->) to access members via a pointer
    ptr->accept_data(); 
    ptr->display_data();

    return 0;
}