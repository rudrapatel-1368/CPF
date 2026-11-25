#include <iostream>
#include <cstdio>

using namespace std;

void copyFile(FILE *source, FILE *target);

int main()
{
    FILE *f1;
    FILE *f2;
    FILE *f3;
    char name1[100];
    char name2[100];
    char name3[100];
    char line[200];

    cout << "Enter First File Name  : ";
    cin.getline(name1, 100);

    cout << "Enter Second File Name : ";
    cin.getline(name2, 100);

    cout << "Enter Merged File Name : ";
    cin.getline(name3, 100);
    cout << endl;

    f1 = fopen(name1, "r");
    if (f1 == NULL)
    {
        cout << "Error : Unable to Open " << name1 << endl;
        return 1;
    }

    f2 = fopen(name2, "r");
    if (f2 == NULL)
    {
        cout << "Error : Unable to Open " << name2 << endl;
        fclose(f1);
        return 1;
    }

    f3 = fopen(name3, "w");
    if (f3 == NULL)
    {
        cout << "Error : Unable to Create " << name3 << endl;
        fclose(f1);
        fclose(f2);
        return 1;
    }

    copyFile(f1, f3);
    copyFile(f2, f3);

    if (ferror(f1) || ferror(f2) || ferror(f3))
    {
        cout << "Error : Problem while Merging Files" << endl;
    }
    else
    {
        cout << "Files Merged Successfully" << endl;
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    f3 = fopen(name3, "r");
    if (f3 == NULL)
    {
        cout << "Error : Unable to Open " << name3 << endl;
        return 1;
    }

    cout << endl;
    cout << "Contents of " << name3 << endl;
    cout << "--------------------------------------------" << endl;
    while (fgets(line, 200, f3) != NULL)
    {
        cout << line;
    }
    cout << "--------------------------------------------" << endl;
    fclose(f3);

    return 0;
}

void copyFile(FILE *source, FILE *target)
{
    int ch;
    int last = '\n';

    ch = fgetc(source);
    while (ch != EOF)
    {
        fputc(ch, target);
        last = ch;
        ch = fgetc(source);
    }

    if (last != '\n')
    {
        fputc('\n', target);
    }
}
