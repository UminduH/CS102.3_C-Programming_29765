#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("%d is the highest number.\n", num1);
    else if (num2 > num1)
        printf("%d is the highest number.\n", num2);
    else
        printf("The numbers are equal.\n");
}
