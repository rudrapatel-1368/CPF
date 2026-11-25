#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Publisher
{
    string pubName;
    string city;
    int year;
};

struct Book
{
    int bid;
    string title;
    string author;
    float price;
    Publisher publisher;
};

int main()
{
    Book books[50];
    int n;

    cout << "Enter Number of Books : ";
    cin >> n;
    cout << endl;

    if (n < 1 || n > 50)
    {
        cout << "Number of Books must be between 1 and 50." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Book " << i + 1 << endl;

        cout << "Book ID          : ";
        cin >> books[i].bid;
        cin.ignore();

        cout << "Title            : ";
        getline(cin, books[i].title);

        cout << "Author           : ";
        getline(cin, books[i].author);

        cout << "Price            : ";
        cin >> books[i].price;
        cin.ignore();

        cout << "Publisher Name   : ";
        getline(cin, books[i].publisher.pubName);

        cout << "Publisher City   : ";
        getline(cin, books[i].publisher.city);

        cout << "Publication Year : ";
        cin >> books[i].publisher.year;
        cout << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << "            LIBRARY BOOK DETAILS" << endl;
    cout << "--------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        cout << "Book ID   : " << books[i].bid << endl;
        cout << "Title     : " << books[i].title << endl;
        cout << "Author    : " << books[i].author << endl;
        cout << "Price     : " << books[i].price << endl;
        cout << "Publisher : " << books[i].publisher.pubName
             << ", " << books[i].publisher.city
             << " (" << books[i].publisher.year << ")" << endl;
        cout << "--------------------------------------------" << endl;
    }

    return 0;
}
