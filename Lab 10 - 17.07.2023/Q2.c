#include <stdio.h>

int main()
{
    int num[4][4] = {8, 17, 9, 6, 5, 2, 11, 18, 7, 27, 28, 0, 4, 1, 3, 10};

    for (int i = 0; i < 4; i++)
    {
        printf("|  ");

        for (int j = 0; j < 4; j++)
        {
            printf("%-3d ", num[i][j]);
        }

        printf("|\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (num[i][j] == 5)
                printf("\nNumber 5 is at the index num[%d][%d]\n", i, j);
        }
    }
}
