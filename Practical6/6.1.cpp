#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;

    string pid[100];
    string pname[100];
    int score[100];

    int total = 0;
    int high, low;
    float avg;

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

    high = score[0];
    low = score[0];

    for (int i = 0; i < n; i++)
    {
        total = total + score[i];

        if (score[i] > high)
        {
            high = score[i];
        }
        if (score[i] < low)
        {
            low = score[i];
        }
    }

    avg = (float)total / n;

    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "          Participant Performance" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "ID\tName\tScore" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << pid[i] << "\t" << pname[i] << "\t" << score[i] << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Total Score: " << total << endl;
    cout << "Average Score: " << avg << endl;
    cout << "Highest Score: " << high << endl;
    cout << "Lowest Score: " << low << endl;

    return 0;
}
