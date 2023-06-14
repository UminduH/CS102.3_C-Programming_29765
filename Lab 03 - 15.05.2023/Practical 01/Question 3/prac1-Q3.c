#include <stdio.h>

int main()
{
    int vInt;
    float vFloat;
    double vDouble;
    char vChar;

    printf("Enter char value: ");
    scanf("%c", &vChar);

    printf("Enter int value: ");
    scanf("%d", &vInt);

    printf("Enter float value: ");
    scanf("%f", &vFloat);

     printf("Enter double value: ");
     scanf("%lf", &vDouble);

     printf("\nInteger value: %d\nFloat value: %f\nDouble value: %lf\nChar value: %c\n", vInt, vFloat, vDouble, vChar);
}
