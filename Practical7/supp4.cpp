#include <iostream>

using namespace std;

int main()
{
    char para[500];
    char word[100];
    char longW[100];
    char shortW[100];

    int i = 0, j, k;
    int wLen;
    int longLen = 0;
    int shortLen = 1000;

    cout << "Enter Paragraph : ";
    cin.getline(para, 500);

    while (para[i] != '\0')
    {
        while (para[i] != '\0' &&
               !((para[i] >= 'A' && para[i] <= 'Z') ||
                 (para[i] >= 'a' && para[i] <= 'z') ||
                 (para[i] >= '0' && para[i] <= '9')))
        {
            i++;
        }

        wLen = 0;
        while ((para[i] >= 'A' && para[i] <= 'Z') ||
               (para[i] >= 'a' && para[i] <= 'z') ||
               (para[i] >= '0' && para[i] <= '9'))
        {
            word[wLen] = para[i];
            wLen++;
            i++;
        }
        word[wLen] = '\0';

        if (wLen == 0)
        {
            continue;
        }

        if (wLen > longLen)
        {
            longLen = wLen;
            for (j = 0; j <= wLen; j++)
            {
                longW[j] = word[j];
            }
        }

        if (wLen < shortLen)
        {
            shortLen = wLen;
            for (k = 0; k <= wLen; k++)
            {
                shortW[k] = word[k];
            }
        }
    }

    if (longLen == 0)
    {
        cout << "No words found." << endl;
    }
    else
    {
        cout << "Longest Word  : " << longW << " (Length : " << longLen << ")" << endl;
        cout << "Shortest Word : " << shortW << " (Length : " << shortLen << ")" << endl;
    }

    return 0;
}
