#include <iostream>
#include <string>

using namespace std;

int main()
{
    string enroll1, name1, branch1, mobile1;
    string enroll2, name2, branch2, mobile2;
    string enroll3, name3, branch3, mobile3;
    int sem1, sem2, sem3;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;

    cout << endl;
    cout << "Student 1" << endl;
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

    cout << endl;
    cout << "Student 2" << endl;
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

    cout << endl;
    cout << "Student 3" << endl;
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

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Student 1" << endl;
    cout << "Enrollment Number : " << enroll1 << endl;
    cout << "Student Name      : " << name1 << endl;
    cout << "Branch            : " << branch1 << endl;
    cout << "Semester          : " << sem1 << endl;
    cout << "Mobile Number     : " << mobile1 << endl;
    cout << "------------------------------------------" << endl;
    cout << "Student 2" << endl;
    cout << "Enrollment Number : " << enroll2 << endl;
    cout << "Student Name      : " << name2 << endl;
    cout << "Branch            : " << branch2 << endl;
    cout << "Semester          : " << sem2 << endl;
    cout << "Mobile Number     : " << mobile2 << endl;
    cout << "------------------------------------------" << endl;
    cout << "Student 3" << endl;
    cout << "Enrollment Number : " << enroll3 << endl;
    cout << "Student Name      : " << name3 << endl;
    cout << "Branch            : " << branch3 << endl;
    cout << "Semester          : " << sem3 << endl;
    cout << "Mobile Number     : " << mobile3 << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
