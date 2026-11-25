#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    int count = 0;
    int sum = 0;
    float average;

    cout << "Enter positive integers (enter 0 or a negative number to stop)" << endl;
    cout << endl;

    cout << "Enter Number : ";
    cin >> num;

    while (num > 0)
    {
        count++;
        sum = sum + num;

        cout << "Enter Number : ";
        cin >> num;
    }

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Count of Numbers : " << count << endl;
    cout << "Sum of Numbers   : " << sum << endl;

    if (count > 0)
    {
        average = (float)sum / count;
        cout << fixed << setprecision(2);
        cout << "Average          : " << average << endl;
    }
    else
    {
        cout << "Average          : No numbers entered" << endl;
    }
    cout << "------------------------------------------" << endl;

    return 0;
}
