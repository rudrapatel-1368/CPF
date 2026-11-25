#include <iostream>

using namespace std;

int main()
{
    int rows = 5;

    // 5 - Full Number Pyramid
    for (int i = 1; i <= rows; i++)
    {
        for (int s = 1; s <= rows - i; s++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j;
            if (j < i)
            {
                cout << " ";
            }
        }

        for (int j = i - 1; j >= 1; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}
