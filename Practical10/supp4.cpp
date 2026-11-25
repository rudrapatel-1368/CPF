#include <iostream>
#include <iomanip>

using namespace std;

struct DataStructure
{
    int iVal;
    float fVal;
    char cVal;
};

union DataUnion
{
    int iVal;
    float fVal;
    char cVal;
};

int main()
{
    DataStructure sd;
    DataUnion ud;

    cout << "********************************************" << endl;
    cout << "        STRUCTURE vs UNION ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    sd.iVal = 10;
    sd.fVal = 25.50;
    sd.cVal = 'A';

    cout << fixed << setprecision(2);
    cout << "Structure Values (all stored together)" << endl;
    cout << "Integer   : " << sd.iVal << endl;
    cout << "Float     : " << sd.fVal << endl;
    cout << "Character : " << sd.cVal << endl;
    cout << endl;

    cout << "Union Values (one at a time)" << endl;
    ud.iVal = 10;
    cout << "Integer   : " << ud.iVal << endl;
    ud.fVal = 25.50;
    cout << "Float     : " << ud.fVal << endl;
    ud.cVal = 'A';
    cout << "Character : " << ud.cVal << endl;
    cout << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Memory Utilization" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "int                  : " << sizeof(int) << " Bytes" << endl;
    cout << "float                : " << sizeof(float) << " Bytes" << endl;
    cout << "char                 : " << sizeof(char) << " Bytes" << endl;
    cout << "Structure            : " << sizeof(sd) << " Bytes" << endl;
    cout << "Union                : " << sizeof(ud) << " Bytes" << endl;
    cout << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Comparative Report" << endl;
    cout << "--------------------------------------------" << endl;
    cout << left << setw(22) << "Point" << setw(22) << "Structure" << "Union" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << setw(22) << "Memory" << setw(22) << "Members + padding" << "Largest member" << endl;
    cout << setw(22) << "Data Storage" << setw(22) << "All at once" << "One at a time" << endl;
    cout << setw(22) << "Shared Memory" << setw(22) << "No" << "Yes" << endl;
    cout << setw(22) << "Suitable For" << setw(22) << "Student records" << "Sensor / packet data" << endl;
    cout << "--------------------------------------------------------------" << endl;

    return 0;
}
