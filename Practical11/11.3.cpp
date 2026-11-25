#include <iostream>
#include <cstdio>

using namespace std;

void removeNewLine(char text[]);

int main()
{
    FILE *rec;
    FILE *bak;

    int n;
    char enrNo[20];
    char name[50];
    char branch[20];
    int sem;
    float per;
    char grade[5];

    char semTxt[10];
    char perTxt[20];
    int ch;

    cout << "********************************************" << endl;
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    // Part A - Create and Write Student Records
    rec = fopen("StudentRecords.txt", "w");
    if (rec == NULL)
    {
        cout << "Error : StudentRecords.txt cannot be Created." << endl;
        return 1;
    }
    cout << "StudentRecords.txt Created Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enter Number of Students : ";
    cin >> n;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;

        cout << "Enrollment Number : ";
        cin >> enrNo;
        cin.ignore();

        cout << "Student Name : ";
        cin.getline(name, 50);

        cout << "Branch : ";
        cin >> branch;

        cout << "Semester : ";
        cin >> sem;

        cout << "Percentage : ";
        cin >> per;

        cout << "Grade : ";
        cin >> grade;

        cout << "--------------------------------------------" << endl;

        fprintf(rec, "%s\n%s\n%s\n%d\n%.2f\n%s\n",
                enrNo, name, branch, sem, per, grade);
    }
    fclose(rec);

    cout << "Student Records Stored Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    // Part B - Read and Display Student Records
    rec = fopen("StudentRecords.txt", "r");
    if (rec == NULL)
    {
        cout << "Error : StudentRecords.txt cannot be Opened for Reading." << endl;
        return 1;
    }

    cout << "Reading StudentRecords.txt" << endl;

    while (fgets(enrNo, 20, rec) != NULL)
    {
        fgets(name, 50, rec);
        fgets(branch, 20, rec);
        fgets(semTxt, 10, rec);
        fgets(perTxt, 20, rec);
        fgets(grade, 5, rec);

        removeNewLine(enrNo);
        removeNewLine(name);
        removeNewLine(branch);
        removeNewLine(semTxt);
        removeNewLine(perTxt);
        removeNewLine(grade);

        cout << "Enrollment : " << enrNo << endl;
        cout << "Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Semester : " << semTxt << endl;
        cout << "Percentage : " << perTxt << endl;
        cout << "Grade : " << grade << endl;
        cout << "--------------------------------------------" << endl;
    }

    if (feof(rec))
    {
        cout << "End of File Reached Successfully" << endl;
    }
    else if (ferror(rec))
    {
        cout << "Error : Problem while Reading StudentRecords.txt" << endl;
    }
    fclose(rec);
    cout << "--------------------------------------------" << endl;

    // Part C - Backup Student Records
    cout << "Creating BackupStudentRecords.txt" << endl;

    rec = fopen("StudentRecords.txt", "r");
    if (rec == NULL)
    {
        cout << "Error : StudentRecords.txt cannot be Opened for Reading." << endl;
        return 1;
    }

    bak = fopen("BackupStudentRecords.txt", "w");
    if (bak == NULL)
    {
        cout << "Error : Backup File cannot be Created." << endl;
        fclose(rec);
        return 1;
    }

    ch = fgetc(rec);
    while (ch != EOF)
    {
        fputc(ch, bak);
        ch = fgetc(rec);
    }
    fclose(rec);
    fclose(bak);

    cout << "Backup Completed Successfully" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Program Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

void removeNewLine(char text[])
{
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == '\n' || text[i] == '\r')
        {
            text[i] = '\0';
            break;
        }
        i++;
    }
}
