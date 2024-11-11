/**********************************************************************
** This program will create simple linkedlist having 5 nodes. The nodes
** are placed as below:
**
** [head]->[node_1]->[node_2]->[tail]->NULL
** which have the values holding:
** [10]->[20]->[30]->[40]
**
** This program will create the nodes, link them properly to make a
** linked list, and traverse throughout the list to print the value.
**
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next; //pointer to the next node
};

int main()
{
    /* creating and allocating memory for each node dynamically */
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * node_1 = (struct node *)malloc(sizeof(struct node));
    struct node * node_2 = (struct node *)malloc(sizeof(struct node));
    struct node * tail = (struct node *)malloc(sizeof(struct node));

    /* temporary node created for traversing throughout the list */
    struct node * scan = NULL;

    /* assigning value for each node */
    head->data = 10;
    node_1->data = 20;
    node_2->data = 30;
    tail->data = 40;

    /* linking each node to make the functional linked list */
    head->next = node_1;
    node_1->next = node_2;
    node_2->next = tail;
    tail->next = NULL;

    /* initializing traverse node with address of head node.
     * so that the node will be pointing to the very first node
     * in the list.
     */
    scan = head;

    /* traverse throughout the list */
    while(scan != NULL)
    {
        printf("node data: %d\r\n", scan->data);
        scan = scan->next; /* changing the pointer to next node */
    }

    return 0;
}
