#include <stdio.h>

int main()
{
    char value;

    printf("Enter a value: ");
    scanf("%c", &value);

    printf("\nThe integer equivalent of %c is %d\n", value, value);

    printf("\n\n");
    printf("The integer equivalent of A is %d\n", 'A');
    printf("The integer equivalent of B is %d\n", 'B');
    printf("The integer equivalent of C is %d\n", 'C');
    printf("The integer equivalent of a is %d\n", 'a');
    printf("The integer equivalent of b is %d\n", 'b');
    printf("The integer equivalent of c is %d\n", 'c');
    printf("The integer equivalent of 0 is %d\n", 0);
    printf("The integer equivalent of 1 is %d\n", 1);
    printf("The integer equivalent of 2 is %d\n", 2);
    printf("The integer equivalent of $ is %d\n", '$');
    printf("The integer equivalent of * is %d\n", '*');
    printf("The integer equivalent of + is %d\n", '+');
    printf("The integer equivalent of / is %d\n", '/');
    printf("The integer equivalent of <blank character>  is %d\n", ' ');
}
