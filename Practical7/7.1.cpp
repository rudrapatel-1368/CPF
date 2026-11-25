#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char enrNo[20];
    char name[50];
    char branch[20];

    char refId[80];
    char fname[50];
    char lname[50];
    char key[50];

    int fSpace;
    int lSpace;
    int i, j;

    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // 1. Accept student information
    cout << "Enter Enrollment Number : ";
    cin >> enrNo;
    cin.ignore();
    cout << endl;

    cout << "Enter Student Name      : ";
    cin.getline(name, 50);
    cout << endl;

    cout << "Enter Branch            : ";
    cin >> branch;
    cout << endl;

    // 2. Student Reference ID
    strcpy(refId, name);
    strcat(refId, "-");
    strcat(refId, enrNo);

    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Student Reference" << endl;
    cout << endl;
    cout << refId << endl;
    cout << endl;

    // 3. First name
    fSpace = 0;
    while (name[fSpace] != ' ' && name[fSpace] != '\0')
    {
        fSpace++;
    }
    strncpy(fname, name, fSpace);
    fname[fSpace] = '\0';

    lSpace = -1;
    for (i = 0; i < (int)strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            lSpace = i;
        }
    }

    j = 0;
    if (lSpace != -1)
    {
        for (i = lSpace + 1; name[i] != '\0'; i++)
        {
            lname[j] = name[i];
            j++;
        }
    }
    lname[j] = '\0';

    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "First Name" << endl;
    cout << endl;
    cout << fname << endl;
    cout << endl;
    cout << "Last Name" << endl;
    cout << endl;
    cout << lname << endl;
    cout << endl;

    // 4. Search keyword
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Enter Keyword : ";
    cin >> key;
    cout << endl;

    if (strstr(name, key) != NULL)
    {
        cout << "Keyword Found." << endl;
    }
    else
    {
        cout << "Keyword Not Found." << endl;
    }
    cout << endl;

    // 5. Complete student report
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Student Report" << endl;
    cout << endl;
    cout << "Enrollment Number : " << enrNo << endl;
    cout << endl;
    cout << "Student Name      : " << name << endl;
    cout << endl;
    cout << "Branch            : " << branch << endl;

    return 0;
}
