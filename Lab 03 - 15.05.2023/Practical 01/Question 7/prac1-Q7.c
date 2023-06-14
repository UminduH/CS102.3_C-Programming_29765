#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swap:\n");
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swap:\n");
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);
}
