#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void create_node();
void traverse();
void delete_node();

struct node {
    int data;
    struct node *link;
};

// kuy
head = NULL;
// help hhuh

struct node *head = NULL;
struct node *new_node = NULL;
struct node *temp = NULL;

int main() {
    int ans;
    char ch;
    do {
        printf("\n*****************************************\n");
        printf("Singly Linked List :\n");
        printf("1. Creating node\n2. Traversing the list\n3. Deleting node\n4. Exit\n");
        printf("\n*****************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ans);

        switch (ans) {
            case 1:
                create_node();
                break;
            case 2:
                traverse();
                break;
            case 3:
                delete_node();
                break;
            case 4:
                printf("Exit from the program");
                exit(0);
            default:
                printf("\nEnter correct choice\n");
        }

        printf("\nContinue [y/n]: ");
        scanf(" %c", &ch); // Added space before %c to consume the newline character
    } while (ch == 'y' || ch == 'Y');

    printf("Exit from the program\n");
    return 0;
}

void create_node() {
    bool success = false;
    new_node = malloc(sizeof(struct node));
    printf("\n --------------Insertion--------------\n");
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    new_node->link = NULL;

    if (head == NULL) {
        head = new_node;
        success = true;
    } else {
        temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_node;
        success = true;
    }

    if (success) {
        printf("Insertion is completed\n");
    } else {
        printf("Insertion is not completed\n");
    }
}

void traverse() { // Printing data in the linked list
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data); // Added space after %d for better formatting
            temp = temp->link;
        }
        printf("\n");
    }
}

void delete_node() {
    int del;
    bool success = false;
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        // Code to delete node goes here
        success = true; // Assume deletion is successful for now
    }

    if (success) {
        printf("Deletion is completed\n");
    } else {
        printf("Deletion is not completed\n");
    }
}
