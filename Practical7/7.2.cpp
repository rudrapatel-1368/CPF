#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char para[500];
    char sent[200];
    char text[700];
    char upper[700];
    char lower[700];
    char rev[700];
    char fWord[100];
    char lWord[100];
    char key[100];
    char word[100];

    char copy[700];
    char joined[700];
    char lUpper[700];
    char lLower[700];

    int length;
    int chars, words, alpha, digits, spl;
    int inWord;
    int i, j, k;
    int start, end;
    int pos;
    int kLen;
    int match;
    int isPal;
    int wLen;
    int len2;

    cout << "********************************************" << endl;
    cout << "          DOCUMENT TEXT ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // 1. Accept a paragraph
    cout << "Enter Paragraph" << endl;
    cout << endl;
    cin.getline(para, 500);
    cout << endl;

    // Part A - Text Analysis
    length = 0;
    while (para[length] != '\0')
    {
        length++;
    }

    chars = length;
    words = 0;
    alpha = 0;
    digits = 0;
    spl = 0;
    inWord = 0;

    for (i = 0; i < length; i++)
    {
        char ch = para[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            alpha++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch != ' ')
        {
            spl++;
        }

        if (ch != ' ' && inWord == 0)
        {
            words++;
            inWord = 1;
        }
        else if (ch == ' ')
        {
            inWord = 0;
        }
    }

    cout << "--------------------------------------------" << endl;
    cout << "Text Analysis" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Characters         : " << chars << endl;
    cout << "Words              : " << words << endl;
    cout << "Alphabets          : " << alpha << endl;
    cout << "Digits             : " << digits << endl;
    cout << "Special Characters : " << spl << endl;
    cout << endl;

    // Part B - String Extraction

    i = 0;
    while (para[i] != ' ' && para[i] != '\0')
    {
        fWord[i] = para[i];
        i++;
    }
    fWord[i] = '\0';

    end = length - 1;
    while (end >= 0 && !((para[end] >= 'A' && para[end] <= 'Z') ||
                         (para[end] >= 'a' && para[end] <= 'z') ||
                         (para[end] >= '0' && para[end] <= '9')))
    {
        end--;
    }

    start = end;
    while (start > 0 && para[start - 1] != ' ')
    {
        start--;
    }

    j = 0;
    for (i = start; i <= end; i++)
    {
        lWord[j] = para[i];
        j++;
    }
    lWord[j] = '\0';

    cout << "--------------------------------------------" << endl;
    cout << "String Extraction" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "First Word        : " << fWord << endl;
    cout << "Last Word         : " << lWord << endl;
    cout << "First Character   : " << para[0] << endl;
    cout << "Last Character    : " << para[length - 1] << endl;
    cout << endl;

    // Part C - String Concatenation
    cout << "--------------------------------------------" << endl;
    cout << "Concatenation" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Enter Additional Sentence" << endl;
    cout << endl;
    cin.getline(sent, 200);
    cout << endl;

    i = 0;
    while (para[i] != '\0')
    {
        text[i] = para[i];
        i++;
    }

    text[i] = '\n';
    i++;

    j = 0;
    while (sent[j] != '\0')
    {
        text[i] = sent[j];
        i++;
        j++;
    }
    text[i] = '\0';

    length = i;

    cout << "Updated Paragraph" << endl;
    cout << endl;
    cout << text << endl;
    cout << endl;

    // Part D - Pattern Matching
    cout << "--------------------------------------------" << endl;
    cout << "Pattern Matching" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Enter Search Word : ";
    cin >> key;
    cout << endl;

    kLen = 0;
    while (key[kLen] != '\0')
    {
        kLen++;
    }

    pos = -1;
    for (i = 0; i <= length - kLen; i++)
    {
        match = 1;
        for (j = 0; j < kLen; j++)
        {
            if (text[i + j] != key[j])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        cout << "Keyword Found" << endl;
        cout << endl;
        cout << "First Occurrence Position : " << pos + 1 << endl;
    }
    else
    {
        cout << "Keyword Not Found" << endl;
    }
    cout << endl;

    // Part E - String Transformation
    for (i = 0; i <= length; i++)
    {
        char ch = text[i];

        if (ch >= 'a' && ch <= 'z')
        {
            upper[i] = ch - 32;
        }
        else
        {
            upper[i] = ch;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
            lower[i] = ch + 32;
        }
        else
        {
            lower[i] = ch;
        }
    }

    cout << "--------------------------------------------" << endl;
    cout << "String Transformation" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Uppercase" << endl;
    cout << endl;
    cout << upper << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Lowercase" << endl;
    cout << endl;
    cout << lower << endl;
    cout << endl;

    j = 0;
    for (i = length - 1; i >= 0; i--)
    {
        rev[j] = text[i];
        j++;
    }
    rev[j] = '\0';

    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Reverse" << endl;
    cout << endl;
    cout << rev << endl;
    cout << endl;

    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Palindrome Check" << endl;
    cout << endl;
    cout << "Enter Word : ";
    cin >> word;
    cout << endl;

    wLen = 0;
    while (word[wLen] != '\0')
    {
        wLen++;
    }

    isPal = 1;
    k = wLen - 1;
    for (i = 0; i < wLen / 2; i++)
    {
        if (word[i] != word[k])
        {
            isPal = 0;
            break;
        }
        k--;
    }

    if (isPal == 1)
    {
        cout << "Result : Palindrome" << endl;
    }
    else
    {
        cout << "Result : Not Palindrome" << endl;
    }
    cout << endl;

    // Part F - Standard String Functions
    cout << "--------------------------------------------" << endl;
    cout << "Standard String Functions" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    len2 = strlen(text);
    cout << "Length               : " << len2 << endl;
    cout << endl;

    strcpy(copy, text);
    cout << "String Copied Successfully" << endl;
    cout << endl;

    if (strcmp(copy, text) == 0)
    {
        cout << "Comparison Result    : Equal" << endl;
    }
    else
    {
        cout << "Comparison Result    : Not Equal" << endl;
    }
    cout << endl;

    strcpy(joined, para);
    strcat(joined, "\n");
    strcat(joined, sent);
    if (strcmp(joined, text) == 0)
    {
        cout << "Concatenation        : Successful" << endl;
    }
    else
    {
        cout << "Concatenation        : Failed" << endl;
    }
    cout << endl;

    if (strstr(text, key) != NULL)
    {
        cout << "Substring Search     : Found" << endl;
    }
    else
    {
        cout << "Substring Search     : Not Found" << endl;
    }
    cout << endl;

    for (i = 0; i <= len2; i++)
    {
        lUpper[i] = toupper(text[i]);
        lLower[i] = tolower(text[i]);
    }

    if (strcmp(lUpper, upper) == 0)
    {
        cout << "toupper()            : Successful" << endl;
    }
    else
    {
        cout << "toupper()            : Failed" << endl;
    }
    cout << endl;

    if (strcmp(lLower, lower) == 0)
    {
        cout << "tolower()            : Successful" << endl;
    }
    else
    {
        cout << "tolower()            : Failed" << endl;
    }
    cout << endl;

    cout << "--------------------------------------------" << endl;

    return 0;
}
