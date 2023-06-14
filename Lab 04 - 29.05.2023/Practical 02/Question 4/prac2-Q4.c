#include <stdio.h>

int main()
{
    float F, C;

    printf("Enter temperature(in Farenheit): ");
    scanf("%f", &F);

    C = ((float)5/9) * (F - 32);

    printf("\nTemperature in degrees Farenheit: %.2f\n", F);
    printf("Temperature in degrees Celcius: %.2f\n", C);
}
