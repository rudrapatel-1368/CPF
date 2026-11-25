#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *doc;
    FILE *bak;
    char line[200];
    int ch;
    int n = 3;
    long pos2;

    cout << "********************************************" << endl;
    cout << "FILE ORGANIZATION & FILE OPERATIONS UTILITY" << endl;
    cout << "********************************************" << endl;

    // Part A - File Creation and Writing
    doc = fopen("Document.txt", "w");
    if (doc == NULL)
    {
        cout << "Error : Unable to Create Document.txt" << endl;
        return 1;
    }
    cout << "Document.txt Created Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enter File Contents" << endl;
    for (int i = 0; i < n; i++)
    {
        cin.getline(line, 200);
        fputs(line, doc);
        fputs("\n", doc);
    }
    fclose(doc);

    cout << "--------------------------------------------" << endl;
    cout << "Data Written Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    // Part B - File Reading
    doc = fopen("Document.txt", "r");
    if (doc == NULL)
    {
        cout << "Error : Unable to Open Document.txt" << endl;
        return 1;
    }

    cout << "Reading Document.txt" << endl;
    while (fgets(line, 200, doc) != NULL)
    {
        cout << line;
    }
    cout << "--------------------------------------------" << endl;

    if (feof(doc))
    {
        cout << "End of File Reached Successfully" << endl;
    }
    else if (ferror(doc))
    {
        cout << "Error : Problem while Reading the File" << endl;
    }
    fclose(doc);
    cout << "--------------------------------------------" << endl;

    // Part C - File Copying and Error Detection
    cout << "Creating BackupDocument.txt" << endl;

    doc = fopen("Document.txt", "r");
    if (doc == NULL)
    {
        cout << "Error : Unable to Open Document.txt" << endl;
        return 1;
    }

    bak = fopen("BackupDocument.txt", "w");
    if (bak == NULL)
    {
        cout << "Error : Unable to Create BackupDocument.txt" << endl;
        fclose(doc);
        return 1;
    }

    ch = fgetc(doc);
    while (ch != EOF)
    {
        fputc(ch, bak);
        ch = fgetc(doc);
    }
    fclose(doc);
    fclose(bak);
    cout << "Contents Copied Successfully" << endl;

    bak = fopen("BackupDocument.txt", "r");
    if (bak != NULL)
    {
        cout << "Backup File Created Successfully" << endl;
        fclose(bak);
    }
    else
    {
        cout << "Error : Backup File Not Found" << endl;
    }
    cout << "--------------------------------------------" << endl;

    // Part D - Random File Access
    doc = fopen("Document.txt", "r");
    if (doc == NULL)
    {
        cout << "Error : Unable to Open Document.txt" << endl;
        return 1;
    }

    fgets(line, 200, doc);
    pos2 = ftell(doc);

    fseek(doc, 0, SEEK_END);
    cout << "Current File Position : " << ftell(doc) << endl;

    cout << "Moving File Pointer..." << endl;
    fseek(doc, pos2, SEEK_SET);

    cout << "Displaying Contents after Repositioning" << endl;
    if (fgets(line, 200, doc) != NULL)
    {
        cout << line;
    }
    cout << "--------------------------------------------" << endl;

    cout << "Resetting File Pointer" << endl;
    rewind(doc);
    while (fgets(line, 200, doc) != NULL)
    {
        cout << line;
    }
    fclose(doc);
    cout << "--------------------------------------------" << endl;

    cout << "Program Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
