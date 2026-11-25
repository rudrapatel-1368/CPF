#include <iostream>

using namespace std;

int main()
{
    int choice;
    int num;

    do
    {
        cout << "\n*************** MENU ***************" << endl;
        cout << "1. Find square of a number" << endl;
        cout << "2. Find cube of a number" << endl;
        cout << "3. Check even or odd" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Square of " << num << " = " << num * num << endl;
                break;

            case 2:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Cube of " << num << " = " << num * num * num << endl;
                break;

            case 3:
                cout << "Enter a number: ";
                cin >> num;
                if (num % 2 == 0)
                {
                    cout << num << " is Even" << endl;
                }
                else
                {
                    cout << num << " is Odd" << endl;
                }
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while (choice != 4);

    return 0;
}
