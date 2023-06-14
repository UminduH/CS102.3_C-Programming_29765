#include <stdio.h>

int main()
{
    float float1, float2, avg;

    printf("Enter first float number: ");
    scanf("%f", &float1);

    printf("Enter second float number: ");
    scanf("%f", &float2);

    avg = (float1 + float2) / 2;

    printf("\nAverage: %f\n", avg);
}
