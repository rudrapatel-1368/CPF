#include <iostream>

using namespace std;

int main()
{
    int nums[100];
    int n;

    cout << "Enter Number of Values : ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Number of Values must be between 1 and 100." << endl;
        return 0;
    }

    cout << "Enter " << n << " Values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Values in Reverse Order : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
