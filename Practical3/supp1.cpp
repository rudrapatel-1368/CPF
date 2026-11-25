#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int maths, phy, cpfMarks, eng, elec;
    int total;
    float avg, per;

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

    cout << "Enter English Marks                : ";
    cin >> eng;

    cout << "Enter Electronics Marks            : ";
    cin >> elec;

    total = maths + phy + cpfMarks + eng + elec;
    avg = total / 5.0;
    per = (total / 500.0) * 100;

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Total Marks       : " << total << endl;
    cout << "Average Marks     : " << avg << endl;
    cout << "Percentage        : " << per << "%" << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
