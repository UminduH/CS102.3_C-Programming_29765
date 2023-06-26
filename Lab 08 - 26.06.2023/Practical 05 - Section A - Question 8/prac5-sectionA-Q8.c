#include <stdio.h>

int main()
{
    int i, num, no_digits = 0, og_num, remainder, result = 1, power, is_armstrong = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    og_num = num;

    while (num != 0 )
    {
        num /= 10;
        no_digits++;
    }

    num = og_num;

    for (i = 0; i < no_digits; i++)
    {
        remainder = num % 10;

        for (power = no_digits; power >= 1; power--)
        {
            result *= remainder;
        }

        is_armstrong += result;
        result = 1;
        num /= 10;
    }

    if (is_armstrong == og_num)
        printf("\n%d is an Armstrong Number.\n", og_num);
    else
        printf("\n%d is not an Armstrong Number.\n", og_num);
}
