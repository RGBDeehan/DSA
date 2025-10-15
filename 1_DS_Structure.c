#include <stdio.h>
#include <stdint.h>
struct ABC
{
    uint16_t id;
    float cgpa;
};

int main()
{

    struct ABC abc[3];

    for (int i = 0; i < 3; i++)
    {
         printf("Enter Student id  :::");
        scanf("%d",&abc[i].id);
         printf("Enter Student CGPA  :::");
        scanf("%f",&abc[i].cgpa);
       
    }

    for (int i = 0; i < 3; i++)
    {
        printf("ID:%d\nCG:%.2f\n", abc[i].id, abc[i].cgpa);
        printf("\n");
    }

    return 0;
}