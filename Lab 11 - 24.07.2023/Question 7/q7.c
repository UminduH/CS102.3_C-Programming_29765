#include <stdio.h>

double calc_product(int x, float y)
{
    return x * y;
}

int main()
{
    int num1;
    float num2;

    printf("Enter an integer value: ");
    scanf("%d", &num1);
    printf("Enter a floating-point value: ");
    scanf("%f", &num2);

    printf("\nProduct: %lf\n", calc_product(num1, num2));
}
