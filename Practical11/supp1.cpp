#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *fp;
    char city[50];

    fp = fopen("Cities.txt", "w");
    if (fp == NULL)
    {
        cout << "Error : Unable to Create Cities.txt" << endl;
        return 1;
    }

    cout << "Enter 5 City Names" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "City " << i << " : ";
        cin.getline(city, 50);
        fprintf(fp, "%s\n", city);
    }
    fclose(fp);

    cout << endl;
    cout << "Cities.txt Created Successfully" << endl;
    cout << endl;

    fp = fopen("Cities.txt", "r");
    if (fp == NULL)
    {
        cout << "Error : Unable to Open Cities.txt" << endl;
        return 1;
    }

    cout << "Contents of Cities.txt" << endl;
    while (fgets(city, 50, fp) != NULL)
    {
        cout << city;
    }
    fclose(fp);

    return 0;
}
