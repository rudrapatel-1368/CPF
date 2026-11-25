// Supplementary Problems of Practical 4
// 1. Distinction / First Class classification
// 2. Menu option to display the grading policy
// 3. Confirmation message before exiting
// 4. Merit certificate eligibility based on grade

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int maths = 0, phy = 0, cpfMarks = 0;
    int total = 0;
    float avg = 0, per = 0;
    string result, grade, perf, cls, merit;

    int marksDone = 0;
    int choice;
    char confirm;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;

mainMenu:
    cout << endl;
    cout << "------------- MAIN MENU ------------------" << endl;
    cout << endl;
    cout << "1. Enter Student Marks" << endl;
    cout << "2. Display Academic Result" << endl;
    cout << "3. Display Grading Policy" << endl;
    cout << "4. Exit" << endl;
    cout << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        // Option 1 : Enter Student Marks
        case 1:
            cout << "------------------------------------------" << endl;
            cout << "Academic Information" << endl;
            cout << "------------------------------------------" << endl;
            cout << endl;

            cout << "Enter Mathematics Marks            : ";
            cin >> maths;

            cout << "Enter Physics Marks                : ";
            cin >> phy;

            cout << "Enter Programming Foundation Marks : ";
            cin >> cpfMarks;

            marksDone = 1;

            cout << endl;
            cout << "Marks Entered Successfully." << endl;
            goto mainMenu;

        // Option 2 : Display Academic Result
        case 2:
            if (marksDone == 0)
            {
                cout << "Please Enter Student Marks First." << endl;
                goto mainMenu;
            }

            total = maths + phy + cpfMarks;
            avg = total / 3.0;
            per = (total / 300.0) * 100;

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

            // Supplementary 1 : Classification
            if (per >= 70)
            {
                cls = "Distinction";
            }
            else if (per >= 60)
            {
                cls = "First Class";
            }
            else if (per >= 50)
            {
                cls = "Second Class";
            }
            else if (per >= 40)
            {
                cls = "Pass Class";
            }
            else
            {
                cls = "Fail";
            }

            // Supplementary 4 : Merit certificate
            if (grade == "O" || grade == "A+")
            {
                merit = "Eligible";
            }
            else
            {
                merit = "Not Eligible";
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
            cout << "Class             : " << cls << endl;
            cout << "Merit Certificate : " << merit << endl;

            cout << endl;
            cout << "------------------------------------------" << endl;
            goto mainMenu;

        // Option 3 : Display Grading Policy
        case 3:
            cout << "------------------------------------------" << endl;
            cout << "Grading Policy" << endl;
            cout << "------------------------------------------" << endl;
            cout << "Percentage   Grade   Performance" << endl;
            cout << "------------------------------------------" << endl;
            cout << "90 - 100     O       Outstanding" << endl;
            cout << "80 - 89      A+      Excellent" << endl;
            cout << "70 - 79      A       Very Good" << endl;
            cout << "60 - 69      B+      Good" << endl;
            cout << "50 - 59      B       Satisfactory" << endl;
            cout << "40 - 49      C       Needs Improvement" << endl;
            cout << "Below 40     F       Failed" << endl;
            cout << "------------------------------------------" << endl;
            cout << "70 and above : Distinction" << endl;
            cout << "60 - 69      : First Class" << endl;
            cout << "50 - 59      : Second Class" << endl;
            cout << "40 - 49      : Pass Class" << endl;
            cout << "------------------------------------------" << endl;
            goto mainMenu;

        // Option 4 : Exit with confirmation
        case 4:
            cout << "Are you sure you want to exit? (Y/N) : ";
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y')
            {
                cout << endl;
                cout << "Exiting the Application..." << endl;
            }
            else
            {
                goto mainMenu;
            }
            break;

        default:
            cout << "Invalid Choice! Please Try Again." << endl;
            goto mainMenu;
    }

    return 0;
}
