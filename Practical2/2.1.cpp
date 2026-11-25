#include <iostream>
#include <string>

using namespace std;

int main()
{
    string enrNo = "26CSE001";
    string name = "Akshar Patel";
    string branch = "CSE";
    int sem = 1;
    string mobile = "9999999999";

    cout << "**********************************************" << endl;
    cout << "   * STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;
    cout << endl;

    cout << "Enter Enrollment Number : " << enrNo << endl;
    cout << "Enter Student Name : " << name << endl;
    cout << "Enter Branch : " << branch << endl;
    cout << "Enter Semester : " << sem << endl;
    cout << "Enter Mobile Number : " << mobile << endl;
    cout << endl;

    cout << "------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Enrollment Number : " << enrNo << endl;
    cout << "Student Name : " << name << endl;
    cout << "Branch : " << branch << endl;
    cout << "Semester : " << sem << endl;
    cout << "Mobile Number : " << mobile << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}
