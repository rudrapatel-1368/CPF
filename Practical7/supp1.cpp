#include <iostream>

using namespace std;

int main()
{
    char text[200];
    int vowels = 0, cons = 0;
    int i = 0;
    char ch;

    cout << "Enter a String : ";
    cin.getline(text, 200);

    while (text[i] != '\0')
    {
        ch = text[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                cons++;
            }
        }
        i++;
    }

    cout << "Vowels     : " << vowels << endl;
    cout << "Consonants : " << cons << endl;

    return 0;
}
