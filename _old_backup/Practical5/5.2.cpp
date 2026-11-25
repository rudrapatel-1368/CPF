#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    int menu;

    //student details
    int enrollmentNo = 0;
    string studentName = "";
    string branch = "";
    int semester = 0;
    long long mobileNo = 0;

    //Subject marks
    int n = 0;
    float marks, total =0, average =0, percentage = 0;

    //Result

    string result="", grade = "", perfomance = "";

    //Used for batch registration
    char choice;

    //============================
    //Main menu
    //============================

    do 
    {
        cout << "\n********************************************************\n";
        cout << "           STUDENT RECORD MEANAGEMENT SYSTEM\n";
        cout << "**********************************************************\n";

        cout << "\n1. Register New Student.";
        cout << "\n2. Display Student Record.";
        cout << "\n3. Enter Student Marks.";
        cout << "\n4. Display Academic Result.";
        cout << "\n5. Exit.";

        cout << "\nEnter your choice: ";
        cin >> menu;

        switch (menu)
        {
            //Option 1: Register Student
            case 1:
            {
               choice = 'Y';
                while (choice == 'Y' || choice == 'y')
                {
                    cout << "Student Registration" << endl;
                    cout << "--------------------------------------------" << endl;

                    cout << "Enrollment Number: ";
                    cin >> enrollmentNo;

                    cout << "Student name: ";
                    cin >> studentName;

                    cout << "Branch: ";
                    cin >> branch;

                    cout << "Semester: ";
                    cin >> semester;
                    
                    cout << "Mobile Number: ";
                    cin >> mobileNo;

                    cout << "Student Registered successfully!\n";

                    cout << "Student Information" << endl;
                    cout << "-----------------------------------------------\n";

                    cout << "Entollment Number   :" << enrollmentNo << endl;
                    cout << "Student Name        :" << studentName << endl;
                    cout << "Branch              :" << branch << endl;
                    cout << "Mobile Number       :" << mobileNo << endl;

                    cout << "Reagister Another student?(Y/N)" << endl;
                    cin >> choice;

                }
                break;
            }
            case 2:
            {
                cout << "Student Record" << endl;
                cout << "---------------------------------------------------\n";

                cout << "Entollment Number   :" << enrollmentNo << endl;
                cout << "Student Name        :" << studentName << endl;
                cout << "Branch              :" << branch << endl;
                cout << "Mobile Number       :" << mobileNo << endl;
                break;  
            }

        }
    }
    while(menu!=5);
    {
        return 0;
    }
}