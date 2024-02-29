#include <stdio.h>
typedef struct {
    char name[20];
    char surname[20];
    int age;
    float grade;
} student;

void Inputstudent(student s){
    printf("Name: ");
    scanf("%s",&s.name);
    printf("Surname: ");
    scanf("%s",&s.surname);
    printf("Age: ");
    scanf("%d",&s.age);
    printf("Grade: ");
    scanf("%s",&s.grade);
}

void printstudent(student s){
    int b = 1;
    printf("Student %d\n",b);
    printf("Name: %s\n",s.name);
    printf("Surname: %s\n",s.surname);
    printf("Age: %d\n",s.age);
    printf("Grade: %.2f\n",s.grade);
    b++;
}


