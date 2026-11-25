#include <iostream>
#include <string>


using namespace std;

struct Product {
    int id;
    string name;
    int type;

    union {
        int expiry;
        int warranty;
    } uni;
};

int main() {
    Product p;

    cout << "Enter id: ";
    cin >> p.id;

    cout << "Enter name: ";
    cin >> p.name;

    cout << "Enter type (1 = Electronics, 2 = Food): ";
    cin >> p.type;

    if (p.type == 1) {
        cout << "Enter warranty (months): ";
        cin >> p.uni.warranty;
    }
    else if (p.type == 2) {
        cout << "Enter expiry (days): ";
        cin >> p.uni.expiry;
    }
    else {
        cout << "Invalid type!" << endl;
        return 1;
    }

    cout << "Id: " << p.id << endl;
    cout << "Name: " << p.name << endl;

    if (p.type == 1) {
        cout << "Electronics, warranty: " << p.uni.warranty << " months" << endl;
    }
    else if (p.type == 2) {
        cout << "Food, expiry: " << p.uni.expiry << " days" << endl;
    }

    return 0;
}