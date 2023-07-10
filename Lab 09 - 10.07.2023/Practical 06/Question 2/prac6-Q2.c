#include <stdio.h>

int main()
{
    // Input size of the array
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);


    // Enter numbers for Array 1
    int arr1[size], arr2[size], total = 0;

    printf("\nInput the numbers for Array 1: \n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Num%d: ", i+1);
        scanf("%d", &arr1[i]);

        total += arr1[i];
    }

    printf("\nThe Scalar Sum of Array 1 is %d\n", total);

    total = 0;

    // Enter numbers for Array 2
    printf("\n\nInput the numbers for Array 2: \n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Num%d: ", i+1);
        scanf("%d", &arr2[i]);

        total += arr2[i];
    }

    printf("\nThe Scalar Sum of Array 2 is %d\n", total);

    // Declaring Vector Sum and Vector Product
    int vectorSum[size], vectorProduct[size];

    for (int i = 0; i < size; i++)
    {
        vectorSum[i] = arr1[i] + arr2[i];
        vectorProduct[i] = arr1[i] * arr2[i];
    }

    total = 0;

    // Calculating Scalar Product
    for (int i = 0; i < size; i++)
        total += vectorProduct[i];

    printf("\n\nThe Vector Sum array is: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", vectorSum[i]);
    }

    printf("\n\nThe Vector Product array is: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", vectorProduct[i]);
    }

    printf("\n\nThe Scalar Product is %d\n", total);
}
