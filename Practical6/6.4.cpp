#include <iostream>

using namespace std;

int main()
{
    // Part A : Matrix Multiplication
    int m1[3][3], m2[3][3], res[3][3];

    cout << "********************************************" << endl;
    cout << "          MATRIX MULTIPLICATION" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "Enter elements of First Matrix (3 x 3) :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of Second Matrix (3 x 3) :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                res[i][j] = res[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }

    cout << endl;
    cout << "First Matrix" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Second Matrix" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;
    cout << "Resultant Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "-----------------------------------------" << endl;

    // Part B : Merge Two Sorted Arrays
    int a1[50], a2[50], merged[100];
    int n1, n2;
    int i, j, k;

    cout << endl;
    cout << "********************************************" << endl;
    cout << "           MERGE SORTED ARRAYS" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    cout << "Enter size of First Array : ";
    cin >> n1;

    if (n1 < 1 || n1 > 50)
    {
        cout << "Size of First Array must be between 1 and 50." << endl;
        return 0;
    }
    cout << "Enter elements of First Array (in sorted order) : ";
    for (i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cout << "Enter size of Second Array : ";
    cin >> n2;

    if (n2 < 1 || n2 > 50)
    {
        cout << "Size of Second Array must be between 1 and 50." << endl;
        return 0;
    }
    cout << "Enter elements of Second Array (in sorted order) : ";
    for (i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            merged[k] = a1[i];
            i++;
        }
        else
        {
            merged[k] = a2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        merged[k] = a1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        merged[k] = a2[j];
        j++;
        k++;
    }

    cout << endl;
    cout << "First Array" << endl;
    cout << endl;
    for (i = 0; i < n1; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "Second Array" << endl;
    cout << endl;
    for (i = 0; i < n2; i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;
    cout << "Merged Sorted Array" << endl;
    cout << endl;
    for (i = 0; i < k; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
