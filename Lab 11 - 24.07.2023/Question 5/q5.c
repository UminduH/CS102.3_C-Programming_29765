#include <stdio.h>

void calc_sum()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n\n", num1 + num2);
}

int main()
{
    calc_sum();
    calc_sum();
    calc_sum();
}
