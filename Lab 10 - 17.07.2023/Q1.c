#include <stdio.h>

int main()
{
    int num1[3][3] = {3, 2, 4, 1, 4, 6, 4, 3, 2};
    int num2[3][3] = {2, 6, 3, 4, 3, 2, 5, 1, 7};
    int sum[3][3];
    int i, j;

    for (i = 0; i < 3; i ++)
    {
        printf("| ");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", num1[i][j]);
        }
        printf("|");


        if (i == 1)
            printf("  +  ");
        else
            printf("     ");


        printf("| ");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", num2[i][j]);
        }
        printf("|");


        if (i == 1)
            printf("  =  ");
        else
            printf("     ");


        // Calculating sum array
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum[i][j] = num1[i][j] + num2[i][j];
            }
        }


        printf("| ");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("|");


        printf("\n");
    }
}

