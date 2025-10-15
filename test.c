#include <stdio.h>
int main()
{
    double x = 5.00;
    double *ptr;
    ptr = &x;
    printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n",&x);
    printf("------------------------------------");
    *ptr = 12.00;
    printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);
    printf("------------------------------------");
    
*ptr++ ;  // Post increment
printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);
(*ptr)++; // Post increment
printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);
*(ptr++); // Post increment
printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);

    printf("------------------------------------");

++*ptr ;  // Post increment
printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);
++(*ptr); // Post increment
printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);
++*(ptr); // Post increment
printf("Value: %lf\n", *ptr);
    printf("Memory Address: %p\n", ptr);
    // printf("Value: %lf\n", *ptr++);
    // printf("Memory Address: %p\n", ptr);
    // printf("Value: %lf\n", *(ptr++));
    // printf("Memory Address: %p\n", ptr);
    // printf("Value: %lf\n", (*ptr)++);
}
