#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    //Student Information
    int enrollmentno = 0;
    string studentname = "";
    string branch = "";
    int semester = 0;
    long long mobileno = 0;

    //Marks 
    float maths = 0, physics = 0, cpf = 0;
    float total = 0, average = 0, percentage = 0;
    string result, grade, remark;

    int choice;
    do
    {
        cout << "\n";
        cout << "*********************************************************************************\n";
        cout << "             STUDENT RECORD MANAGEMENT SYSTEM\n";
        cout << "*********************************************************************************\n";
        cout <<"\n ----------------------------MAIN MENU-------------------------------------------\n";
        cout << "1. Register New Student\n";
        cout << "2. Display student records\n";
        cout << "3. Enter student marks\n";
        cout << "4. Display acedemic result\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cin.ignore();
            cout << "\nStudent Registration\n";
            cout << "----------------------------------------------------------------------------------\n";

            cout << "Enter your enrollment number: ";
            cin >> enrollmentno;
            cin.ignore();

            cout << "Enter your name: ";
            cin >> studentname;
            cin.ignore();

            cout << "Enter your branch: ";
            cin >> branch;
            cin.ignore();

            cout << "Enter your semester: ";
            cin >> semester;
            cin.ignore();

            cout << "Enter your mobile number: ";
            cin >> mobileno;
            cin.ignore();

            cout << "Student Registered Successfully!";

            break;

            case 2:
            cout << "Enrollment number : " << enrollmentno << endl;
            cout << "Name              : " << studentname << endl;
            cout << "Branch            : " << branch << endl;
            cout << "Semester          : " << semester << endl;
            cout << "Mobile number     : " << mobileno << endl;

            break;

            case 3:
            cout << "----------------MARKS--------------\n";
            cout << "Enter your maths marks: ";
            cin >> maths;
            cin.ignore();

            cout << "Enter your physics marks: ";
            cin >> physics;
            cin.ignore();

            cout << "Enter your CPF marks: ";
            cin >> cpf;
            cin.ignore();

            break;
            case 4:
            cout << "----------------------RESULT--------------------\n";
            
            total = maths + physics + cpf;
            average = total/3;
            percentage=(total/300) * 100;
            cout<< left << setw(30) << "total marks" << ":" << total << "/300" << endl;
            cout<< left << setw(30) << "average marks" << ":" << average << endl;
            cout << left << setw(30) <<"percentage" << ":"  << fixed << setprecision(2) << percentage << "%" << endl;

            if (maths > 35 && physics > 35 && cpf > 35)
            {
                cout << left << setw(30) << "Result" << ":" << "Pass" << endl;
            }
            else 
            {
                cout << left << setw(30) << "Result" << ":" << "Failed" << endl;
            }

    // garde check
            if (percentage <= 100 && percentage >= 90)
            {
                cout << left << setw(30) << "Grade" << ":" << "O" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Outstanding!" << endl;
                cout << left << setw(30) << "Congratulations! You scored in Distinction." << endl;
            }
            else if (percentage < 90 && percentage >= 80)
            {
                cout << left << setw(30) << "Grade" << ":" << "A+" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Excellent!" << endl;
                cout << left << setw(30) << "Congratulations! You scored in Distinction." << endl;
            }
            else if (percentage < 80 && percentage >= 70)
            {
                cout << left << setw(30) << "Grade" << ":" << "A" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Very good!" << endl;
                cout << left << setw(30) << "Congratulations! You scored in Distinction." << endl;
            }
            else if (percentage < 70 && percentage >= 60)
            {
                cout << left << setw(30) << "Grade" << ":" << "B+" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Good!" << endl;
            }
            else if (percentage < 60 && percentage >=50)
            {
                cout << left << setw(30) << "Grade" << ":" << "B" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Satisfactory" << endl;
            }
            else if (percentage < 50 && percentage >= 40)
            {
                cout << left << setw(30) << "Grade" << ":" << "C" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Needs Improvement" << endl;
            }
            else if (percentage < 40)
            {
                cout << left << setw(30) << "Grade" << ":" << "F" << endl;
                cout << left << setw(30) << "Perfomance" << ":" << "Failed" << endl;
            }

            break;
            default: 
            cout << "Invalid choice. Please enter again.";

        }
    }while (choice !=5);
        return 0;
}
    

