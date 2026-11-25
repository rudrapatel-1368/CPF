#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    float basic;
    float hra;
    float da;
    float gross;
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Enter between 1 and 100 employees.\n";
        return 1;
    }

    Employee e[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: ";            cin >> e[i].id;
        cout << "Name: ";          cin >> e[i].name;
        cout << "Basic salary: ";  cin >> e[i].basic;
        cout << "HRA: ";           cin >> e[i].hra;
        cout << "DA: ";            cin >> e[i].da;

        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    int maxIndex = 0;

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nID: " << e[i].id << endl;
        cout << "Name: " << e[i].name << endl;
        cout << "Basic: " << e[i].basic << endl;
        cout << "HRA: " << e[i].hra << endl;
        cout << "DA: " << e[i].da << endl;
        cout << "Gross salary: " << e[i].gross << endl;

        if (e[i].gross > e[maxIndex].gross) {
            maxIndex = i;
        }
    }

    cout << "\nHighest gross salary: " << e[maxIndex].name
         << " (ID " << e[maxIndex].id << ") with " << e[maxIndex].gross << endl;

    return 0;
}