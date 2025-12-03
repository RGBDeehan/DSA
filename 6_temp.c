#include <stdio.h>
#include "temp.h"

void convertTemp(enum Unit from, float value)
{
    if (from == CELSIUS)
        printf("%.2f\n", C_T0_F(value));

    else if (from == FAHRENHEIT)
        printf("%.2f\n", F_T0_C(value));
}
