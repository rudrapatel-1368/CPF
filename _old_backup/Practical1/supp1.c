#include <stdio.h>

int main()
{
    char name[50];
    char enrollmentNo[20];
    char branch[20];

    // Input student details
    printf("Enter your name           : ");
    scanf(" %[^\n]", name);

    printf("Enter your enrollment no. : ");
    scanf("%s", enrollmentNo);

    printf("Enter your branch         : ");
    scanf("%s", branch);

    // Display student details
    printf("\n--------------------------------\n");
    printf("Name           : %s\n", name);
    printf("Enrollment No. : %s\n", enrollmentNo);
    printf("Branch         : %s\n", branch);
    printf("--------------------------------\n");

    return 0;
}
