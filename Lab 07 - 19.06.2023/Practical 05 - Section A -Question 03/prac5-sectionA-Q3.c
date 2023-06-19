#include <stdio.h>

int main()
{
    int num;
    int factorial = 1;

    int x = 1;

    while (x == 1)
    {
        printf("Enter a number to calculate the factorial: ");
        scanf("%d", &num);

        while (num < 0)
        {
            printf("Please input a positive integer(or zero): ");
            scanf("%d", &num);
        }

        int temp = num;

        for (num; num >= 1; num--)
        {
            factorial *= num;
        }

        printf("\nFactorial of %d is %d\n", temp, factorial);
        x = 2;
    }
}
