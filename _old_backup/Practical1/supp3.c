#include <stdio.h>

int main()
{
    float length, breadth, area;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    // Area of rectangle
    area = length * breadth;

    printf("Area of rectangle = %.2f\n", area);

    return 0;
}
