#include<stdio.h>
#include<stdlib.h>
typedef struct work *w;
struct work
{
    int day;
    int month;
    int year;
};

typedef struct info_person *person;
struct info_person
{
    char id[10];
    char name[20];
    char surname[20];
    float height;
    float weight;
    struct work *w;
    person next;
};

person input(person info){
    person newnode;
    w newnode_w;
    int b;
    printf("How many customers do you want to type? : ");
    scanf("%d",&b);
    for(int i = 0 ; i<b ; i++){
    newnode = (person)malloc(sizeof(struct info_person));
    newnode_w = (w)malloc(sizeof(struct work));
    printf("Enter ID : ");
    scanf("%s",&newnode->id);
    printf("Enter name : ");
    scanf("%s",&newnode->name);
    printf("Enter surname : ");
    scanf("%s",&newnode->surname);
    printf("Enter height : ");
    scanf("%f",&newnode->height);
    printf("Enter weight : ");
    scanf("%f",&newnode->weight);
    printf("You must type day/month/year before summit your work\n");
    newnode->w = newnode_w;
    printf("Enter day : ");
    scanf("%d",&newnode->w->day);
    printf("Enter month : ");
    scanf("%d",&newnode->w->month);
    printf("Enter year : ");
    scanf("%d",&newnode->w->year);
    newnode -> next = info;
    info = newnode;
    }
    return info;
}

void display(person info){
    person temp;
    temp = info;
    printf("---------------------------------------\n");
while (temp != NULL){
    printf("Your ID : %s\n",temp->id);
    printf("Your name : %s\n",temp->name);
    printf("Your surname : %s\n",temp->surname);
    printf("Your height : %.2f\n",temp->height);
    printf("Your weight : %.2f\n",temp->weight);
    printf("You're in work on %d/%d/%d\n",temp->w->day,temp->w->month,temp->w->year);
    temp = temp -> next;
    printf("---------------------------------------\n");
}
}

int main(){
    person p;
    p = NULL;
    p = input(p);
    display(p);
}