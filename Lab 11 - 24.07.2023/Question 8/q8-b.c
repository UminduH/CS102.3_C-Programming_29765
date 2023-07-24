#include <stdio.h>

int smallest(int x, int y, int z)
{
    int min = x;

    if (min > y)
        min = y;

    if (min > z)
        min = z;

    return min;
}

int main()
{
    int num1, num2, num3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nSmallest number: %d\n", smallest(num1, num2, num3));
}
