#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    string pid[100];
    string pname[100];
    int score[100];

    string sid;
    int idx = -1;

    int tScore;
    string tId, tName;

    int top;

    cout << "********************************************" << endl;
    cout << "        SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "Enter Number of Participants: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Number of Participants must be between 1 and 100." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Participant ID: ";
        cin >> pid[i];

        cout << "Enter Participant Name: ";
        cin >> pname[i];

        cout << "Enter Score: ";
        cin >> score[i];
    }

    cout << endl;
    cout << "Search Participant" << endl;
    cout << "Enter Participant ID: ";
    cin >> sid;

    for (int i = 0; i < n; i++)
    {
        if (pid[i] == sid)
        {
            idx = i;
            break;
        }
    }

    cout << endl;
    cout << "--------------------------------------" << endl;

    if (idx != -1)
    {
        cout << "          Participant Found" << endl;
        cout << "--------------------------------------" << endl;
        cout << "ID     : " << pid[idx] << endl;
        cout << "Name   : " << pname[idx] << endl;
        cout << "Score  : " << score[idx] << endl;
    }
    else
    {
        cout << "        Participant Not Found" << endl;
        cout << "--------------------------------------" << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (score[j] < score[j + 1])
            {
                tScore = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tScore;

                tId = pid[j];
                pid[j] = pid[j + 1];
                pid[j + 1] = tId;

                tName = pname[j];
                pname[j] = pname[j + 1];
                pname[j + 1] = tName;
            }
        }
    }

    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "             Ranking List" << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;
    cout << "Rank\tName\tScore" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t" << pname[i] << "\t" << score[i] << endl;
    }

    cout << "--------------------------------------" << endl;

    top = 3;
    if (n < 3)
    {
        top = n;
    }

    cout << endl;
    cout << "Top Three Performers" << endl;

    for (int i = 0; i < top; i++)
    {
        cout << i + 1 << ". " << pname[i] << " - " << score[i] << endl;
    }

    return 0;
}
