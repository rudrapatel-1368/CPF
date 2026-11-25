#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Details of three students (no loops used)
    string enroll1, name1, branch1, mobile1;
    string enroll2, name2, branch2, mobile2;
    string enroll3, name3, branch3, mobile3;
    int sem1, sem2, sem3;

    cout << "**********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

    // Student 1
    cout << "\n--- Student 1 ---" << endl;
    cout << "Enter Enrollment Number : ";
    cin >> enroll1;
    cin.ignore();
    cout << "Enter Student Name      : ";
    getline(cin, name1);
    cout << "Enter Branch            : ";
    cin >> branch1;
    cout << "Enter Semester          : ";
    cin >> sem1;
    cout << "Enter Mobile Number     : ";
    cin >> mobile1;

    // Student 2
    cout << "\n--- Student 2 ---" << endl;
    cout << "Enter Enrollment Number : ";
    cin >> enroll2;
    cin.ignore();
    cout << "Enter Student Name      : ";
    getline(cin, name2);
    cout << "Enter Branch            : ";
    cin >> branch2;
    cout << "Enter Semester          : ";
    cin >> sem2;
    cout << "Enter Mobile Number     : ";
    cin >> mobile2;

    // Student 3
    cout << "\n--- Student 3 ---" << endl;
    cout << "Enter Enrollment Number : ";
    cin >> enroll3;
    cin.ignore();
    cout << "Enter Student Name      : ";
    getline(cin, name3);
    cout << "Enter Branch            : ";
    cin >> branch3;
    cout << "Enter Semester          : ";
    cin >> sem3;
    cout << "Enter Mobile Number     : ";
    cin >> mobile3;

    // Display all records
    cout << "\n----------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "Enrollment" << setw(20) << "Name" << setw(10) << "Branch"
         << setw(10) << "Semester" << setw(15) << "Mobile" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << left << setw(15) << enroll1 << setw(20) << name1 << setw(10) << branch1
         << setw(10) << sem1 << setw(15) << mobile1 << endl;
    cout << left << setw(15) << enroll2 << setw(20) << name2 << setw(10) << branch2
         << setw(10) << sem2 << setw(15) << mobile2 << endl;
    cout << left << setw(15) << enroll3 << setw(20) << name3 << setw(10) << branch3
         << setw(10) << sem3 << setw(15) << mobile3 << endl;
    cout << "----------------------------------------------------------------------" << endl;

    return 0;
}
