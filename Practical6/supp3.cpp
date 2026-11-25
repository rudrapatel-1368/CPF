#include <iostream>

using namespace std;

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + nums[i];
    }

    cout << "Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Sum   : " << sum << endl;

    return 0;
}
