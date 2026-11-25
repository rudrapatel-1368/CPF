#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "----------C_Alpha Triangle Pattern------------\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + (j-1)) << " ";
        }
        cout << endl;
    }
}