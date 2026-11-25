#include <iostream>
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

    // Title of the application
    cout << "**********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

    // Input student information
    cout << "\nEnter Enrollment Number : ";
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

    // Display student information
    cout << "\n----------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "----------------------------------------------" << endl;

    cout << "Enrollment Number : " << enrollmentNo << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Mobile Number     : " << mobileNo << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}
