#include <stdio.h>
int main()
{
int *ptr;
int value;
ptr = &value;
scanf("%d",ptr);

printf("%d\n",*ptr);
printf("%p",ptr);
    return 0;
}