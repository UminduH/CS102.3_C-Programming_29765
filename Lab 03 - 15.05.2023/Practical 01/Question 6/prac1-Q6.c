#include <stdio.h>

int main()
{
    char name[20];
    int byear, age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your birth year: ");
    scanf("%d", &byear);

    age = 2023 - byear;

    printf("\nHello %s. You are %d years old.\n", name, age);
}
