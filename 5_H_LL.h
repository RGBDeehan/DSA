#ifndef LL_H
#define LL_H

struct node *create_node(int data);
struct node *insert_first(struct node *head, int data);
void insert_last(struct node *head, int data);
void insert_in_between(struct node *head, int data, int pos);
struct node del_first(struct node *head);
void del_last(struct node *head);
void del_between(struct node *head, int pos);

#endif




