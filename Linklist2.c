#include <stdio.h>
#include <stdlib.h>

void main(){
    struct node{
        int data;
        struct  node *next;
    };

    struct node *node1=malloc(sizeof(struct node));
    struct node *node2=malloc(sizeof(struct node));
    struct node *node3=malloc(sizeof(struct node));

    node1->next = 5;

    printf("Data of node1 is %d\n",node1->next);
    struct node *head = malloc(sizeof(struct node));
    head = node1;

    node1 -> next = node2;
    node2 -> next = NULL;
    struct node *temp = malloc(sizeof(struct node));

    temp = head;
    printf("data each node : ");
    while (temp != NULL){
        printf("%d",temp->data);
        temp = temp-> next;
    }

    }