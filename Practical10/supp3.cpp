#include <iostream>

using namespace std;

struct OrderOne
{
    char section;
    int rollNo;
    char grade;
};

struct OrderTwo
{
    int rollNo;
    char section;
    char grade;
};

int main()
{
    int sum = sizeof(char) + sizeof(int) + sizeof(char);

    cout << "Sum of Member Sizes  : " << sum << " Bytes" << endl;
    cout << endl;

    cout << "OrderOne (char, int, char)" << endl;
    cout << "Size                 : " << sizeof(OrderOne) << " Bytes" << endl;
    cout << "Padding              : " << sizeof(OrderOne) - sum << " Bytes" << endl;
    cout << endl;

    cout << "OrderTwo (int, char, char)" << endl;
    cout << "Size                 : " << sizeof(OrderTwo) << " Bytes" << endl;
    cout << "Padding              : " << sizeof(OrderTwo) - sum << " Bytes" << endl;
    cout << endl;

    cout << "Observation" << endl;
    cout << "The compiler adds padding so that each member starts at an" << endl;
    cout << "address that is a multiple of its size (alignment)." << endl;
    cout << "Placing larger members first and grouping small members" << endl;
    cout << "together reduces padding and saves memory." << endl;

    return 0;
}
