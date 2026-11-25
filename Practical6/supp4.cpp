#include <iostream>

using namespace std;

int main()
{
    int nums[100];
    int n;
    int maxVal, minVal;

    cout << "Enter Number of Elements : ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Number of Elements must be between 1 and 100." << endl;
        return 0;
    }

    cout << "Enter " << n << " Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    maxVal = nums[0];
    minVal = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > maxVal)
        {
            maxVal = nums[i];
        }
        if (nums[i] < minVal)
        {
            minVal = nums[i];
        }
    }

    cout << "Maximum Element : " << maxVal << endl;
    cout << "Minimum Element : " << minVal << endl;

    return 0;
}
