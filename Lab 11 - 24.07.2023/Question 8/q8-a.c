#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2)
{
    return sqrt((side1 * side1) + (side2 * side2));
}

int main()
{
    double side1, side2;

    printf("Enter the distances of the sides of the triangle: ");
    scanf("%lf %lf", &side1, &side2);

    printf("\nHypotenuse: %lf\n", hypotenuse(side1, side2));
}
