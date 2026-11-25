#include <iostream>

using namespace std;

int main()
{
    int cpfMarks = 70;
    int mathMarks = 80;

    int before;
    int result;

    int step1, step2, step3, step4, step5;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "******************************************" << endl;
    cout << endl;

    // Part 1
    cout << "------------------------------------------" << endl;
    cout << "Marks Moderation (CPF Marks = 70)" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;

    cout << "Sr. No.\tStatement\tBefore\tAfter" << endl;

    // 1. Pre-increment
    cpfMarks = 70;
    before = cpfMarks;
    ++cpfMarks;
    cout << "1\t++cpfMarks\t" << before << "\t" << cpfMarks << endl;

    // 2. Pre-decrement
    cpfMarks = 70;
    before = cpfMarks;
    --cpfMarks;
    cout << "2\t--cpfMarks\t" << before << "\t" << cpfMarks << endl;

    // 3. Post-increment
    cpfMarks = 70;
    before = cpfMarks;
    cpfMarks++;
    cout << "3\tcpfMarks++\t" << before << "\t" << cpfMarks << endl;

    // 4. Post-decrement
    cpfMarks = 70;
    before = cpfMarks;
    cpfMarks--;
    cout << "4\tcpfMarks--\t" << before << "\t" << cpfMarks << endl;

    // Part 2
    cpfMarks = 70;
    mathMarks = 80;

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Expression Evaluation" << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;
    cout << "result = ++cpfMarks + cpfMarks++ + --mathMarks + ++mathMarks - mathMarks--" << endl;
    cout << endl;

    step1 = ++cpfMarks;
    cout << "++cpfMarks  -> value used = " << step1 << ", cpfMarks  = " << cpfMarks << endl;

    step2 = cpfMarks++;
    cout << "cpfMarks++  -> value used = " << step2 << ", cpfMarks  = " << cpfMarks << endl;

    step3 = --mathMarks;
    cout << "--mathMarks -> value used = " << step3 << ", mathMarks = " << mathMarks << endl;

    step4 = ++mathMarks;
    cout << "++mathMarks -> value used = " << step4 << ", mathMarks = " << mathMarks << endl;

    step5 = mathMarks--;
    cout << "mathMarks-- -> value used = " << step5 << ", mathMarks = " << mathMarks << endl;

    result = step1 + step2 + step3 + step4 - step5;

    cout << endl;
    cout << "result = " << step1 << " + " << step2 << " + " << step3 << " + " << step4 << " - " << step5 << endl;
    cout << "result = " << result << endl;

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Subject\t\t\t\tBefore\tAfter" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Computer Programming Foundation\t70\t" << cpfMarks << endl;
    cout << "Mathematics\t\t\t80\t" << mathMarks << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

/*
    Task 9 : Types of programming errors (examples from this program)

    1. Lexical Error  : invalid token, e.g.  int 9cpfMarks = 70;
                        Fix -> identifier cannot start with a digit : int cpfMarks = 70;

    2. Syntax Error   : grammar rule broken, e.g.  cout << result     (missing ;)
                        Fix -> cout << result;

    3. Semantic Error : statement is valid but meaning is wrong, e.g.
                        int grade = "A+";   (string stored in an int)
                        Fix -> string grade = "A+";

    4. Runtime Error  : program compiles but fails while running, e.g.
                        average = totalMarks / numberOfSubjects;  when numberOfSubjects = 0
                        Fix -> check numberOfSubjects != 0 before dividing

    5. Logical Error  : program runs but gives wrong answer, e.g.
                        percentage = totalMarks / 300 * 100;   (integer division gives 0)
                        Fix -> percentage = (totalMarks / 300.0) * 100;

    Note : the full expression
           result = ++cpfMarks + cpfMarks++ + --mathMarks + ++mathMarks - mathMarks--;
           changes the same variable more than once in one statement, so different
           compilers may give different answers. That is why it is evaluated above
           one step at a time.
*/
