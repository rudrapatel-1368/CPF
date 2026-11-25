#include <iostream>

using namespace std;

void showStackMemory();
void showDynamicMemory();

int main()
{
    int value = 50;
    int *p1 = &value;
    int **p2 = &p1;
    int ***p3 = &p2;

    int *nullPtr = NULL;
    int *dPtr = NULL;

    cout << "********************************************" << endl;
    cout << "        MEMORY ORGANIZATION ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // Part A - Stack and Heap Memory
    showStackMemory();
    showDynamicMemory();

    // Part B - Multi-level Referencing
    cout << "----------- Multi-level Referencing ----------" << endl;
    cout << endl;
    cout << "Original Value" << endl;
    cout << endl;
    cout << value << endl;
    cout << endl;
    cout << "Single-level Address" << endl;
    cout << endl;
    cout << p1 << endl;
    cout << endl;
    cout << "Double-level Address" << endl;
    cout << endl;
    cout << p2 << endl;
    cout << endl;
    cout << "Triple-level Address" << endl;
    cout << endl;
    cout << p3 << endl;
    cout << endl;
    cout << "Value Accessed through Three Levels" << endl;
    cout << endl;
    cout << ***p3 << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;

    // Part C - Memory Safety
    cout << "--------------- Memory Safety ----------------" << endl;
    cout << endl;

    // 1. Null reference
    cout << "Null Reference" << endl;
    cout << endl;
    if (nullPtr == NULL)
    {
        cout << "Safe (Reference is NULL)" << endl;
    }
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;

    // 2. Invalid (dangling) reference
    cout << "Invalid Reference" << endl;
    cout << endl;
    dPtr = new int;
    *dPtr = 10;
    delete dPtr;
    cout << "Memory Released Successfully" << endl;
    cout << endl;
    cout << "Reference Invalid" << endl;
    dPtr = NULL;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;

    // 3. Uninitialized address variable
    cout << "Uninitialized Address Variable" << endl;
    cout << endl;
    cout << "Unsafe to Access" << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}

void showStackMemory()
{
    int local = 100;

    cout << "--------------- Stack Memory ----------------" << endl;
    cout << endl;
    cout << "Local Variable Value" << endl;
    cout << endl;
    cout << local << endl;
    cout << endl;
    cout << "Memory Address" << endl;
    cout << endl;
    cout << &local << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;
}

void showDynamicMemory()
{
    int *dyn = new int;
    *dyn = 250;

    cout << "--------------- Dynamically Allocated Memory ------------" << endl;
    cout << endl;
    cout << "Allocated Value" << endl;
    cout << endl;
    cout << *dyn << endl;
    cout << endl;
    cout << "Memory Address" << endl;
    cout << endl;
    cout << dyn << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;

    delete dyn;
    dyn = NULL;
}
