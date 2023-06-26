#include <stdio.h>

int main()
{
    int base, power, result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent(power): ");
    scanf("%d", &power);

    int initial_power = power;

    for (power; power >= 1; power--)
    {
        result *= base;
    }

    printf("\n%d to the power of %d is %d\n", base, initial_power, result);
}
