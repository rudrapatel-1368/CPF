#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int maths, phy, cpfMarks;
    int total;
    float avg, per;
    string result;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;
    cout << endl;

    cout << "------------------------------------------" << endl;
    cout << "Academic Information" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << "Enter Mathematics Marks            : ";
    cin >> maths;

    cout << "Enter Physics Marks                : ";
    cin >> phy;

    cout << "Enter Programming Foundation Marks : ";
    cin >> cpfMarks;

    total = maths + phy + cpfMarks;
    avg = total / 3.0;
    per = (total / 300.0) * 100;

    result = "FAIL";
    if (per >= 40)
    {
        result = "PASS";
    }

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Total Marks       : " << total << endl;
    cout << "Average Marks     : " << avg << endl;
    cout << "Percentage        : " << per << "%" << endl;

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Academic Result" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << "Result            : " << result << endl;
    cout << endl;

    if (per >= 40)
    {
        cout << "Congratulations! You have successfully passed." << endl;
    }
    else
    {
        cout << "Sorry! You have failed. Better luck next time." << endl;
    }

    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
