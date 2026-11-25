#include <iostream>
#include <string>

using namespace std;

struct Student {
    int roll;
    string name;
    int marks[3];
    int total;
    float avg;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Enter between 1 and 100 students.\n";
        return 1;
    }

    Student s[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll number: ";
        cin >> s[i].roll;
        cout << "Name: ";
        cin >> s[i].name;

        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Marks in subject " << j + 1 << ": ";
            cin >> s[i].marks[j];
            s[i].total += s[i].marks[j];
        }
        s[i].avg = s[i].total / 3.0;
    }

    int maxIndex = 0;

    cout << "\nStudent Records:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nRoll: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << j + 1 << ": " << s[i].marks[j] << endl;
        }
        cout << "Total: " << s[i].total << endl;
        cout << "Average: " << s[i].avg << endl;

        if (s[i].avg > s[maxIndex].avg) {
            maxIndex = i;
        }
    }

    cout << "\nHighest average: " << s[maxIndex].name
         << " (Roll " << s[maxIndex].roll << ") with " << s[maxIndex].avg << endl;

    return 0;
}