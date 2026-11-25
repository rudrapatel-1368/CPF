#include <iostream>
#include <cstdio>

using namespace std;

int global = 100;

int main()
{
    int local = 200;

    int *dyn = new int;
    *dyn = 300;

    cout << "********************************************" << endl;
    cout << "PROGRAM EXECUTION & ERROR HANDLING ANALYZER" << endl;
    cout << "********************************************" << endl;

    // Part A - Compile-time and Run-time Memory
    cout << "Compile-time and Run-time Memory" << endl;
    cout << "Global Variable Value : " << global << endl;
    cout << "Local Variable Value : " << local << endl;
    cout << "Dynamic Memory Value : " << *dyn << endl;
    cout << "--------------------------------------------" << endl;

    delete dyn;
    dyn = NULL;

    // Part B - Low-level Error Demonstration
    cout << "Low-level Error Demonstration" << endl;

    // 1. Arithmetic overflow
    short small = 32767;
    small = small + 1;
    if (small < 0)
    {
        cout << "Arithmetic Overflow Observed" << endl;
    }
    cout << "--------------------------------------------" << endl;

    // 2. Pointer aliasing
    int num = 50;
    int *p1 = &num;
    int *p2 = &num;

    cout << "Pointer Aliasing" << endl;
    cout << "Original Value : " << *p2 << endl;
    *p1 = 75;
    cout << "Updated Value : " << *p2 << endl;
    if (p1 == p2)
    {
        cout << "Both Address Variables Refer to the Same Memory Location" << endl;
    }
    cout << "--------------------------------------------" << endl;

    // 3. Memory leak (conceptual)
    cout << "Memory Leak Demonstration" << endl;
    int *leak = new int[100];
    cout << "Dynamic Memory Allocated" << endl;
    delete[] leak;
    leak = NULL;
    cout << "Memory Released Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    // Part C - Error Handling
    int dividend, divisor;

    cout << "Arithmetic Operation" << endl;
    cout << "Enter Dividend : ";
    cin >> dividend;

    if (cin.fail())
    {
        cout << "Error : Invalid Numerical Input." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    else
    {
        cout << "Enter Divisor : ";
        cin >> divisor;

        if (cin.fail())
        {
            cout << "Error : Invalid Numerical Input." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (divisor == 0)
        {
            cout << "Error : Division by Zero is not Allowed." << endl;
        }
        else
        {
            cout << "Result : " << (float)dividend / divisor << endl;
        }
    }
    cout << "--------------------------------------------" << endl;

    cout << "File Operation" << endl;
    FILE *fp = fopen("NoSuchFile.txt", "r");
    if (fp == NULL)
    {
        cout << "Unable to Open File." << endl;
    }
    else
    {
        cout << "File Opened Successfully." << endl;
        fclose(fp);
    }
    cout << "--------------------------------------------" << endl;

    cout << "Program Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
