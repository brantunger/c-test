#ifndef DBL_LINKED_LIST_H_
#define DBL_LINKED_LIST_H_

struct node
{
    void *data;
    struct node *next;
    struct node *prev;
};

struct dbl_linked_list
{
    int size;
    struct node *head;
    struct node *tail;
};

struct node *create_node(void *data);
void insert_at_head(void *data);
void insert_at_tail(void *data);
void delete_at_head();
void delete_at_tail();
void display_forward();
void display_backward();

#endif