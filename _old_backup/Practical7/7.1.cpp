#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Student details
    char enroll[20], name[50], branch[20];

    // Strings used for processing
    char ref[100];
    char firstName[50], lastName[50];
    char keyword[50];

    cout << "*****************************************************" << endl;
    cout << "         STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "*****************************************************" << endl;

    // 1. Accept student information
    cout << "\nEnter Enrollment Number : ";
    cin >> enroll;
    cin.ignore();

    cout << "Enter Student Name      : ";
    cin.getline(name, 50);

    cout << "Enter Branch            : ";
    cin >> branch;

    //=====================================================
    // 2. Student Reference ID (Name + "-" + Enrollment)
    //=====================================================

    // Manual method
    int k = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        ref[k] = name[i];
        k++;
    }
    ref[k] = '-';
    k++;
    for (int i = 0; enroll[i] != '\0'; i++)
    {
        ref[k] = enroll[i];
        k++;
    }
    ref[k] = '\0';

    cout << "\n-----------------------------------------------------" << endl;
    cout << "Student Reference (Manual)" << endl;
    cout << ref << endl;

    // Using standard string functions
    strcpy(ref, name);
    strcat(ref, "-");
    strcat(ref, enroll);

    cout << "\nStudent Reference (strcpy + strcat)" << endl;
    cout << ref << endl;

    //=====================================================
    // 3. Extract First Name and Last Name
    //=====================================================

    // First name = characters before the first space
    int i = 0;
    while (name[i] != ' ' && name[i] != '\0')
    {
        firstName[i] = name[i];
        i++;
    }
    firstName[i] = '\0';

    // Last name = characters after the last space
    int lastSpace = -1;
    for (int j = 0; name[j] != '\0'; j++)
    {
        if (name[j] == ' ')
        {
            lastSpace = j;
        }
    }

    k = 0;
    if (lastSpace != -1)
    {
        for (int j = lastSpace + 1; name[j] != '\0'; j++)
        {
            lastName[k] = name[j];
            k++;
        }
    }
    lastName[k] = '\0';

    cout << "\n-----------------------------------------------------" << endl;
    cout << "First Name" << endl;
    cout << firstName << endl;
    cout << "\nLast Name" << endl;
    if (strlen(lastName) == 0)
    {
        cout << "(No last name entered)" << endl;
    }
    else
    {
        cout << lastName << endl;
    }

    //=====================================================
    // 4. Search keyword in Student Name
    //=====================================================

    cout << "\n-----------------------------------------------------" << endl;
    cout << "Enter Keyword : ";
    cin >> keyword;

    // Manual method
    int nameLen = strlen(name);
    int keyLen = strlen(keyword);
    bool found = false;

    for (int a = 0; a <= nameLen - keyLen; a++)
    {
        int b = 0;
        while (b < keyLen && name[a + b] == keyword[b])
        {
            b++;
        }
        if (b == keyLen)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Keyword Found. (Manual)" << endl;
    }
    else
    {
        cout << "Keyword Not Found. (Manual)" << endl;
    }

    // Using standard string function
    if (strstr(name, keyword) != NULL)
    {
        cout << "Keyword Found. (strstr)" << endl;
    }
    else
    {
        cout << "Keyword Not Found. (strstr)" << endl;
    }

    //=====================================================
    // 5. Complete Student Report
    //=====================================================

    cout << "\n-----------------------------------------------------" << endl;
    cout << "Student Report" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Enrollment Number : " << enroll << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;
    cout << "First Name        : " << firstName << endl;
    cout << "Last Name         : " << lastName << endl;
    cout << "Reference ID      : " << ref << endl;
    cout << "-----------------------------------------------------" << endl;

    return 0;
}   