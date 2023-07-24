#include <stdio.h>

void calc_sum_diff_product(int x, int y)
{
    printf("\nSum: %d\nDifference: %d\nProduct: %d\n", x + y, x - y, x * y);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calc_sum_diff_product(num1, num2);
}
