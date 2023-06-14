#include <stdio.h>

int main()
{
    int servYears;
    float basicSalary, monthlySales, grossRemu;
    char city;

    printf("Enter 'C' if you work in Colombo (else enter 'N'): ");
    scanf("%c", &city);
    printf("Enter your Basic Salary: ");
    scanf("%f", &basicSalary);
    printf("Enter your years of service: ");
    scanf("%d", &servYears);
    printf("Enter your Monthly Sales: ");
    scanf("%f", &monthlySales);

    if (servYears > 5)
        grossRemu = basicSalary + (basicSalary * 0.10);
    else
        grossRemu = basicSalary;

    if (city == 'C')
        grossRemu = grossRemu + 2500;

    if (monthlySales < 25000)
        grossRemu = grossRemu + (monthlySales * 0.10);
    else if (monthlySales < 50000)
        grossRemu = grossRemu + (monthlySales * 0.12);
    else
        grossRemu = grossRemu + (monthlySales * 0.15);

    printf("\nGross Monthly Remuneration = Rs. %.2f\n", grossRemu);
}
