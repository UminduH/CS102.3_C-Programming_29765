#include <stdio.h>

int main()
{
    int num1, num2, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    remainder = num1 % num2;

    if (remainder == 0)
        printf("%d is a multiple of %d\n", num1, num2);
    else
        printf("%d is not a multiple of %d\n", num1, num2);
}
