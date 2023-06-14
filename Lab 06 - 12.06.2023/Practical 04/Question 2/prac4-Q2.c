#include <stdio.h>

int main()
{
    float num1, num2;
    int op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nSelect your operation:\n");
    printf("Enter 1 to Add (+)\n");
    printf("Enter 2 to Subtract (-)\n");
    printf("Enter 3 to Divide (/)\n");
    printf("Enter 4 to Multiply (*)\n\n");

    scanf("%d", &op);

    switch(op)
    {
        case 1: printf("Answer = %.2f\n", num1 + num2); break;
        case 2: printf("Answer = %.2f\n", num1 - num2); break;
        case 3: printf("Answer = %.2f\n", num1 / num2); break;
        case 4: printf("Answer = %.2f\n", num1 * num2); break;
        default: printf("Invalid operator.\n");
    }
}
