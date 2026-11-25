#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int maths, phy, cpfMarks;
    int total;
    float avg, per;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;
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

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Subject                          Marks" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Mathematics                      " << maths << endl;
    cout << "Physics                          " << phy << endl;
    cout << "Computer Programming Foundation  " << cpfMarks << endl;
    cout << "------------------------------------------" << endl;
    cout << "Total Marks                      " << total << endl;
    cout << "Average Marks                    " << avg << endl;
    cout << "Percentage                       " << per << "%" << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
