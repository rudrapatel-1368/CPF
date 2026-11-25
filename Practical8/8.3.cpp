#include <iostream>

using namespace std;

int fCalls = 0;
int fibCalls = 0;

long long factorialIterative(int n);
long long factorialRecursive(int n);

void fibonacciIterative(int terms);
int fibonacciRecursive(int n);

int main()
{
    int num;
    int terms;

    cout << "********************************************" << endl;
    cout << " RECURSIVE MATHEMATICAL OPERATIONS ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // Part A - Factorial
    cout << "------------------ Factorial -----------------" << endl;
    cout << endl;

    cout << "Enter a Number : ";
    cin >> num;
    cout << endl;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial (Iterative) : " << factorialIterative(num) << endl;
        cout << "Function Calls        : 1" << endl;
        cout << endl;

        fCalls = 0;
        cout << "Factorial (Recursive) : " << factorialRecursive(num) << endl;
        cout << "Function Calls        : " << fCalls << endl;
    }
    cout << endl;

    // Part B - Fibonacci Series
    cout << "-------------- Fibonacci Series --------------" << endl;
    cout << endl;

    cout << "Enter Number of Terms : ";
    cin >> terms;
    cout << endl;

    cout << "Fibonacci Series (Iterative)" << endl;
    cout << endl;
    fibonacciIterative(terms);
    cout << "Function Calls : 1" << endl;
    cout << endl;

    fibCalls = 0;
    cout << "Fibonacci Series (Recursive)" << endl;
    cout << endl;
    for (int i = 0; i < terms; i++)
    {
        cout << fibonacciRecursive(i) << " ";
    }
    cout << endl;
    cout << "Function Calls : " << fibCalls << endl;
    cout << endl;

    // Part C - Comparison
    cout << "----------------- Comparison -----------------" << endl;
    cout << endl;
    cout << "Number of Function Calls" << endl;
    cout << "  Iterative : only one call, the loop does the work." << endl;
    cout << "  Recursive : one call for every step (Fibonacci repeats" << endl;
    cout << "              the same calls again and again)." << endl;
    cout << endl;
    cout << "Program Readability" << endl;
    cout << "  Recursive code is shorter and looks like the" << endl;
    cout << "  mathematical definition." << endl;
    cout << endl;
    cout << "Code Complexity" << endl;
    cout << "  Iterative : simple loop, uses less memory." << endl;
    cout << "  Recursive : each call uses stack memory, recursive" << endl;
    cout << "              Fibonacci becomes very slow for large terms." << endl;
    cout << endl;
    cout << "Execution Flow" << endl;
    cout << "  Iterative : runs top to bottom inside one function." << endl;
    cout << "  Recursive : calls go down to the base condition and" << endl;
    cout << "              results come back up one by one." << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Program Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

long long factorialIterative(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

long long factorialRecursive(int n)
{
    fCalls++;

    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

void fibonacciIterative(int terms)
{
    int first = 0, second = 1, next;

    for (int i = 0; i < terms; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int fibonacciRecursive(int n)
{
    fibCalls++;

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
