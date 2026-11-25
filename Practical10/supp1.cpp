#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    string desig;
    float salary;
};

int main()
{
    Employee emp[50];
    int n;

    cout << "Enter Number of Employees : ";
    cin >> n;
    cout << endl;

    if (n < 1 || n > 50)
    {
        cout << "Number of Employees must be between 1 and 50." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;

        cout << "Employee ID   : ";
        cin >> emp[i].id;
        cin.ignore();

        cout << "Employee Name : ";
        getline(cin, emp[i].name);

        cout << "Designation   : ";
        getline(cin, emp[i].desig);

        cout << "Salary        : ";
        cin >> emp[i].salary;
        cout << endl;
    }

    cout << "------------------------------------------------------------" << endl;
    cout << "                    EMPLOYEE REPORT" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << left << setw(8) << "ID" << setw(20) << "Name" << setw(20) << "Designation" << "Salary" << endl;
    cout << "------------------------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(8) << emp[i].id
             << setw(20) << emp[i].name
             << setw(20) << emp[i].desig
             << emp[i].salary << endl;
    }
    cout << "------------------------------------------------------------" << endl;

    return 0;
}
