// Program 2.7 Calculations on a table
#include <stdio.h>

int main(void) {
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    const float Pi = 3.14159265f;

    printf("Input the diameter of the table: ");
    scanf("%f", &diameter);

    radius = diameter / 2;
    circumference = 2.0f * Pi * radius;
    area = Pi * radius * radius;

    printf("The area of table: %.3f\n", area);
    printf("The circumference of table: %.3f\n", circumference);
    return 0;
}
