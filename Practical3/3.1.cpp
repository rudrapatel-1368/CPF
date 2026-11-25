#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string enrNo;
    string name;
    string branch;
    int sem;
    string mobile;

    int maths, phy, cpfMarks;
    int total;
    float avg, per;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;
    cout << endl;
    cout << "Software Version : 1.2" << endl;
    cout << endl;

    cout << "------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << "Enter Enrollment Number : ";
    cin >> enrNo;
    cin.ignore();

    cout << "Enter Student Name      : ";
    getline(cin, name);

    cout << "Enter Branch            : ";
    cin >> branch;

    cout << "Enter Semester          : ";
    cin >> sem;

    cout << "Enter Mobile Number     : ";
    cin >> mobile;

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
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << "Enrollment Number : " << enrNo << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << sem << endl;
    cout << "Mobile Number     : " << mobile << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
