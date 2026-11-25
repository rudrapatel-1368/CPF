#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int marks;
    int total = 0;
    float avg;

    cout << "******************************************" << endl;
    cout << "       TRAINING ASSESSMENT SYSTEM" << endl;
    cout << "******************************************" << endl;
    cout << endl;

    cout << "Enter Number of Employees : ";
    cin >> n;

    if (n < 1 || n > 1000)
    {
        cout << "Number of Employees must be between 1 and 1000." << endl;
        return 0;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Marks of Employee " << i << " : ";
        cin >> marks;
        total = total + marks;
    }

    avg = (float)total / n;

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Score   : " << total << endl;
    cout << "Average Score : " << avg << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
