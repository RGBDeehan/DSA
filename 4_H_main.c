#include <stdio.h>
#include "calculator.h"
int main()
{
    int a, b, x;
    printf("What do you want?\n");
    printf("1 = SUMMATION\n");
    printf("2 = SUBSTRACTION\n");
    printf("3 = MULTIPLICATION\n");
    printf("4 = DIVISION\n");
    printf("5 = MODULUS\n");
    scanf("%d", &x);
    printf("Enter two numbers :: \n");
    scanf("%d%d", &a, &b);
    if (x == 1)
    {
        int sum = add(a, b);
        printf("SUMMATION      = %d\n", sum);
    }
    else if (x == 2)
    {
        int substraction = sub(a, b);
        printf("SUBSTRACTION   = %d\n", substraction);
    }
    else if (x == 3)
    {
        int multiplication = mul(a, b);
        printf("MULTIPLICATION = %d\n", multiplication);
    }
    else if (x == 4)
    {
        int division = div(a, b);
        printf("DIVISION       = %d\n", division);
    }
    else if (x == 5)
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
