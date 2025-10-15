#include <stdio.h>
int main()
{

    float random = 12.5;
    float *ptr_random;
    ptr_random = &random;

    printf("value : %f\n", random);
    printf("memory address : %p\n", ptr_random);

    *ptr_random = 50.50;

    printf("new value : %f\n", *ptr_random);
    printf("memory address : %p\n", ptr_random);
    
    // *ptr_random++;
    // *(ptr_random++);
    // *(ptr_random)++;

    // printf("---------------------------------\n");

    // printf("value_01 : %f\n", *ptr_random++);
    // printf("value_02 : %f\n", *(ptr_random++));
    // printf("value_03 : %f\n", *(ptr_random)++);

    printf("---------------------------------\n");

    printf("memory address 01 : %p\n", ++ptr_random);
    printf("memory adress 02 : %p\n", (ptr_random++));
    printf("memory address 03 : %p\n", (ptr_random)++);

    printf("---------------------------------\n");

    printf("value_01 : %f\n", *ptr_random);
    printf("value_02 : %f\n", *(ptr_random));
    printf("value_03 : %f\n", *(ptr_random));

    printf("---------------------------------\n");

    *(ptr_random) = 10.00;

    printf("new value_01 : %f\n", *ptr_random);
    printf("new value_02 : %f\n", *(ptr_random));
    printf("new value_03 : %f\n", *(ptr_random));

    printf("---------------------------------\n");

    printf("new address_01 : %p\n", ptr_random++);
    printf("new address_02 : %p\n", (ptr_random));
    printf("new address_03 : %p\n", (ptr_random));
    

    return 0;
}