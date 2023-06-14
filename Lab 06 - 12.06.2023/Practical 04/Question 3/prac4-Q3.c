#include <stdio.h>

int main()
{
    float r;
    char ques;
    const pi = 3.14159;

    printf("Do you want to calculate:\n");
    printf("Enter 'C' to find the Circumference of a circle?\n");
    printf("Enter 'A' to find the Area of a circle?\n");
    printf("Enter 'V' to find the Volume of a sphere?\n\n");
    scanf("%c", &ques);

    printf("\nEnter the radius: ");
    scanf("%f", &r);

    switch(ques)
    {
        case 'C': printf("\nCircumference of circle = %.2f\n", 2*pi*r); break;
        case 'A': printf("\nArea of circle = %.2f\n", pi*(r*r)); break;
        case 'V': printf("\nVolume of sphere = %.2f\n", (4.0/3)*pi*(r*r*r)); break;
        default: printf("\nInvalid question.\n");
    }
}
