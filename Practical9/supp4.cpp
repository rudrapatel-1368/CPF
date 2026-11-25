#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    int **m1 = NULL;
    int **m2 = NULL;
    int **sum = NULL;

    cout << "Enter Number of Rows    : ";
    cin >> rows;

    cout << "Enter Number of Columns : ";
    cin >> cols;

    if (rows <= 0 || cols <= 0)
    {
        cout << "Invalid Matrix Size." << endl;
        return 0;
    }

    m1 = new int*[rows];
    m2 = new int*[rows];
    sum = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        m1[i] = new int[cols];
        m2[i] = new int[cols];
        sum[i] = new int[cols];
    }

    cout << endl;
    cout << "Enter elements of First Matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of Second Matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    cout << endl;
    cout << "Resultant Matrix (Addition)" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] m1[i];
        delete[] m2[i];
        delete[] sum[i];
    }
    delete[] m1;
    delete[] m2;
    delete[] sum;

    m1 = NULL;
    m2 = NULL;
    sum = NULL;

    cout << endl;
    cout << "All Allocated Memory Released Successfully" << endl;

    return 0;
}
