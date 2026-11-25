#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Student details
    string enrollmentNo;
    string studentName;
    string branch;
    int semester;
    string mobileNo;

    // Title
    cout << "**********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

    // Project information
    cout << "\n" << left << setw(20) << "Software Version" << ": 1.1" << endl;
    cout << left << setw(20) << "Institute" << ": CHARUSAT University" << endl;
    cout << left << setw(20) << "Academic Year" << ": 2026-27" << endl;

    // Student registration
    cout << "\n----------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "----------------------------------------------" << endl;

    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNo;
    cin.ignore();

    cout << "Enter Student Name      : ";
    getline(cin, studentName);

    cout << "Enter Branch            : ";
    cin >> branch;

    cout << "Enter Semester          : ";
    cin >> semester;

    cout << "Enter Mobile Number     : ";
    cin >> mobileNo;

    // Display report
    cout << "\n----------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "----------------------------------------------" << endl;

    cout << left << setw(20) << "Enrollment Number" << ": " << enrollmentNo << endl;
    cout << left << setw(20) << "Student Name" << ": " << studentName << endl;
    cout << left << setw(20) << "Branch" << ": " << branch << endl;
    cout << left << setw(20) << "Semester" << ": " << semester << endl;
    cout << left << setw(20) << "Mobile Number" << ": " << mobileNo << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}
