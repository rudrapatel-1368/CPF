#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int gCount = 100;

// Part A - Function design
void add();
int subtract();
void multiply(int a, int b);
float divide(int a, int b);

// Part B - Parameter passing
void changeByValue(int marks);
void changeByReference(int &marks);

// Part C - Scope and visibility
void showScope();

// Part D - Function overloading
void displayStudentDetails(string enrNo, string name);
void displayStudentDetails(string enrNo, string name, int sem, float per);
void displayStudentDetails(string enrNo, string name, int sem, float per, string mobile);

int main()
{
    int a, b;
    int ans;
    float quot;
    int marks;
    int lCount = 200;

    cout << "********************************************" << endl;
    cout << "FUNCTION DESIGN & PARAMETER PASSING ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // Part A - Function Design
    cout << fixed << setprecision(2);
    cout << "------------ Part A : Function Design ------------" << endl;
    cout << endl;

    // 1. No parameters, no return value
    cout << "1. Without Parameters and Without Return Value" << endl;
    add();
    cout << endl;

    // 2. No parameters, with return value
    cout << "2. Without Parameters and With Return Value" << endl;
    ans = subtract();
    cout << "Subtraction of a and b : " << ans << endl;
    cout << endl;

    // 3. With parameters, no return value
    cout << "3. With Parameters and Without Return Value" << endl;
    cout << "Enter a and b : ";
    cin >> a >> b;
    multiply(a, b);
    cout << endl;

    // 4. With parameters, with return value
    cout << "4. With Parameters and With Return Value" << endl;
    if (b == 0)
    {
        cout << "Division Not Possible : b cannot be zero!" << endl;
    }
    else
    {
        quot = divide(a, b);
        cout << "Division of a and b : " << quot << endl;
    }
    cout << endl;

    // Part B - Parameter Passing
    cout << "---------- Part B : Parameter Passing ----------" << endl;
    cout << endl;

    marks = 70;
    cout << "Call by Value" << endl;
    cout << "Before Function Call : " << marks << endl;
    changeByValue(marks);
    cout << "After Function Call  : " << marks << endl;
    cout << "(Original value is NOT changed, function got a copy)" << endl;
    cout << endl;

    marks = 70;
    cout << "Call by Reference" << endl;
    cout << "Before Function Call : " << marks << endl;
    changeByReference(marks);
    cout << "After Function Call  : " << marks << endl;
    cout << "(Original value IS changed, function used the same variable)" << endl;
    cout << endl;

    // Part C - Scope and Visibility
    cout << "---------- Part C : Scope and Visibility ----------" << endl;
    cout << endl;

    cout << "Inside main()" << endl;
    cout << "Global Variable : " << gCount << endl;
    cout << "Local Variable  : " << lCount << endl;
    cout << endl;

    showScope();
    cout << endl;

    cout << "Back in main()" << endl;
    cout << "Global Variable : " << gCount << " (changed by showScope)" << endl;
    cout << "Local Variable  : " << lCount << " (main's own copy)" << endl;
    cout << endl;

    // Part D - Function Overloading
    cout << "---------- Part D : Function Overloading ----------" << endl;
    cout << endl;

    displayStudentDetails("24CE001", "Amit Patel");
    displayStudentDetails("24CE001", "Amit Patel", 1, 85.20);
    displayStudentDetails("24CE001", "Amit Patel", 1, 85.20, "9876543210");

    cout << "--------------------------------------------" << endl;
    cout << "Program Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

void add()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;

    int sum = a + b;

    cout << "Sum of a and b : " << sum << endl;
}

int subtract()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    return a - b;
}

void multiply(int a, int b)
{
    int product = a * b;
    cout << "Multiplication of a and b : " << product << endl;
}

float divide(int a, int b)
{
    float div = float(a) / float(b);
    return div;
}

void changeByValue(int marks)
{
    marks = marks + 5;
    cout << "Inside Function      : " << marks << endl;
}

void changeByReference(int &marks)
{
    marks = marks + 5;
    cout << "Inside Function      : " << marks << endl;
}

void showScope()
{
    int lCount = 50;

    cout << "Inside showScope()" << endl;
    cout << "Global Variable : " << gCount << endl;
    cout << "Local Variable  : " << lCount << endl;

    gCount = gCount + 1;
}

void displayStudentDetails(string enrNo, string name)
{
    cout << "Student Details" << endl;
    cout << "Enrollment Number : " << enrNo << endl;
    cout << "Student Name      : " << name << endl;
    cout << endl;
}

void displayStudentDetails(string enrNo, string name, int sem, float per)
{
    cout << "Student Details with Academic Information" << endl;
    cout << "Enrollment Number : " << enrNo << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Semester          : " << sem << endl;
    cout << "Percentage        : " << per << "%" << endl;
    cout << endl;
}

void displayStudentDetails(string enrNo, string name, int sem, float per, string mobile)
{
    cout << "Student Details with Academic and Contact Information" << endl;
    cout << "Enrollment Number : " << enrNo << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Semester          : " << sem << endl;
    cout << "Percentage        : " << per << "%" << endl;
    cout << "Mobile Number     : " << mobile << endl;
    cout << endl;
}
