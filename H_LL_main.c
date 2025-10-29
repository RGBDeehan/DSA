#include <stdio.h>
#include "H_LL.h"
#include <stdlib.h>

int main()
{

    struct node *head;

    head = create_node(10);
    insert_last(head, 20);
    insert_last(head, 30);
    insert_last(head, 40);
    insert_last(head, 50);
    insert_last(head, 60);

    head = insert_first(head, 70);
    // head=del_first(head);
    // del_between(head,3);

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}