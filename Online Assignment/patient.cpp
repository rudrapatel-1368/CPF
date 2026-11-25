#include <iostream>
#include <string>

using namespace std;

struct patients {
    int id;
    string name;
    int age;
    int type;
    union {
        int days;
        float fee;
    } info;
};

int main(){
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Enter between 1 and 100 patients.\n";
        return 1;
    }
    patients p[100];

    for (int i = 0; i < n; i++){
        cout << "Enter the id of patient " << i+1 << ": ";
        cin >> p[i].id;

        cout << "Enter the name of patient " << i+1 << ": ";
        cin >> p[i].name;

        cout << "Enter the age of patient " << i+1 << ": ";
        cin >> p[i].age;

        cout << "Enter the type of patient " << i+1 << "(1 = indoors, 2 = outdoors): ";
        cin >> p[i].type;

        if (p[i].type == 1){
            cout << "Enter the number of days: ";
            cin >> p[i].info.days;
        }

        else if (p[i].type == 2)
        {
            cout << "Enter the amount of fees: ";
            cin >> p[i].info.fee;
        }
        else{
            cout << "Invalid type!, Try again...\n";
            i--;
            continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Patient " << i+1 << " ID: " << p[i].id << endl;
        cout << "Patient " << i+1 << " name: " << p[i].name << endl;
        cout << "Patient " << i+1 << " age: " << p[i].age << endl;
        
        if (p[i].type == 1){
            cout << "Patient " << i+1 << " Indoors, days: " << p[i].info.days << endl;
        }

        else if (p[i].type == 2)
        {
            cout << "Patient " << i+1 << " Outdoors, fees: " << p[i].info.fee << endl;
        }
    }
}

