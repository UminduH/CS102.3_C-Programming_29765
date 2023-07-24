#include <stdio.h>

void calcSumDiff(int x, int y)
{
    printf("\nSum: %d\n", x + y);
    printf("Difference: %d\n", x - y);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calcSumDiff(num1, num2);
}
