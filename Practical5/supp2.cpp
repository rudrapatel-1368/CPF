#include <iostream>

using namespace std;

int main()
{
    int choice;
    int num;

    do
    {
        cout << endl;
        cout << "------------- MAIN MENU ------------------" << endl;
        cout << endl;
        cout << "1. Find Square of a Number" << endl;
        cout << "2. Find Cube of a Number" << endl;
        cout << "3. Check Even or Odd" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                cout << "Enter a Number : ";
                cin >> num;
                cout << "Square of " << num << " = " << num * num << endl;
                break;

            case 2:
                cout << "Enter a Number : ";
                cin >> num;
                cout << "Cube of " << num << " = " << num * num * num << endl;
                break;

            case 3:
                cout << "Enter a Number : ";
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
                cout << "Exiting the Application..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please Try Again." << endl;
        }

    } while (choice != 4);

    return 0;
}
