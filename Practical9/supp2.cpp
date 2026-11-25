#include <iostream>

using namespace std;

void swapValues(int *first, int *second);

int main()
{
    int a, b;

    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << endl;
    cout << "Before Swapping : a = " << a << ", b = " << b << endl;

    swapValues(&a, &b);

    cout << "After Swapping  : a = " << a << ", b = " << b << endl;

    return 0;
}

void swapValues(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
