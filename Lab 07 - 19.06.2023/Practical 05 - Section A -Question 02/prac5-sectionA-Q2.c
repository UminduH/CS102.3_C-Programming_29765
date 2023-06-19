#include <stdio.h>

int main()
{
    int marks, total = 0;
    float avg;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter mark%d: ", i);
        scanf("%d", &marks);

        total += marks;
    }

    avg = (float) total / 10;

    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", avg);

    if (avg < 50)
        printf("\nFail!\n");
    else
        printf("\nPass\n");
}
