#include <iostream>

using namespace std;

int main()
{
    int nums[5] = {10, 20, 30, 40, 50};
    int *pointer = nums;

    cout << "Index\tValue\tAddress" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << i << "\t" << *(pointer + i) << "\t" << (pointer + i) << endl;
    }

    cout << "----------------------------------" << endl;
    cout << "Each address increases by " << sizeof(int) << " bytes (size of int)." << endl;

    return 0;
}
