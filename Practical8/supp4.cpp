#include <iostream>

using namespace std;

int binarySearch(int nums[], int low, int high, int key);

int main()
{
    int nums[100];
    int n;
    int key;
    int pos;

    cout << "Enter Number of Elements : ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Number of elements must be between 1 and 100." << endl;
        return 0;
    }

    cout << "Enter " << n << " Elements (in sorted order) : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter Element to Search : ";
    cin >> key;

    pos = binarySearch(nums, 0, n - 1, key);

    if (pos == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at Position " << pos + 1 << endl;
    }

    return 0;
}

int binarySearch(int nums[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (nums[mid] == key)
    {
        return mid;
    }
    else if (key < nums[mid])
    {
        return binarySearch(nums, low, mid - 1, key);
    }
    else
    {
        return binarySearch(nums, mid + 1, high, key);
    }
}
