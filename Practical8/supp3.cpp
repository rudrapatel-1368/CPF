#include <iostream>

using namespace std;

void acceptNumbers(int nums[], int n);
int findMaximum(int nums[], int n);
int findMinimum(int nums[], int n);

int main()
{
    int nums[100];
    int n;

    cout << "Enter Number of Elements : ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Number of elements must be between 1 and 100." << endl;
        return 0;
    }

    acceptNumbers(nums, n);

    cout << "Maximum Value : " << findMaximum(nums, n) << endl;
    cout << "Minimum Value : " << findMinimum(nums, n) << endl;

    return 0;
}

void acceptNumbers(int nums[], int n)
{
    cout << "Enter " << n << " Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
}

int findMaximum(int nums[], int n)
{
    int maxVal = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > maxVal)
        {
            maxVal = nums[i];
        }
    }
    return maxVal;
}

int findMinimum(int nums[], int n)
{
    int minVal = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < minVal)
        {
            minVal = nums[i];
        }
    }
    return minVal;
}
