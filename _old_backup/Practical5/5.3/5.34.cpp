#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "-------Reverse Numric Triangle Pattern---------\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout << " ";

        }
        for (int k = 1; k <=i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}