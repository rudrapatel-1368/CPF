#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int max = 100;
    string enrollment[max], name[max], grade[max];
    float percentage[max];

    int n;

    cout << "*****************************************************" << endl;
    cout << "        STUDENT RECCORD MANAGEMENT SYSTEM" << endl;
    cout << "*****************************************************" << endl;

    cout << "\nEnter number of Students: ";
    cin >> n;

    cout << "\nEnter student Details: \n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student" << i+1 << endl;

        cout << "Enter enrollment number: ";
        cin >> enrollment[i];
        cin.ignore();

        cout << "Enter student name: ";
        cin >> name[i];

        cout << "Enter Percentage: ";
        cin >> percentage[i];

        cout << endl;
    }
    cout << "-----------------------------------------------------" << endl;
    for (int i =0; i < n; i++)
    {
        cout << left << setw(12) << enrollment[i] << setw(20) << name[i] << fixed << setprecision(2) 
        << setw(10) << percentage[i] << grade[i] << endl;
    }

    cout << "-----------------------------------------------------" << endl;

    int pos;
    cout << "\nInsert New Student";
    cout << "\nEnter Position: ";
    cin >> pos; 
    if (pos >=1 && pos <= n+1)
    {
        for (int i = n; i >= pos; i--)
        {
            enrollment[i] = enrollment[i-1];
            name[i] = name[i-1];
            percentage[i] = percentage[i-1];
            grade[i] = grade[i-1];
        }
        cout << "Enter enrollment number: ";
        cin >> enrollment[pos-1];

        cout << ":Enter student name: ";
        cin >> name[pos-1];

        cout << "Enter percentage: ";
        cin >> percentage[pos-1];
        
        cout << "Enter grade: ";
        cin >> grade[pos-1];

        n++;

        cout << "\nRecodrd updated succefully";
        cout << "****************************************************" << endl;
        cout << "Updated student records";

        for (int i =0; i < n; i++)
        {
            cout << left << setw(12) << enrollment[i] << setw(20) << name[i] << fixed << setprecision(2) 
            << setw(10) << percentage[i] << grade[i] << endl;
        }
    }
    else 
    {
        cout << "\nInvalid position";
    }

    string searchenroll;
    bool found = false;

    cout << "\nUpdate Student record";
    cout << "\nEnter Enrolment number: ";
    cin >> searchenroll;

    for (int i =0; i < n; i++)
    {
        if (enrollment[i] == searchenroll)
        {
            cout << "Enter new percentage: ";
            cin >> percentage[i];

            cout << "Enter new grade: ";
            cin >> grade[i];
            found = true;

            cout << "\nRecord updated succesfully!" << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "\nStudent record not found!";
    }

    cout << "\n*******************************************************" << endl;
    cout << "\nDelete student Record\n";

    cout << "\nEnter the position: ";
    cin >> pos;
    if (pos >=1 && pos <=n)
    {
        for (int i=pos-1; i<n-1; i++)
        {
            enrollment[i] = enrollment[i+1];
            name[i] = name[i+1];
            percentage[i] = percentage[i+1];
            grade[i] = grade[i+1];
        }
        n--;
        cout << "\nRecord deleted succesfully!";
    }
    else
    {
        cout << "\nInvalid Position!" << endl;
    }

    cout << "-------------------------------------------------------------" << endl;
    cout << "Final student records";

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(12) << enrollment[i] << setw(20) << name[i] << fixed << setprecision(2) 
        << setw(10) << percentage[i] << grade[i] << endl;
    }
}