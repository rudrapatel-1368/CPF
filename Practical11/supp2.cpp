#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *fp;
    char fname[100];
    int ch;
    int prev = '\n';
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    cout << "Enter File Name : ";
    cin.getline(fname, 100);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        cout << "Error : Unable to Open " << fname << endl;
        return 1;
    }

    ch = fgetc(fp);
    while (ch != EOF)
    {
        chars++;

        if (ch == '\n')
        {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }

        prev = ch;
        ch = fgetc(fp);
    }

    if (prev != '\n')
    {
        lines++;
    }

    fclose(fp);

    cout << "Characters : " << chars << endl;
    cout << "Words      : " << words << endl;
    cout << "Lines      : " << lines << endl;

    return 0;
}
