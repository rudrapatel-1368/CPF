#include <iostream>

using namespace std;

int main()
{
    int choice;
    int rows = 5;
    char ch;

    cout << "********************************************" << endl;
    cout << "        LED DISPLAY PATTERN GENERATOR" << endl;
    cout << "********************************************" << endl;

    do
    {
        cout << endl;
        cout << "------------- MAIN MENU ------------------" << endl;
        cout << endl;
        cout << "1. Numeric Pattern" << endl;
        cout << "2. Lowercase Alphabet Pattern" << endl;
        cout << "3. Uppercase Alphabet Pattern" << endl;
        cout << "4. Right Half Number Triangle" << endl;
        cout << "5. Full Number Pyramid" << endl;
        cout << "6. Full Alphabet Pyramid" << endl;
        cout << "7. Exit" << endl;
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            // 1 - Numeric Pattern
            case 1:
                for (int i = 1; i <= rows; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            // 2 - Lowercase Alphabet Pattern
            case 2:
                for (int i = 1; i <= rows; i++)
                {
                    ch = 'a';
                    for (int j = 1; j <= i; j++)
                    {
                        cout << ch << " ";
                        ch++;
                    }
                    cout << endl;
                }
                break;

            // 3 - Uppercase Alphabet Pattern
            case 3:
                for (int i = 1; i <= rows; i++)
                {
                    ch = 'A';
                    for (int j = 1; j <= i; j++)
                    {
                        cout << ch << " ";
                        ch++;
                    }
                    cout << endl;
                }
                break;

            // 4 - Right Half Number Triangle
            case 4:
                for (int i = 1; i <= rows; i++)
                {
                    for (int s = 1; s <= rows - i; s++)
                    {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            // 5 - Full Number Pyramid
            case 5:
                for (int i = 1; i <= rows; i++)
                {
                    for (int s = 1; s <= rows - i; s++)
                    {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    for (int j = i - 1; j >= 1; j--)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;

            // 6 - Full Alphabet Pyramid
            case 6:
                for (int i = 1; i <= rows; i++)
                {
                    for (int s = 1; s <= rows - i; s++)
                    {
                        cout << "  ";
                    }
                    ch = 'A';
                    for (int j = 1; j <= i; j++)
                    {
                        cout << ch << " ";
                        ch++;
                    }
                    ch = ch - 2;
                    for (int j = i - 1; j >= 1; j--)
                    {
                        cout << ch << " ";
                        ch--;
                    }
                    cout << endl;
                }
                break;

            case 7:
                cout << "Exiting the Application..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please Try Again." << endl;
        }

    } while (choice != 7);

    return 0;
}
