#include <iostream>
#include <cstdlib>

using namespace std;

struct Student {
    int roll;
    char name[50];
    float cgpa;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n < 1) {
        cout << "Need at least 1 student.\n";
        return 1;
    }

    Student *s = (Student*) malloc(n * sizeof(Student));

    if (s == NULL) {
        cout << "Memory allocation failed.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << "\n";
        cout << "Roll number: ";
        cin >> s[i].roll;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "CGPA: ";
        cin >> s[i].cgpa;
    }

    float limit;
    cout << "\nShow students with CGPA above: ";
    cin >> limit;

    bool found = false;
    cout << "\nStudents with CGPA > " << limit << ":\n";
    for (int i = 0; i < n; i++) {
        if (s[i].cgpa > limit) {
            cout << "Roll: " << s[i].roll << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "CGPA: " << s[i].cgpa << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No students found.\n";
    }

    free(s);
    s = NULL;

    return 0;
}