#include <stdio.h>

int main()
{
    int num, remainder = 0, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    } while (num != 0);

    printf("\nThe reversed number is %d\n", reversed);
}
