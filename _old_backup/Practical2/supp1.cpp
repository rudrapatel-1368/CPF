#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Student details
    string enrollmentNo, studentName, branch, mobileNo;
    string dateOfBirth, gender, bloodGroup;
    int semester;

    cout << "**********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

    cout << "\nEnter Enrollment Number      : ";
    cin >> enrollmentNo;
    cin.ignore();

    cout << "Enter Student Name           : ";
    getline(cin, studentName);

    cout << "Enter Branch                 : ";
    cin >> branch;

    cout << "Enter Semester               : ";
    cin >> semester;

    cout << "Enter Mobile Number          : ";
    cin >> mobileNo;

    cout << "Enter Date of Birth (DD-MM-YYYY): ";
    cin >> dateOfBirth;

    cout << "Enter Gender                 : ";
    cin >> gender;

    cout << "Enter Blood Group            : ";
    cin >> bloodGroup;

    // Display report
    cout << "\n----------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "----------------------------------------------" << endl;

    cout << left << setw(20) << "Enrollment Number" << ": " << enrollmentNo << endl;
    cout << left << setw(20) << "Student Name" << ": " << studentName << endl;
    cout << left << setw(20) << "Branch" << ": " << branch << endl;
    cout << left << setw(20) << "Semester" << ": " << semester << endl;
    cout << left << setw(20) << "Mobile Number" << ": " << mobileNo << endl;
    cout << left << setw(20) << "Date of Birth" << ": " << dateOfBirth << endl;
    cout << left << setw(20) << "Gender" << ": " << gender << endl;
    cout << left << setw(20) << "Blood Group" << ": " << bloodGroup << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}
