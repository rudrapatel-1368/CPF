#include <iostream>

using namespace std;

// Part A - Recursive traversal
void printAscending(int cur, int n);
void printDescending(int n);

// Part B - Recursive number processing
int reverseNumber(int num, int reversed);
int sumOfDigits(int num);

// Part C - Recursive number conversion
void printBinary(int num);

int main()
{
    int n;
    int num;
    int dec;

    cout << "********************************************" << endl;
    cout << "          RECURSIVE UTILITY ANALYZER" << endl;
    cout << "********************************************" << endl;
    cout << endl;

    // Part A - Recursive Traversal
    cout << "------------ Recursive Traversal -------------" << endl;
    cout << endl;

    cout << "Enter a Positive Integer N : ";
    cin >> n;
    cout << endl;

    cout << "1 to N : ";
    printAscending(1, n);
    cout << endl;

    cout << "N to 1 : ";
    printDescending(n);
    cout << endl;
    cout << endl;

    // Part B - Recursive Number Processing
    cout << "--------- Recursive Number Processing --------" << endl;
    cout << endl;

    cout << "Enter a Positive Integer : ";
    cin >> num;
    cout << endl;

    if (num < 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        cout << "Reversed Number : " << reverseNumber(num, 0) << endl;
        cout << "Sum of Digits   : " << sumOfDigits(num) << endl;
    }
    cout << endl;

    // Part C - Recursive Number Conversion
    cout << "--------- Recursive Number Conversion --------" << endl;
    cout << endl;

    cout << "Enter a Decimal Number : ";
    cin >> dec;
    cout << endl;

    if (dec < 0)
    {
        cout << "Please enter a non-negative number." << endl;
    }
    else
    {
        cout << "Binary Number : ";
        if (dec == 0)
        {
            cout << 0;
        }
        else
        {
            printBinary(dec);
        }
        cout << endl;
    }
    cout << endl;

    // Part D - Comparative Analysis
    cout << "------------ Comparative Analysis ------------" << endl;
    cout << endl;
    cout << "Program Readability" << endl;
    cout << "  Recursive functions are short, but the logic is" << endl;
    cout << "  hidden in the calls. Loops are easier to trace." << endl;
    cout << endl;
    cout << "Execution Flow" << endl;
    cout << "  Iteration repeats inside one function." << endl;
    cout << "  Recursion moves towards the base condition, then" << endl;
    cout << "  returns back through every pending call." << endl;
    cout << endl;
    cout << "Number of Function Calls" << endl;
    cout << "  Iteration : 1 call." << endl;
    cout << "  Recursion : 1 call per number / digit / bit." << endl;
    cout << endl;
    cout << "Ease of Implementation" << endl;
    cout << "  Binary conversion is easier with recursion because" << endl;
    cout << "  bits come out in the correct order automatically." << endl;
    cout << "  Simple counting (1 to N) is easier with a loop." << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Program Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

void printAscending(int cur, int n)
{
    if (cur > n)
    {
        return;
    }
    cout << cur << " ";
    printAscending(cur + 1, n);
}

void printDescending(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    printDescending(n - 1);
}

int reverseNumber(int num, int reversed)
{
    if (num == 0)
    {
        return reversed;
    }
    return reverseNumber(num / 10, reversed * 10 + num % 10);
}

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

void printBinary(int num)
{
    if (num == 0)
    {
        return;
    }
    printBinary(num / 2);
    cout << num % 2;
}
