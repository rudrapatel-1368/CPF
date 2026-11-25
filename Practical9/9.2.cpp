#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student
{
    string enrNo;
    string name;
    string branch;
    int sem;
    float per;
    string grade;
};

void displayAllRecords(Student *stu, int count);
float calculateClassAverage(Student *stu, int count);
float findHighestPercentage(Student *stu, int count);
float findLowestPercentage(Student *stu, int count);

int main()
{
    int n;
    Student *stu = NULL;

    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "Enter Number of Students : ";
    cin >> n;
    cout << endl;

    if (n <= 0)
    {
        cout << "Invalid Number of Students." << endl;
        return 0;
    }

    // Part A - Dynamic Memory Allocation
    stu = new Student[n];

    cout << "Dynamic Memory Allocated Successfully" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Enter Student Details" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << endl;

        cout << "Enrollment Number : ";
        cin >> (stu + i)->enrNo;
        cin.ignore();
        cout << endl;

        cout << "Student Name      : ";
        getline(cin, (stu + i)->name);
        cout << endl;

        cout << "Branch            : ";
        cin >> (stu + i)->branch;
        cout << endl;

        cout << "Semester          : ";
        cin >> (stu + i)->sem;
        cout << endl;

        cout << "Percentage        : ";
        cin >> (stu + i)->per;
        cout << endl;

        cout << "Grade             : ";
        cin >> (stu + i)->grade;
        cout << endl;

        cout << "--------------------------------------------" << endl;
        cout << endl;
    }

    // Part B and C
    displayAllRecords(stu, n);

    cout << fixed << setprecision(2);
    cout << "Academic Summary" << endl;
    cout << endl;
    cout << "Class Average Percentage : " << calculateClassAverage(stu, n) << " %" << endl;
    cout << endl;
    cout << "Highest Percentage       : " << findHighestPercentage(stu, n) << " %" << endl;
    cout << endl;
    cout << "Lowest Percentage        : " << findLowestPercentage(stu, n) << " %" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // Part D - Dynamic Memory Deallocation
    delete[] stu;
    cout << "Dynamic Memory Released Successfully" << endl;
    cout << endl;

    stu = NULL;
    if (stu == NULL)
    {
        cout << "Address Variable Reset Successfully" << endl;
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Program Executed Successfully" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

void displayAllRecords(Student *stu, int count)
{
    cout << "Student Records using Address-based Access" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    for (int i = 0; i < count; i++)
    {
        cout << "Address : " << (stu + i) << endl;
        cout << endl;
        cout << left << setw(8) << (stu + i)->enrNo
             << setw(22) << (stu + i)->name
             << setw(8) << (stu + i)->branch
             << setw(4) << (stu + i)->sem
             << right << setw(6) << (stu + i)->per << " "
             << (stu + i)->grade << endl;
        cout << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;
    }
}

float calculateClassAverage(Student *stu, int count)
{
    float total = 0;
    for (int i = 0; i < count; i++)
    {
        total = total + (stu + i)->per;
    }
    return total / count;
}

float findHighestPercentage(Student *stu, int count)
{
    float high = stu->per;
    for (int i = 1; i < count; i++)
    {
        if ((stu + i)->per > high)
        {
            high = (stu + i)->per;
        }
    }
    return high;
}

float findLowestPercentage(Student *stu, int count)
{
    float low = stu->per;
    for (int i = 1; i < count; i++)
    {
        if ((stu + i)->per < low)
        {
            low = (stu + i)->per;
        }
    }
    return low;
}
