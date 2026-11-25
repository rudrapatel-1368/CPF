#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void add();
int subtract();
void multiply(int a, int b);
int divide(int a, int b);

int main()
{
//Addition
    add();
//Subtraction
    int ans = subtract();
    cout << "Subtraction of a and b: " << ans << endl;
//Multiplication
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    multiply(a, b);
//Division
    int division = divide(a, b);
    cout << "Division of a and b: " << division << endl;

}

void add()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    int sum = a + b;

    cout << "Sum of a and b: " << sum << endl;
}

int subtract()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    return a-b;
}

void multiply(int a, int b)
{
    int multiply = a*b;
    cout << "Multiplication of a and b: " << multiply << endl;
}

int divide(int a, int b)
{
    if(b==0)
    {
        cout << "b cant be zero!";
    }
    else{
        float div = float(a)/float(b);
        return div;
    }
}