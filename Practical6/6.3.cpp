#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string enrNo[100];
    string name[100];
    float per[100];
    string grade[100];

    int n;
    int pos;
    string sEnr;
    int idx;

    string fname, lname;

    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "Enter Number of Students : ";
    cin >> n;

    if (n < 1 || n > 99)
    {
        cout << "Number of Students must be between 1 and 99." << endl;
        return 0;
    }
    cout << endl;

    cout << "Enter Student Details" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> enrNo[i] >> fname >> lname >> per[i] >> grade[i];
        name[i] = fname + " " + lname;
    }

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Current Student Records" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << enrNo[i] << "\t" << name[i] << "\t" << per[i] << endl;
    }

    cout << endl;
    cout << "--------------------------------------------" << endl;

    cout << endl;
    cout << "Insert New Student" << endl;
    cout << "Enter Position : ";
    cin >> pos;
    cout << endl;

    if (pos >= 1 && pos <= n + 1)
    {
        for (int i = n; i >= pos; i--)
        {
            enrNo[i] = enrNo[i - 1];
            name[i] = name[i - 1];
            per[i] = per[i - 1];
            grade[i] = grade[i - 1];
        }

        cout << "Enter Enrollment Number : ";
        cin >> enrNo[pos - 1];
        cin.ignore();

        cout << "Enter Student Name      : ";
        getline(cin, name[pos - 1]);

        cout << "Enter Percentage        : ";
        cin >> per[pos - 1];

        cout << "Enter Grade             : ";
        cin >> grade[pos - 1];

        n++;

        cout << endl;
        cout << "Record Inserted Successfully." << endl;
    }
    else
    {
        cout << "Invalid Position." << endl;
    }

    cout << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Updated Student Records" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << enrNo[i] << "\t" << name[i] << "\t" << per[i] << endl;
    }

    cout << endl;
    cout << "--------------------------------------------" << endl;

    cout << endl;
    cout << "Update Student Record" << endl;
    cout << endl;
    cout << "Enter Enrollment Number : ";
    cin >> sEnr;
    cout << endl;

    idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (enrNo[i] == sEnr)
        {
            idx = i;
            break;
        }
    }

    if (idx != -1)
    {
        cout << "Enter New Percentage : ";
        cin >> per[idx];

        cout << "Enter New Grade      : ";
        cin >> grade[idx];

        cout << endl;
        cout << "Record Updated Successfully." << endl;
    }
    else
    {
        cout << "Record Not Found." << endl;
    }

    cout << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Delete Student Record" << endl;
    cout << endl;
    cout << "Enter Position : ";
    cin >> pos;
    cout << endl;

    if (pos >= 1 && pos <= n)
    {
        for (int i = pos - 1; i < n - 1; i++)
        {
            enrNo[i] = enrNo[i + 1];
            name[i] = name[i + 1];
            per[i] = per[i + 1];
            grade[i] = grade[i + 1];
        }

        n--;

        cout << "Record Deleted Successfully." << endl;
    }
    else
    {
        cout << "Invalid Position." << endl;
    }

    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Final Student Records" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << enrNo[i] << "\t" << name[i] << "\t" << per[i] << "\t" << grade[i] << endl;
    }

    return 0;
}
