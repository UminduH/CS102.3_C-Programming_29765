#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);


    // Using switch
    int num2;

    printf("\n\nEnter a number: ");
    scanf("%d", &num2);

    int remainder = num2 % 2;

    switch(remainder)
    {
        case 0: printf("%d is an even number.\n", num2); break;
        case 1: printf("%d is an odd number.\n", num2); break;
        default: printf("Invalid number.\n");
    }
}
