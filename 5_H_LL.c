#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *create_node(int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

struct node *insert_first(struct node *head, int data)
{
    struct node *ptr = create_node(data);
    ptr->next = head;
    ptr->prev = NULL;
    head = ptr;
    return head;
}

void insert_last(struct node *head, int data)
{
    struct node *ptr = create_node(data);
    struct node *runner = head;
    while (runner->next != NULL)
    {
        runner = runner->next;
    }
    runner->next = ptr;
    ptr->prev = runner;
    ptr->next = NULL;
}

void insert_in_between(struct node *head, int data, int pos)
{
    struct node *ptr = create_node(data);
    struct node *runner1 = head, *runner2 = head;
    int position = pos;
    while (position != 1)
    {
        runner1 = runner2;
        runner2 = runner2->next;
        position--;
    }
    runner1->next = ptr;
    runner2->prev = ptr;
    ptr->prev = runner1;
    ptr->next = runner2;
}

struct node *del_first(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    ptr = NULL;
    head->prev = NULL;
    return head;
}

void del_last(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
    ptr = NULL;
}

void del_between(struct node *head, int pos)
{
    struct node *runner1 = head, *runner2 = head;
    int position = pos;
    while (position != 1)
    {
        runner1 = runner2;
        runner2 = runner2->next;
        position--;
    }
    runner1->next = NULL;
    runner2->next->prev = NULL;
    free(runner2);
    runner2 = NULL;
}

// print_list(struct node *head)
