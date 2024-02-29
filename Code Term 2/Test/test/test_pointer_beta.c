#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Define structs
typedef struct test1 *t1;
struct test1
{
    char day[20], key[10];
    t1 nextt1;
};

typedef struct test2 *t2;
struct test2
{
    struct test1 *t1;
    char name[30], lastname[30];
    t2 next;
};

// Function to create a new node
t2 create(t2 t) {
    t2 newnode;
    t1 newnode_t1;
    int n = 2;
    newnode = (t2)malloc(sizeof(struct test2));
    printf("Name: ");
    scanf("%s", newnode->name);
    printf("Lastname: ");
    scanf("%s", newnode->lastname);
    newnode->t1 = NULL;

    while (n--) {
        newnode_t1 = (t1)malloc(sizeof(struct test1));
        printf("Day: ");
        scanf("%s", newnode_t1->day);
        printf("Key: ");
        scanf("%s", newnode_t1->key);
        newnode_t1->nextt1 = newnode->t1;
        newnode->t1 = newnode_t1;
    }
    newnode->next = t;
    t = newnode;
    return t;
}

void display(t2 t) {
    t2 temp = t;
    while (temp != NULL) {
        printf("\nName: %s\n", temp->name);
        printf("Lastname: %s\n", temp->lastname);
        t1 temp_t1 = temp->t1;
        while (temp_t1 != NULL) {
            printf("Day: %s\n", temp_t1->day);
            printf("Key: %s\n", temp_t1->key);
            temp_t1 = temp_t1->nextt1;
        }
        temp = temp->next;
    }
}


int main() {
    t2 t = NULL;
    t = create(t);
    display(t);

    return 0;
}
