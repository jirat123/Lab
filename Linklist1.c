#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node{
        int data;
        struct node *next;
    };

    struct node *new = malloc(sizeof(struct node));
    

    new->data = 10;
    printf("%d", new->data);

    new->next = NULL;

    struct node *head = malloc(sizeof(struct node));

    head=new;
    printf("Data of HEAD is %d\n", head->data);
    printf("Memory address that head point to %p\n", head->next);
    printf("Memory address that new point to %p\n", new->next);
}