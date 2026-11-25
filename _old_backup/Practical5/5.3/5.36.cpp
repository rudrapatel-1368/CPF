#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k<=i; k++)
        {
            cout << char('A' + (k-1)) << " ";
        }
        for (int m = i-1; m > 0; m--)
        {
            cout << char('A' + (m-1)) << " ";
        }
        cout << endl;
    }
}