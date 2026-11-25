#include <iostream>
#include <iomanip>

using namespace std;

// Part A and B
struct ProductA
{
    char code;
    double price;
    int quantity;
    char rating;
};

struct ProductB
{
    double price;
    int quantity;
    char code;
    char rating;
};

// Part C - Union
union SharedData
{
    int iVal;
    float fVal;
    char cVal;
};

int main()
{
    ProductA pa;
    ProductB pb;
    SharedData data;

    int oldI;
    char oldC;

    cout << "********************************************" << endl;
    cout << "  COMPOSITE DATA REPRESENTATION ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // Part A
    cout << "Composite Data Type A" << endl;
    cout << endl;
    cout << "productCode (char)   : " << sizeof(pa.code) << " Bytes" << endl;
    cout << "price (double)       : " << sizeof(pa.price) << " Bytes" << endl;
    cout << "quantity (int)       : " << sizeof(pa.quantity) << " Bytes" << endl;
    cout << "rating (char)        : " << sizeof(pa.rating) << " Bytes" << endl;
    cout << endl;
    cout << "Size : " << sizeof(pa) << " Bytes" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // Part B - Padding and Alignment
    cout << "Composite Data Type B" << endl;
    cout << endl;
    cout << "Size : " << sizeof(pb) << " Bytes" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    if (sizeof(pa) != sizeof(pb))
    {
        cout << "Padding and Alignment Observed" << endl;
    }
    else
    {
        cout << "No Difference in Padding" << endl;
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // Part C - Shared memory representation
    cout << "Shared Memory Representation" << endl;
    cout << endl;

    data.iVal = 120;
    cout << "Integer Value : " << data.iVal << endl;
    cout << endl;

    data.fVal = 120.00;
    cout << fixed << setprecision(2);
    cout << "Floating Value : " << data.fVal << endl;
    cout << endl;

    data.cVal = 'x';
    cout << "Character Value : " << data.cVal << endl;
    cout << endl;

    data.iVal = 120;
    oldI = data.iVal;

    data.cVal = 'x';
    oldC = data.cVal;

    data.fVal = 75.50;

    cout << "After Updating Floating Value" << endl;
    cout << endl;

    if (data.iVal != oldI)
    {
        cout << "Integer Value Changed" << endl;
    }
    else
    {
        cout << "Integer Value Not Changed" << endl;
    }
    cout << endl;

    if (data.cVal != oldC)
    {
        cout << "Character Value Changed" << endl;
    }
    else
    {
        cout << "Character Value Not Changed" << endl;
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // Part D - Trade-off analysis
    cout << "Trade-off Analysis" << endl;
    cout << endl;
    cout << "Structure" << endl;
    cout << endl;
    cout << "Separate Memory for Every Member" << endl;
    cout << endl;
    cout << "Suitable for Storing Complete Records" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Union" << endl;
    cout << endl;
    cout << "Shared Memory for All Members" << endl;
    cout << endl;
    cout << "Suitable for Memory-efficient Applications" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Program Executed Successfully" << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
