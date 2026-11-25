#include <iostream>
#include <string>

using namespace std;

int main()
{
    string enrNo, name, branch, mobile;
    int sem;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;
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
    cout << "+---------------------+--------------------" << endl;
    cout << "| Field               | Details" << endl;
    cout << "+---------------------+--------------------" << endl;
    cout << "| Enrollment Number   | " << enrNo << endl;
    cout << "| Student Name        | " << name << endl;
    cout << "| Branch              | " << branch << endl;
    cout << "| Semester            | " << sem << endl;
    cout << "| Mobile Number       | " << mobile << endl;
    cout << "+---------------------+--------------------" << endl;

    return 0;
}
