#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int maths, phy, cpfMarks;
    int total;
    float avg, per;
    string result, grade, perf;

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

    if (per >= 40)
    {
        result = "PASS";
    }
    else
    {
        result = "FAIL";
    }

    if (per >= 90)
    {
        grade = "O";
        perf = "Outstanding";
    }
    else if (per >= 80)
    {
        grade = "A+";
        perf = "Excellent";
    }
    else if (per >= 70)
    {
        grade = "A";
        perf = "Very Good";
    }
    else if (per >= 60)
    {
        grade = "B+";
        perf = "Good";
    }
    else if (per >= 50)
    {
        grade = "B";
        perf = "Satisfactory";
    }
    else if (per >= 40)
    {
        grade = "C";
        perf = "Needs Improvement";
    }
    else
    {
        grade = "F";
        perf = "Failed";
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
    cout << "Grade             : " << grade << endl;
    cout << "Performance       : " << perf << endl;

    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
