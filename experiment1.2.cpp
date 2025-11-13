
#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string book_name;
    float price;
    int no_of_pages;

    void accept_data() {
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Pages: ";
        cin >> no_of_pages;
    }
};

int main() {
    Book book1, book2;

    cout << "Enter details for Book 1:" << endl;
    book1.accept_data();

    cout << "\nEnter details for Book 2:" << endl;
    book2.accept_data();

    cout << "\n--- Comparison ---" << endl;
    if (book1.price > book2.price) {
        cout << "Book with greater price: " << book1.book_name << endl;
    } else if (book2.price > book1.price) {
        cout << "Book with greater price: " << book2.book_name << endl;
    } else {
        cout << "Both books have the same price." << endl;
    }

    return 0;
}
