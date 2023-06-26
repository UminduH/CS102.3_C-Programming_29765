#include <stdio.h>

int main()
{
    int first = 0, second = 1, next, i;

    printf("The first 10 numbers of the Fibonacci Sequence are:\n");
    for (i = 0; i < 10; i++)
    {
        if (i == 0 || i == 1)
            printf("%d ", i);
        else
        {
            next = first + second;
            first = second;
            second = next;

            printf("%d ", next);
        }
    }

    printf("\n");
}
