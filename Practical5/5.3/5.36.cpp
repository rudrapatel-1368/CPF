#include <iostream>

using namespace std;

int main()
{
    int rows = 5;
    char ch;

    // 6 - Full Alphabet Pyramid
    for (int i = 1; i <= rows; i++)
    {
        for (int s = 1; s <= rows - i; s++)
        {
            cout << "  ";
        }

        ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            if (j < i)
            {
                cout << " ";
                ch++;
            }
        }

        for (int j = i - 1; j >= 1; j--)
        {
            ch--;
            cout << " " << ch;
        }
        cout << endl;
    }

    return 0;
}
