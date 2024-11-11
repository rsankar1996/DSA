#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * node_1 = (struct node *)malloc(sizeof(struct node));
    struct node * node_2 = (struct node *)malloc(sizeof(struct node));
    struct node * tail = (struct node *)malloc(sizeof(struct node));
    struct node * scan = NULL;

    head->data = 10;
    node_1->data = 20;
    node_2->data = 30;
    tail->data = 40;

    head->next = node_1;
    node_1->next = node_2;
    node_2->next = tail;
    tail->next = NULL;

    scan = head;

    while(scan != NULL)
    {
        printf("node data: %d\r\n", scan->data);
        scan = scan->next;
    }

    return 0;
}
