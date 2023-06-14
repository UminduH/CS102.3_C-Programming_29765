#include <stdio.h>

int main()
{
    char name[20];
    float nSalary;
    int bSalary;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your salary: ");
    scanf("%d", &bSalary);

    if (bSalary < 5000)
        nSalary = bSalary + (bSalary * 0.05);
    else if (bSalary < 10000)
        nSalary = bSalary + (bSalary * 0.10);
    else
        nSalary = bSalary + (bSalary * 0.15);

    printf("\nHi %s. Your new salary is $%.2f\n", name, nSalary);
}

