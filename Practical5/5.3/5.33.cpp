#include <iostream>

using namespace std;

int main()
{
    int rows = 5;
    char ch;

    // 3 - Uppercase Alphabet Pattern
    for (int i = 1; i <= rows; i++)
    {
        ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            if (j < i)
            {
                cout << " ";
            }
            ch++;
        }
        cout << endl;
    }

    return 0;
}
