#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string enrNo = "";
    string name = "";
    string branch = "";
    int sem = 0;
    string mobile = "";

    int n = 0;
    int marks;
    int total = 0;
    float avg = 0, per = 0;
    string result, grade, perf;

    int reg = 0;
    int marksDone = 0;

    int choice;
    char again;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;

    do
    {
        cout << endl;
        cout << "------------- MAIN MENU ------------------" << endl;
        cout << endl;
        cout << "1. Register New Student" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Enter Student Marks" << endl;
        cout << "4. Display Academic Result" << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            // Option 1 : Register New Student
            case 1:
                cout << "Student Registration" << endl;
                cout << endl;

                again = 'Y';

                while (again == 'Y' || again == 'y')
                {
                    cout << "Enrollment Number : ";
                    cin >> enrNo;
                    cin.ignore();

                    cout << "Student Name      : ";
                    getline(cin, name);

                    cout << "Branch            : ";
                    cin >> branch;

                    cout << "Semester          : ";
                    cin >> sem;

                    cout << "Mobile Number     : ";
                    cin >> mobile;

                    reg = 1;

                    cout << endl;
                    cout << "Student Registered Successfully." << endl;
                    cout << endl;

                    cout << "Register Another Student? (Y/N) : ";
                    cin >> again;

                    if (again == 'Y' || again == 'y')
                    {
                        cout << endl;
                        cout << "------------------------------------------" << endl;
                        cout << endl;
                    }
                }

                cout << endl;
                cout << "Returning to Main Menu..." << endl;
                break;

            // Option 2 : Display Student Record
            case 2:
                cout << "------------------------------------------" << endl;
                cout << "Student Record" << endl;
                cout << "------------------------------------------" << endl;
                cout << endl;

                if (reg == 0)
                {
                    cout << "No Student Registered Yet." << endl;
                }
                else
                {
                    cout << "Enrollment Number : " << enrNo << endl;
                    cout << "Student Name      : " << name << endl;
                    cout << "Branch            : " << branch << endl;
                    cout << "Semester          : " << sem << endl;
                    cout << "Mobile Number     : " << mobile << endl;
                }

                cout << endl;
                cout << "------------------------------------------" << endl;
                break;

            // Option 3 : Enter Student Marks
            // Option 4 : Display Academic Result
            case 3:
            case 4:
                if (choice == 3)
                {
                    cout << "Enter Number of Subjects : ";
                    cin >> n;
                    cout << endl;

                    total = 0;
                    for (int i = 1; i <= n; i++)
                    {
                        cout << "Enter Marks of Subject " << i << " : ";
                        cin >> marks;
                        total = total + marks;
                    }

                    marksDone = 1;
                    cout << endl;
                }

                if (marksDone == 0 || n <= 0)
                {
                    cout << "Please Enter Student Marks First." << endl;
                    break;
                }

                avg = (float)total / n;
                per = ((float)total / (n * 100)) * 100;

                if (per >= 40)
                {
                    result = "PASS";
                }
                else
                {
                    result = "FAIL";
                }

                if (per >= 90)
                {
                    grade = "O";
                    perf = "Outstanding";
                }
                else if (per >= 80)
                {
                    grade = "A+";
                    perf = "Excellent";
                }
                else if (per >= 70)
                {
                    grade = "A";
                    perf = "Very Good";
                }
                else if (per >= 60)
                {
                    grade = "B+";
                    perf = "Good";
                }
                else if (per >= 50)
                {
                    grade = "B";
                    perf = "Satisfactory";
                }
                else if (per >= 40)
                {
                    grade = "C";
                    perf = "Needs Improvement";
                }
                else
                {
                    grade = "F";
                    perf = "Failed";
                }

                cout << "------------------------------------------" << endl;
                cout << "Academic Result" << endl;
                cout << "------------------------------------------" << endl;
                cout << endl;

                cout << fixed << setprecision(2);
                cout << "Total Marks       : " << total << endl;
                cout << "Average Marks     : " << avg << endl;
                cout << "Percentage        : " << per << "%" << endl;
                cout << endl;
                cout << "Result            : " << result << endl;
                cout << "Grade             : " << grade << endl;
                cout << "Performance       : " << perf << endl;

                cout << endl;
                cout << "------------------------------------------" << endl;
                break;

            // Option 5 : Exit
            case 5:
                cout << "Exiting the Application..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please Try Again." << endl;
        }

    } while (choice != 5);

    return 0;
}
