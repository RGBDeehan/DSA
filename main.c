#include <stdio.h>
#include "temp.h"
int main()
{
    float x, y;
    printf("Enter temperature value: ");
    scanf("%f", &x);
    printf("Choose conversion: ");
    printf("1. Celsius to Fahrenheit");
    printf("2. Fahrenheit to Celsius");
    printf("Enter choice (1 or 2): ");

    scanf("%f", &y);
    if (y == 1)
        convertTemp(CELSIUS, x);

    else if (y == 2)
        convertTemp(FAHRENHEIT, x);

    else
        printf("ERROR. TTry again");
    return 0;
}