#include <iostream>
#include <cstdlib>

using namespace std;

struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    if (n < 1) {
        cout << "Need at least 1 item.\n";
        return 1;
    }

    Item *cart = (Item*) malloc(n * sizeof(Item));
    if (cart == NULL) {
        cout << "Memory allocation failed.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << "\n";
        cout << "ID: ";        cin >> cart[i].id;
        cout << "Name: ";      cin >> cart[i].name;
        cout << "Quantity: ";  cin >> cart[i].qty;
        cout << "Price: ";     cin >> cart[i].price;
    }

    char choice;
    cout << "\nAdd more items? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int extra;
        cout << "How many more? ";
        cin >> extra;

        if (extra > 0) {
            Item *temp = (Item*) realloc(cart, (n + extra) * sizeof(Item));
            if (temp == NULL) {
                cout << "Could not expand cart.\n";
                free(cart);
                return 1;
            }
            cart = temp;

            for (int i = n; i < n + extra; i++) {
                cout << "\nItem " << i + 1 << "\n";
                cout << "ID: ";        cin >> cart[i].id;
                cout << "Name: ";      cin >> cart[i].name;
                cout << "Quantity: ";  cin >> cart[i].qty;
                cout << "Price: ";     cin >> cart[i].price;
            }
            n += extra;
        }
    }

    float total = 0;
    int maxIndex = 0;

    cout << "\nYour Cart:\n";
    for (int i = 0; i < n; i++) {
        float subtotal = cart[i].qty * cart[i].price;

        cout << "\nItem " << i + 1 << endl;
        cout << "ID: " << cart[i].id << endl;
        cout << "Name: " << cart[i].name << endl;
        cout << "Quantity: " << cart[i].qty << endl;
        cout << "Price: " << cart[i].price << endl;
        cout << "Subtotal: " << subtotal << endl;

        total += subtotal;

        if (cart[i].price > cart[maxIndex].price) {
            maxIndex = i;
        }
    }

    cout << "\nTotal bill: " << total << endl;
    cout << "Most expensive item: " << cart[maxIndex].name << endl;
    cout << "Price: " << cart[maxIndex].price << endl;

    free(cart);
    cart = NULL;

    return 0;
}