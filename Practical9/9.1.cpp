#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Part A - Address and Value
    int marks = 25;
    char grade = 'A';
    float per = 85.60;

    // Part B - Indirect Referencing
    int *mPtr = &marks;
    char *gPtr = &grade;
    float *pPtr = &per;

    // Part C - One-dimensional array
    int nums[5] = {10, 20, 30, 40, 50};
    int *aPtr = nums;

    cout << "********************************************" << endl;
    cout << "          MEMORY ADDRESS EXPLORER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "------------ Variable Information ------------" << endl;
    cout << endl;

    cout << "Integer Value       : " << marks << endl;
    cout << endl;
    cout << "Memory Address      : " << mPtr << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    cout << "Character Value     : " << grade << endl;
    cout << endl;
    cout << "Memory Address      : " << (void *)gPtr << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Floating Value      : " << per << endl;
    cout << endl;
    cout << "Memory Address      : " << pPtr << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    cout << "Indirect Referencing" << endl;
    cout << endl;
    cout << "Stored Value        : " << *mPtr << endl;
    cout << endl;

    *mPtr = 30;

    cout << "Modified Value      : " << marks << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    cout << "Sequential Data Collection" << endl;
    cout << endl;

    cout << "Array using Index" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Array using Address-based Access" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(aPtr + i) << " ";
    }
    cout << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    cout << "Observation" << endl;
    cout << endl;
    cout << "Both approaches access the same memory locations." << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}
