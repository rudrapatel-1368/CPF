#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // student details
    int enrollmentno;
    string studentname;
    string branch;
    int semester;
    long long mobileno;


    // subject marks
    float maths = 80, physics, cpf = 70;
    float total,average,percentage;

    // input student details
    cout <<"\n======== STUDENT INFORMATION =======\n";

    cout << "Enter your enrollment no: ";
    cin >> enrollmentno;

    cout << "Enter your name: ";
    cin >> studentname;

    cout << "Enter your branch: ";
    cin >> branch;

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "Enter your mobile no: ";
    cin >> mobileno;

    // student marks details
    cout << "Enter your Physics marks: ";
    cin >> physics;

    
     // calculations
    total = maths + physics + cpf;
    average = total/3;
    cout <<"Total marks: " << total << endl;

    cout <<"Average marks: " << average << endl;

    percentage=(total/300) * 100;
    cout <<"Percentage: " << percentage << endl;


//display repoet
    cout<< "\n";
    cout<< "==========================================\n";
    cout<< "         STUDENT ACADEMIC REPORT\n";
    cout<< "==========================================\n";

    cout<< left << setw(30) << "Enrollment Number" << ":" << enrollmentno << endl;

    cout<< left << setw(30) << "branch" << ":" << branch << endl;

    cout<< left << setw(30) << "student name" << ":" << studentname << endl;


    cout<< left << setw(30) << "semester" << ":" << semester << endl;

    cout<< left << setw(30) << "mobileno" << ":" << mobileno << endl;


    //display marks
    cout<< "\n";
    cout<< "==========================================\n";
    cout<< "              STUDENT MARKS\n";
    cout<< "==========================================\n";

    cout<< left << setw(30) << "maths" << ":" << maths << endl;

    cout<< left << setw(30) << "physics" << ":" << physics << endl;

    cout<< left << setw(30) << "cpf" << ":" << cpf << endl;

    cout << "__________________________________________\n";

    cout<< left << setw(30) << "total marks" << ":" << total << "/300" << endl;

    cout<< left << setw(30) << "average marks" << ":" << average << endl;

    cout << left << setw(30) <<"percentage" << ":"  << fixed << setprecision(2) << percentage << "%" << endl;
    //check for pass or fail
    if (maths > 35 && physics > 35 && cpf > 35)
    {
        cout << left << setw(30) << "Pass" << endl;
        cout << "Congratulations! You have passed.\n";
    }
    else 
    {
        cout << left << setw(30) << "Fail" << endl;
        cout << "Unfortunately, you have failed.\n";
    }

    // garde check
    if (percentage <= 100 && percentage >= 90)
    {
        cout << left << setw(30) << "Grade" << ":" << "O" << endl << "Outstanding!" << endl;
    }
    else if (percentage < 90 && percentage >= 80)
    {
        cout << left << setw(30) << "Grade" << ":" << "A+" << endl << "Excellent!" << endl;
    }
    else if (percentage < 80 && percentage >= 70)
    {
        cout << left << setw(30) << "Grade" << ":" << "A" << endl << "Very Good!" << endl;
    }
    else if (percentage < 70 && percentage >= 60)
    {
        cout << left << setw(30) << "Grade" << ":" << "B+" << endl << "Good!" << endl;
    }
    else if (percentage < 60 && percentage >=50)
    {
        cout << left << setw(30) << "Grade" << ":" << "B" << endl << "Satisfactory." << endl;
    }
    else if (percentage < 50 && percentage >= 40)
    {
        cout << left << setw(30) << "Grade" << ":" << "C" << endl << "Needs Improvement." << endl;
    }
    else if (percentage < 40)
    {
        cout << left << setw(30) << "Grade" << ":" << "F" << endl << "Failed!" << endl;
    }

    cout<< "==========================================\n";

    cout<< "\n";
    cout<< "==========================================\n";
    cout<< "         STUDENT INCREMENT MARKS\n";
    cout<< "==========================================\n";

    cout<< left << setw(30) << "maths" << ":" << maths << endl;

    cout<< left << setw(30) << "physics" << ":" << physics << endl;

    cout<< left << setw(30) << "cpf" << ":" << cpf << endl;
    cpf++;
    cout<< left << setw(30) << "cpf after cpf++" << ":" << cpf << endl;
    cpf--;
    cout<< left << setw(30) << "cpf after cpf--" << ":" << cpf << endl;
    --cpf;
    cout<< left << setw(30) << "cpf after --cpf" << ":" << cpf << endl;
    ++cpf;
    cout<< left << setw(30) << "cpf after ++cpf" << ":" << cpf << endl;
    float result1 = ++cpf + cpf++ + --maths + ++maths - maths--;
    cout << left << setw(30) << "Result" << ":" << result1 << endl;
    cout << "___________________________________________\n";

    

    return  0;
}