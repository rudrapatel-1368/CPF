#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;
void displayHeader();
void acceptStudentDetails();
void calculateAcademicResult();
void displayStudentReport();

string enrNo, name, branch, grade, result;
int sem, marks[5], total;
float per;

int main()
{
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();
    return 0;
}

void displayHeader()
{
    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

void acceptStudentDetails()
{
    cout << "----------- Student Registration -----------" << endl;
    cout << endl;

    cout << "Enter Enrollment Number : ";
    cin >> enrNo;
    cin.ignore();

    cout << "Enter Student Name      : ";
    getline(cin, name);

    cout << "Enter Branch            : ";
    cin >> branch;

    for (int i = 0; i < (int)branch.length(); i++)
    {
        branch[i] = toupper(branch[i]);
    }

    cout << "Enter Semester          : ";
    cin >> sem;

    cout << endl;
    cout << "Enter Marks" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> marks[i];
    }
}

void calculateAcademicResult()
{
    total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }

    per = (total / 500.0) * 100;

    if (per >= 90)
    {
        grade = "O";
    }
    else if (per >= 80)
    {
        grade = "A+";
    }
    else if (per >= 70)
    {
        grade = "A";
    }
    else if (per >= 60)
    {
        grade = "B+";
    }
    else if (per >= 50)
    {
        grade = "B";
    }
    else if (per >= 40)
    {
        grade = "C";
    }
    else
    {
        grade = "F";
    }

    if (per >= 40)
    {
        result = "PASS";
    }
    else
    {
        result = "FAIL";
    }
}

void displayStudentReport()
{
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Academic Report" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Enrollment Number : " << enrNo << endl;
    cout << endl;
    cout << "Student Name      : " << name << endl;
    cout << endl;
    cout << "Branch            : " << branch << endl;
    cout << endl;
    cout << "Semester          : " << sem << endl;
    cout << endl;
    cout << "Total Marks       : " << total << endl;
    cout << endl;
    cout << "Percentage        : " << per << "%" << endl;
    cout << endl;
    cout << "Grade             : " << grade << endl;
    cout << endl;
    cout << "Result            : " << result << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Program Executed Successfully Using User-defined Functions." << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
}
