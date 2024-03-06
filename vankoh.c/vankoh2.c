#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void create_node();
void explore();
void delete_node();

struct node *temp = NULL;
struct node *head = NULL;
struct node *temp1 = NULL;

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
        case 3 :
        delete_node();
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

void delete_node(){
        temp1 = head;
        temp = head;
        int str;
        printf("Enter your element which you want to delete : ");
        scanf("%d",&str);
        while (temp1 != NULL){
            if (temp1 -> data == str){
                break;
            }
            else{
                temp = temp1;
                temp1 = temp1 -> next;
            }
        }
        if (temp1 -> next == NULL){
            temp -> next = NULL;
        }
        else{
            temp -> next = temp1 -> next;
        }
            printf("Delete completed\n");
        }


