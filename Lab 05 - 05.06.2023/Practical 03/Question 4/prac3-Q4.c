#include <stdio.h>

int main()
{
    const pi = 3.14159;
    float r;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("\nDiameter = %.3f\n", 2*r);
    printf("Circumference = %.3f\n", 2*pi*r);
    printf("Area = %.3f\n", pi * (r*r));
}
