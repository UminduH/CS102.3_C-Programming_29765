#include <stdio.h>

int calc_product(int x, int y)
{
    return x * y;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Product: %d\n", calc_product(num1, num2));
}
