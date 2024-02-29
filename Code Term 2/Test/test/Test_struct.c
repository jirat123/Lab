#include<stdio.h>
typedef struct{
    int day;
    int month;
    int year;
}work;

typedef struct{
    char id[10];
    char name[20];
    char surname[20];
    float height;
    float weight;
    work w;
}info_person;

void input(info_person members[],int a){
    for(int i = 0 ; i < a ; i++){
    printf("Enter id : ");
    scanf("%s",&members[i].id);
    printf("Enter name : ");
    scanf("%s",&members[i].name);
    printf("Enter surname : ");
    scanf("%s",&members[i].surname);
    printf("Enter height : ");
    scanf("%f",&members[i].height);
    printf("Enter weight : ");
    scanf("%f",&members[i].weight);
    printf("Please type day/month/year before summit your work\n");
    printf("Enter day : ");
    scanf("%d",&members[i].w.day);
    printf("Enter month : ");
    scanf("%d",&members[i].w.month);
    printf("Enter year : ");
    scanf("%d",&members[i].w.year);
    }
}

void display(info_person members[], int a){
    printf("--------------------------------------------------\n");
    for(int i = 0 ; i < a ; i++){
    printf("Your ID : %s\n",members[i].id);
    printf("Your name : %s\n",members[i].name);
    printf("Your surname : %s\n",members[i].surname);
    printf("Your height : %.2f\n",members[i].height);
    printf("Your weight : %.2f\n",members[i].weight);
    printf("You enter on %d/%d/%d\n",members[i].w.day,members[i].w.month,members[i].w.year);
    printf("------------------------------------------------\n");
    }
}

int main(){
    int a;
    printf("How many customers do you want to type? : ");
    scanf("%d",&a);
    info_person members[a];
    input(members,a);
    display(members,a);
}