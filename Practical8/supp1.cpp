#include <iostream>

using namespace std;

int sumOfNaturalNumbers(int n);

int main()
{
    int n;

    cout << "Enter N : ";
    cin >> n;

    if (n < 1)
    {
        cout << "Please enter a positive number." << endl;
    }
    else
    {
        cout << "Sum of first " << n << " natural numbers : " << sumOfNaturalNumbers(n) << endl;
    }

    return 0;
}

int sumOfNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfNaturalNumbers(n - 1);
}
