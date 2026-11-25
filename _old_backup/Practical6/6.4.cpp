#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    //Part A: Matrix multiplication
    // int A[3][3], B[3][3], C[3][3];

    // cout << "***************************************************************" << endl;
    // cout << "                       MATRIX MULTIPLICATION" << endl;
    // cout << "***************************************************************" << endl;

    // cout << "\nEnter the elements of first matrix(3x3): ";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j<3; j++)
    //     {
    //         cin >> A[i][j];
    //     }
    // }
    // cout << "Enter the elements for second matrix(3x3): ";
    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         cin >> B[i][j];
    //     }
    // }
    // for (int i=0; i<3; i++)
    // {
    //     for (int j =0; j<3; j++)
    //     {
    //         C[i][j] = 0;
    //         for (int k = 0; k<3; k++)
    //         {
    //             C[i][j] += A[i][k] * B[k][j];
    //         }
    //     }
    // }
    // //display the first matrix
    // cout << "\nFirst matrix: " << endl;
    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         cout << A[i][j] << "\t";

    //     }
    //     cout << endl;
    // }
    // //display the second matrix
    // cout << "\nSecond matrix: " << endl;
    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         cout << B[i][j] << "\t";

    //     }
    //     cout << endl;
    // }
    
    // //display the Third matrix
    // cout << "\nThird matrix: " << endl;
    // for (int i=0; i<3; i++)
    // {
    //     for (int j=0; j<3; j++)
    //     {
    //         cout << C[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    //Part B: Merging sorted arrays
    int n1, n2;

    cout << "\n***************************************************************" << endl;
    cout << "                          MERGE SORTED ARRAYS" << endl;
    cout << "\n***************************************************************" << endl;

    cout << "\nEnter size of First array: ";
    cin >> n1;

    int arry1[100];

    cout << "Enter the elements of First array: ";
    for (int i=0; i<n1; i++)
    {
        cin >> arry1[i];

    }
    cout << "\nEnter size of second array: ";
    cin >> n2;

    int arry2[100];
    cout << "Enter second arry: ";
    for (int i=0; i<n2; i++)
    {
        cin >> arry2[i];
    }

    int arry3[300];
    int i = 0, j =0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arry1[i] < arry2[j])
        {
            arry3[k] = arry1[i];
            i++;
        }
        else
        {
            arry3[k] = arry2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arry3[k] = arry1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arry3[k] = arry2[j];
        j++;
        k++;
    }
    //Display first array
    cout << "\nFirst array: ";
    for (int i =0; i < n1; i++)
    {
        cout << arry1[i] << " ";
    }

    cout << "\nSecond Array: ";
     for (int i =0; i < n2; i++)
    {
        cout << arry2[i] << " ";
    }
     
    cout << "\nThird Array: ";
     for (int i =0; i < n1 + n2; i++)
    {
        cout << arry3[i] << " ";
    }
}