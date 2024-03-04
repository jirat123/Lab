#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void create_node();
void explore();

struct node *temp = NULL;
struct node *head = NULL;

int main(){
    int ans;
    char ch;
   do{
    printf("************************************\n");
    printf("1.Create_note\n2.Explore\n3.Dlete_node\n4.Exit\n");
    printf("Enter your choice ---> ");
    scanf ("%d",&ans);
    switch (ans){
        case 1 :
        create_node();
        break;
        case 2 :
        explore();
        break;
    }
    printf("Continue? y/n ");
    scanf("%s",&ch);
} while (ch == 'y' || ch == 'Y');
}

void create_node(){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("Enter your element : ");
    scanf("%d",&newnode->data);
    printf("Create completed\n");
    newnode -> next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newnode;
    }
    }

void explore(){
    temp = head;
    while (temp != NULL){
        printf("%d ",temp->data);
        temp = temp -> next;
    }

}

