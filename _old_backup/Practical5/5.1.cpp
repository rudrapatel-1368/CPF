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
        cout << "1, Register New Student\n";
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
            int marks[100];
            int n;
            cout << "Enter the number of subjects: ";
            cin >> n;
            for (int i = 0; i< n; i++)
            {   
                cout << "Enter marks of subject " << i+1 << ": ";
                cin >> marks[i];
        
            }
            cin.ignore();
            break;

            case 4:
            {
                cout << "----------------------RESULT--------------------\n";
                total = 0;
                for (int k = 0; k < n; k++)
                {
                    total += marks[k];
                }
                average = total/n;
                percentage=(total/(n*100)) * 100;
                cout<< left << setw(30) << "total marks" << ":" << total << "/300" << endl;
                cout<< left << setw(30) << "average marks" << ":" << average << endl;
                cout << left << setw(30) <<"percentage" << ":"  << fixed << setprecision(2) << percentage << "%" << endl;
                int res = 0;
                for (int i = 0; i < n; i++)
                {
                    if (marks[i] > 35)
                    {
                        res++;
                    }
                }
                if (res == n)
                {   
                    cout << left << setw(30) << "Result" << ":" << "Passed" << endl;
                }
                else{
                    cout << left << setw(30) << "Result" << ":" << "Failed" << endl;
                }

                // garde check

                string grade, remark, perfomance;
                if (percentage <= 100 && percentage >= 90)
                {
                    grade = "O";
                    perfomance = "Outstanding";
                    remark = "Congratulations! You scored in Distinction.";

                }
                else if (percentage < 90 && percentage >= 80)
                {
                    grade = "A+";
                    perfomance = "Excellent";
                    remark = "Congratulations! You scored in Distinction.";
                }
                else if (percentage < 80 && percentage >= 70)
                {
                    grade = "A";
                    perfomance = "Very goood.";
                    remark = "Congratulations! You scored in Distinction.";
                }
                else if (percentage < 70 && percentage >= 60)
                {
                    grade = "B+";
                    perfomance = "Good!";
                }
                else if (percentage < 60 && percentage >=50)
                {
                    grade = "B";
                    perfomance = "Satisfactory.";
                }
                else if (percentage < 50 && percentage >= 40)
                {
                    grade = "C";
                    perfomance = "Needs Improvement.";
                }   
                else if (percentage < 40)
                {
                    grade = "F";
                    perfomance = "Failed.";
                }
                if (percentage >= 70)
                {
                    cout << left << setw(30) << "Grade" << ":" << grade << endl;
                    cout << left << setw(30) << "Perfomance" << ":" << perfomance << endl;
                    cout << left << setw(30) << remark << endl;
                }
                else{
                    cout << left << setw(30) << "Grade" << ":" << grade << endl;
                    cout << left << setw(30) << "Perfomance" << ":" << perfomance << endl;
                }
                break;
            }
            default: 
            cout << "Invalid choice. Please enter again.";

        }
    }while (choice !=5);
        return 0;
}