#include <iostream>
#include <string>

using namespace std;

int main()
{
    string bid = "";
    string title = "";
    string author = "";
    string issuedTo = "";

    int added = 0;
    int issued = 0;

    int choice;

    cout << "******************************************" << endl;
    cout << "       LIBRARY MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;

    do
    {
        cout << endl;
        cout << "------------- MAIN MENU ------------------" << endl;
        cout << endl;
        cout << "1. Add Book Details" << endl;
        cout << "2. Display Book Details" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            // Option 1 : Add Book Details
            case 1:
                cout << "Enter Book ID     : ";
                cin >> bid;
                cin.ignore();

                cout << "Enter Book Title  : ";
                getline(cin, title);

                cout << "Enter Author Name : ";
                getline(cin, author);

                added = 1;
                issued = 0;

                cout << endl;
                cout << "Book Added Successfully." << endl;
                break;

            // Option 2 : Display Book Details
            case 2:
                if (added == 0)
                {
                    cout << "No Book Added Yet." << endl;
                    break;
                }

                cout << "Book ID     : " << bid << endl;
                cout << "Book Title  : " << title << endl;
                cout << "Author Name : " << author << endl;

                if (issued == 1)
                {
                    cout << "Status      : Issued to " << issuedTo << endl;
                }
                else
                {
                    cout << "Status      : Available" << endl;
                }
                break;

            // Option 3 : Issue Book
            case 3:
                if (added == 0)
                {
                    cout << "No Book Added Yet." << endl;
                }
                else if (issued == 1)
                {
                    cout << "Book is Already Issued." << endl;
                }
                else
                {
                    cout << "Enter Student Name : ";
                    cin.ignore();
                    getline(cin, issuedTo);

                    issued = 1;
                    cout << endl;
                    cout << "Book Issued Successfully." << endl;
                }
                break;

            // Option 4 : Return Book
            case 4:
                if (issued == 0)
                {
                    cout << "Book is Not Issued." << endl;
                }
                else
                {
                    issued = 0;
                    issuedTo = "";
                    cout << "Book Returned Successfully." << endl;
                }
                break;

            // Option 5 : Exit
            case 5:
                cout << "Exiting the Application..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please Try Again." << endl;
        }

    } while (choice != 5);

    return 0;
}
