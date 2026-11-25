#include <iostream>

using namespace std;

int main()
{
    char sent[200];
    char result[200];
    int i = 0, j = 0;

    cout << "Enter a Sentence : ";
    cin.getline(sent, 200);

    while (sent[i] == ' ')
    {
        i++;
    }

    while (sent[i] != '\0')
    {
        if (sent[i] != ' ' || (j > 0 && result[j - 1] != ' '))
        {
            result[j] = sent[i];
            j++;
        }
        i++;
    }

    if (j > 0 && result[j - 1] == ' ')
    {
        j--;
    }
    result[j] = '\0';

    cout << "Updated Sentence : " << result << endl;

    return 0;
}
