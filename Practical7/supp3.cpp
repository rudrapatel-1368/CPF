#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char para[500];
    char oldW[50];
    char newW[50];
    char result[1000];

    int i = 0, j = 0, k;
    int oldLen, newLen;
    int match;
    int count = 0;

    cout << "Enter Paragraph     : ";
    cin.getline(para, 500);

    cout << "Enter Word to Find  : ";
    cin >> oldW;

    cout << "Enter New Word      : ";
    cin >> newW;

    oldLen = strlen(oldW);
    newLen = strlen(newW);

    while (para[i] != '\0')
    {
        match = 1;
        for (k = 0; k < oldLen; k++)
        {
            if (para[i + k] != oldW[k])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
        {
            if (i > 0 && para[i - 1] != ' ')
            {
                match = 0;
            }
            char after = para[i + oldLen];
            if (after != ' ' && after != '\0' && after != '.' && after != ',')
            {
                match = 0;
            }
        }

        if (match == 1)
        {
            for (k = 0; k < newLen; k++)
            {
                result[j] = newW[k];
                j++;
            }
            i = i + oldLen;
            count++;
        }
        else
        {
            result[j] = para[i];
            j++;
            i++;
        }
    }
    result[j] = '\0';

    cout << endl;
    cout << "Occurrences Replaced : " << count << endl;
    cout << "Updated Paragraph    : " << result << endl;

    return 0;
}
