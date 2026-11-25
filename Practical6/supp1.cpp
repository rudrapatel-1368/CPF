#include <iostream>

using namespace std;

int main()
{
    int nums[100];
    int n;
    int largest;

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

    largest = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    cout << "Largest Number : " << largest << endl;

    return 0;
}
