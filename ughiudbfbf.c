#include<stdio.h>
int main()
{
   int x=10;
   int *ptr;

ptr = &x;
printf("%p\n",ptr);
ptr++;
printf("%p\n",ptr);
scanf("%d",ptr);

printf("%p\n",ptr);

//printf("%d",*ptr);

    return 0;
} 
// 00000000005FFE84