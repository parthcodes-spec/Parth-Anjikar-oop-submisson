#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // ---------- STACK IMPLEMENTATION ----------
    stack<int> s;
    int choice, value;

    cout << "---- STACK OPERATIONS ----\n";
    do {
        cout << "\n1. Push\n2. Pop\n3. Display Top\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                if (!s.empty()) {
                    cout << "Popped: " << s.top() << endl;
                    s.pop();
                } else
                    cout << "Stack is empty!\n";
                break;

            case 3:
                if (!s.empty())
                    cout << "Top element: " << s.top() << endl;
                else
                    cout << "Stack is empty!\n";
                break;

            case 4:
                cout << "Exiting Stack Operations...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    // ---------- QUEUE IMPLEMENTATION ----------
    queue<int> q;
    cout << "\n---- QUEUE OPERATIONS ----\n";
    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display Front\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.push(value);
                break;

            case 2:
                if (!q.empty()) {
                    cout << "Dequeued: " << q.front() << endl;
                    q.pop();
                } else
                    cout << "Queue is empty!\n";
                break;

            case 3:
                if (!q.empty())
                    cout << "Front element: " << q.front() << endl;
                else
                    cout << "Queue is empty!\n";
                break;

            case 4:
                cout << "Exiting Queue Operations...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}