#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }

    printf("\nSum of all digits is %d\n", sum);
}
