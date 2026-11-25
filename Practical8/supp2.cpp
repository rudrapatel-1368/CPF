#include <iostream>

using namespace std;

long long power(int x, int n);

int main()
{
    int x, n;

    cout << "Enter Base (x)     : ";
    cin >> x;

    cout << "Enter Exponent (n) : ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative exponent." << endl;
    }
    else
    {
        cout << x << " ^ " << n << " = " << power(x, n) << endl;
    }

    return 0;
}

long long power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}
