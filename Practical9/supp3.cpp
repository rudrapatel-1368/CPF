#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    string dept;
    float salary;
};

int main()
{
    int n;
    Employee *emp = NULL;

    cout << "Enter Number of Employees : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid Number of Employees." << endl;
        return 0;
    }

    emp = new Employee[n];
    cout << "Dynamic Memory Allocated Successfully" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;

        cout << "Employee ID   : ";
        cin >> (emp + i)->id;
        cin.ignore();

        cout << "Employee Name : ";
        getline(cin, (emp + i)->name);

        cout << "Department    : ";
        cin >> (emp + i)->dept;

        cout << "Salary        : ";
        cin >> (emp + i)->salary;
        cout << endl;
    }

    cout << "--------------------------------------------------------" << endl;
    cout << left << setw(6) << "ID" << setw(20) << "Name" << setw(14) << "Department" << "Salary" << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    for (Employee *cur = emp; cur < emp + n; cur++)
    {
        cout << left << setw(6) << cur->id
             << setw(20) << cur->name
             << setw(14) << cur->dept
             << cur->salary << endl;
    }
    cout << "--------------------------------------------------------" << endl;

    delete[] emp;
    emp = NULL;
    cout << "Dynamic Memory Released Successfully" << endl;

    return 0;
}
