#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void create_node();
void traverse ();
void delete_node();

struct node{
    int data;
    struct note *link;
};

struct node *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;


int main(){
    int ans;
    char ch;
    do{
        fflush(stdin);
        printf("\n*****************************************\n");
        printf("Singly Linked List : \n");
        printf("1.Creating node\n2.Traversing the list\n3.Deleteing node\n4.Exit\n");
        printf("\n*****************************************\n");
        printf("Enter your choice : ");
        scanf("%d",&ans);
        switch(ans){
            case 1: create_node();
            break;
            case 2: traverse();
            break;
            case 3: delete_node();
            break;
            default: printf("\nEnter correct choice");
        }

        printf("\nContinue [y/n] : ");
        scanf(" %c",&ch);
    }while (ch == 'y' || ch == 'Y');
    printf("Exit from the progrm");
}


void create_node(){
    bool sucess = false;
    newnode = malloc(sizeof(struct node));
    printf("\n --------------Insertion--------------\n");
    printf("Enter the data : ");
    scanf("%d ",&newnode->data);
    newnode->link = NULL;
    if(head == NULL){
        head = newnode;
        sucess = true;
    }
    
    else{
        temp = head;
        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->link = newnode;
        sucess = true;
    }

    if (sucess){
        printf("Insertion is completed\n");
    }
    else{
        printf("Insertion is not completed\n");
    }
}
void traverse(){ //Printing data in  lisnked list

    if (head == NULL){
        printf("List is empty\n");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("%d",temp->data);
            temp = temp->link;
        }
    }
}

void delete_node(){
    int del;
    bool sucess = false;
    if (head == NULL){
        printf("List is empty\n");
    }

    if (sucess){
        printf("Deletion is completed\n");
    }
    else{
        printf("Deletion is not completed\n");
    }
}