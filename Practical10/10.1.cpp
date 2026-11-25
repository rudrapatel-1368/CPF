#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Part B - Nested structures
struct AcademicInformation
{
    int sem;
    float per;
    string grade;
};

struct ContactInformation
{
    string mobile;
    string email;
};

// Part A - Student structure
struct Student
{
    string enrNo;
    string name;
    string branch;
    AcademicInformation acad;
    ContactInformation contact;
};

// Part D - Pointer to Structure
void displayStudentDetails(Student *student);
void displayAcademicInformation(Student *student);
void updateContactInformation(Student *student);

int main()
{
    // Part C - Array of structures
    Student stu[50];
    int n;
    int sNo;
    char choice;

    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "Enter Number of Students : ";
    cin >> n;
    cout << endl;

    if (n < 1 || n > 50)
    {
        cout << "Number of Students must be between 1 and 50." << endl;
        return 0;
    }

    cout << "--------------------------------------------" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << endl;

        cout << "Enrollment Number : ";
        cin >> stu[i].enrNo;
        cin.ignore();
        cout << endl;

        cout << "Student Name      : ";
        getline(cin, stu[i].name);
        cout << endl;

        cout << "Branch            : ";
        cin >> stu[i].branch;
        cout << endl;

        cout << "Semester          : ";
        cin >> stu[i].acad.sem;
        cout << endl;

        cout << "Percentage        : ";
        cin >> stu[i].acad.per;
        cout << endl;

        cout << "Grade             : ";
        cin >> stu[i].acad.grade;
        cout << endl;

        cout << "Mobile Number     : ";
        cin >> stu[i].contact.mobile;
        cout << endl;

        cout << "Email ID          : ";
        cin >> stu[i].contact.email;
        cout << endl;

        cout << "--------------------------------------------" << endl;
        cout << endl;
    }

    cout << "Update Contact Information? (Y/N) : ";
    cin >> choice;
    cout << endl;

    if (choice == 'Y' || choice == 'y')
    {
        cout << "Enter Student Number (1 to " << n << ") : ";
        cin >> sNo;
        cout << endl;

        if (sNo >= 1 && sNo <= n)
        {
            updateContactInformation(&stu[sNo - 1]);
        }
        else
        {
            cout << "Invalid Student Number." << endl;
            cout << endl;
        }
        cout << "--------------------------------------------" << endl;
        cout << endl;
    }

    cout << "Student Records" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        displayStudentDetails(&stu[i]);
    }

    cout << "Program Executed Successfully" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

void displayStudentDetails(Student *student)
{
    cout << student->enrNo << " " << student->name << " " << student->branch << endl;
    cout << endl;

    displayAcademicInformation(student);

    cout << "Mobile : " << student->contact.mobile << endl;
    cout << endl;
    cout << "Email : " << student->contact.email << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
}

void displayAcademicInformation(Student *student)
{
    cout << fixed << setprecision(2);
    cout << "Semester : " << student->acad.sem << endl;
    cout << endl;
    cout << "Percentage : " << student->acad.per << endl;
    cout << endl;
    cout << "Grade : " << student->acad.grade << endl;
    cout << endl;
}

void updateContactInformation(Student *student)
{
    cout << "New Mobile Number : ";
    cin >> student->contact.mobile;
    cout << endl;

    cout << "New Email ID      : ";
    cin >> student->contact.email;
    cout << endl;

    cout << "Contact Information Updated Successfully." << endl;
    cout << endl;
}
