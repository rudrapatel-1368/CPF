#include <iostream>
#include <cstdlib>

using namespace std;

struct Book {
    int id;
    char title[100];
    char author[50];
    float price;
    int qty;
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    if (n < 1) {
        cout << "Need at least 1 book.\n";
        return 1;
    }

    Book *b = (Book*) malloc(n * sizeof(Book));
    if (b == NULL) {
        cout << "Memory allocation failed.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "ID: ";
        cin >> b[i].id;
        cin.ignore();                       // eat the leftover Enter
        cout << "Title: ";
        cin.getline(b[i].title, 100);       // reads spaces too
        cout << "Author: ";
        cin.getline(b[i].author, 50);
        cout << "Price: ";
        cin >> b[i].price;
        cout << "Quantity: ";
        cin >> b[i].qty;
    }

    cout << "\nBook Inventory:\n";
    for (int i = 0; i < n; i++) {
        float value = b[i].price * b[i].qty;

        cout << "\nID: " << b[i].id << endl;
        cout << "Title: " << b[i].title << endl;
        cout << "Author: " << b[i].author << endl;
        cout << "Price: " << b[i].price << endl;
        cout << "Quantity: " << b[i].qty << endl;
        cout << "Inventory value: " << value << endl;
    }

    free(b);
    b = NULL;

    return 0;
}