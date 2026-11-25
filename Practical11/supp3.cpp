#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *src;
    FILE *dst;
    char srcName[100];
    char dstName[100];
    int ch;

    cout << "Enter Source File Name      : ";
    cin.getline(srcName, 100);

    cout << "Enter Destination File Name : ";
    cin.getline(dstName, 100);

    src = fopen(srcName, "r");
    if (src == NULL)
    {
        cout << "Error : Unable to Open " << srcName << endl;
        return 1;
    }

    dst = fopen(dstName, "w");
    if (dst == NULL)
    {
        cout << "Error : Unable to Create " << dstName << endl;
        fclose(src);
        return 1;
    }

    ch = fgetc(src);
    while (ch != EOF)
    {
        fputc(ch, dst);
        ch = fgetc(src);
    }

    fclose(src);
    fclose(dst);

    cout << "File Copied Successfully" << endl;

    return 0;
}
