#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int marks[1000];
    int sum =0;
    int n;
    cout << "Enter the number of Employee: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee Marks: ";
        cin >> marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    int a = sum/n;
    cout << "Average Marks: " << a << endl;
}