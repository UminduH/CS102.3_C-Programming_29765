#include <stdio.h>

int main()
{
    float numbers[10], min, max, total = 0, avg;

    printf("Enter num1: ");
    scanf("%f", &numbers[0]);

    min = numbers[0];
    max = numbers[0];

    total += numbers[0];

    for (int i = 1; i <= 9; i++)
    {
        printf("Enter num%d: ", i+1);
        scanf("%f", &numbers[i]);

        if (numbers[i] < min)
            min = numbers[i];

        if (numbers[i] > max)
            max = numbers[i];

        total += numbers[i];
    }

    avg = total / 10.0;

    printf("\nMinimum value: %.2f\n", min);
    printf("Maximum value: %.2f\n", max);
    printf("Average value: %.2f\n", avg);

    printf("\nReversed order of values: ");

    for (int i = 9; i >= 0; i--)
        printf("%.2f ", numbers[i]);

    printf("\n");
}
