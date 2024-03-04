#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void create_node();
void explore();
// void delete_note();

struct node {
    int data;
    struct node *next;
};

struct node *temp = NULL;
struct node *head = NULL;

int main(){
    create_node();
    explore();
    // int ans;
    // printf("*******************\n");
    // printf("1.create\n2.explore\n3.delete\n4.exit");
    // printf("Enter your choice --> \n");
    // scanf("%d",&ans);
    // // switch (ans){
    // //     case 1 :
    // //     create_node();
    // //     break;
    // //     case 2 :
    // //     explore();
    // }
}


void create_node(){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    struct node *newnode1 = malloc(sizeof(struct node));
    newnode1 -> data = 6;
    newnode1 -> next = newnode; 
    newnode -> data = 5;
    newnode -> next = NULL;
    head = newnode1;
}

void explore(){
    temp = head;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}