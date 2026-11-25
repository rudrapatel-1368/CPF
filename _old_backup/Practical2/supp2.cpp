#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Student details
    string enrollmentNo, studentName, branch, mobileNo;
    int semester;

    cout << "**********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

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

    // Display in table format
    cout << "\n+----------------------+----------------------+" << endl;
    cout << "| " << left << setw(20) << "Field" << " | " << setw(20) << "Details" << " |" << endl;
    cout << "+----------------------+----------------------+" << endl;
    cout << "| " << left << setw(20) << "Enrollment Number" << " | " << setw(20) << enrollmentNo << " |" << endl;
    cout << "| " << left << setw(20) << "Student Name" << " | " << setw(20) << studentName << " |" << endl;
    cout << "| " << left << setw(20) << "Branch" << " | " << setw(20) << branch << " |" << endl;
    cout << "| " << left << setw(20) << "Semester" << " | " << setw(20) << semester << " |" << endl;
    cout << "| " << left << setw(20) << "Mobile Number" << " | " << setw(20) << mobileNo << " |" << endl;
    cout << "+----------------------+----------------------+" << endl;

    return 0;
}
