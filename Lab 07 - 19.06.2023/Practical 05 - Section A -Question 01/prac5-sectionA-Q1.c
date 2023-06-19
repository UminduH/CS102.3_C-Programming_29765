#include <stdio.h>

int main()
{
    // Using while loop
    int x = 0;

    printf("Using while loop:\n");

    while (x <= 100)
    {
        printf("%d ", x);
        x++;
    }

    printf("\n\n");


    // Using do while loop
    int y = 0;

    printf("Using do while loop\n");

    do
    {
        printf("%d ", y);
        y++;
    } while (y <= 100);

    printf("\n\n");


    // Using for loop
    printf("Using for loop\n");

    for (int z = 0; z <= 100; z++)
    {
        printf("%d ", z);
    }

    printf("\n");
}
