#include <stdio.h>
#include "calculator.h"
#include <string.h>
int main()
{
    int a, b;
    char y[50];

    printf("What do you want?\n");
    printf("SUMMATION\n");
    printf("SUBSTRACTION\n");
    printf("MULTIPLICATION\n");
    printf("DIVISION\n");
    printf("MODULUS\n");
    gets(y);

    printf("%s",y);
    printf("Enter two numbers :: \n");
    scanf("%d%d", &a, &b);
    if (y[0] == 'S' && y[1] == 'U' && y[2] == 'M')
    {
        int sum = add(a, b);
        printf("SUMMATION      = %d\n", sum);
    }
    else if (y[0] == 'S' && y[1] == 'U' && y[2] == 'B')
    {
        int substraction = sub(a, b);
        printf("SUBSTRACTION   = %d\n", substraction);
    }
    else if (y[0] == 'M' && y[1] == 'U' && y[2] == 'L')
    {
        int multiplication = mul(a, b);
        printf("MULTIPLICATION = %d\n", multiplication);
    }
    else if (y == 'D')
    {
        int division = div(a, b);
        printf("DIVISION       = %d\n", division);
    }
    else if (y[0] == 'M' && y[1] == 'O' && y[2] == 'D')
    {
        int modulus = mod(a, b);
        printf("MODULUS        = %d\n", modulus);
    }
else 
{
    printf("WRONG INPUT !\n");
}
    return 0;
}
