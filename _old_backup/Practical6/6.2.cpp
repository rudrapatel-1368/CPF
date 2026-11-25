#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;

    //arrays
    string participantID[100];
    string participantName[100];
    int score[100];

    string searchID;
    int found = -1;
    int tempScore;
    string tempID;
    string tempName;


    //variables for Analysis

    int totalScore = 0;
    int highestScore, lowestScore;
    float averageScore;

    cout << "*********************************************************" << endl;
    cout << "             SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "*********************************************************" << endl;

    //Accept numnber of participants

    cout << "Enter the number of participants: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter perticipant ID: ";
        cin >> participantID[i];

        cout << "Enter participant name: ";
        cin >> participantName[i];

        cout << "Enter score: ";
        cin >> score[i];
    } 

    highestScore = score[0];
    lowestScore = score[0];
   
    for (int k = 0; k < n; k++)
    {
        totalScore += score[k];
    }

    for (int i = 0; i < n; i++)
    {
        if (score[i] > highestScore)
        {
            highestScore = score[i];
        }
        if (score[i] < lowestScore)
        {
            lowestScore = score[i];
        }
    }

    averageScore = (float)totalScore/n;

    cout << "\n***************************************************************************" << endl;
    cout << "                          PARTICIPANTS PERFORMANCE" << endl;
    cout << "****************************************************************************" << endl;

    cout << left << setw(12) << "ID" << setw(20) << "Name" << setw(10) << "Score" << endl;
    cout << "-----------------------------------------------------------------------------"<< endl;

    for (int i =0; i < n; i++)
    {
        cout << left << setw(12) << participantID[i] << setw(20) << participantName[i] << setw(10) << score[i] << endl;
    }
    cout << "-----------------------------------------------------------------------------" << endl;

    //score ananlysis
    cout << "                         SCORE ANALYSIS" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "Total Score        : " << totalScore << endl;
    cout << "Average Score      : " << averageScore << endl;
    cout << "Lowest Score       : " << lowestScore << endl;
    cout << "Highest Score      : " << highestScore << endl;

    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "                         SEARCH PARTICIPANTS" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Enter Participant ID: ";
    cin >> searchID;

    for (int i = 0; i < n; i++)
    {
        if (participantID[i] == searchID)
        {
            found = i;
            break;
        }
    }
    if (found !=-1)
    {
        cout << "\n*************************************************************" << endl;
        cout << "                        PARTICIPANT FOUND" << endl;
        cout << "***************************************************************" << endl;

        cout << "ID      :" << participantID[found] << endl;
        cout << "Name    :" << participantName[found] << endl;
        cout << "Score   :" << score[found] << endl;
    }
    else
    {
        cout << "Participant with ID " << searchID << " not found." << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n-i-1; j++)
        {
            if (score[j] < score[j+1])
            {
            tempScore = score[j];
            score[j] = score[j+1];
            score[j +1] = tempScore;

            tempID = participantID[j];
            participantID[j] = participantID[j+1];
            participantID[j+1] = tempID;

            tempName = participantName[j];
            participantName[j] = participantName[j+1];
            participantName[j+1] = tempName;
            }
        }
    }
    cout << "\n*************************************************************" << endl;
    cout << "                        PARTICIPANT PERFOMANCE" << endl;
    cout << "***************************************************************" << endl;

    cout << left << setw(8) << "Rank" << setw(20) << "Name" << setw(10) << "Score" << endl;
    cout << "***************************************************************" << endl;

    for (int i =0; i < n; i++)
    {
        cout << left << setw(8) << i+1 << setw(20) << participantName[i] << setw(10) << score[i] << endl;
    }
    cout << "\n*************************************************************" << endl;
    cout << "                        TOP THREE PERFORMERS" << endl;
    cout << "***************************************************************" << endl;

    for (int i = 0; i<3; i++)
    {
        cout << left << setw(8) << i+1 << setw(20) << participantName[i] << setw(10) << score[i] << endl;
    }

}