#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float day;
    float month;
    int year;
} work;

typedef struct {
    char id[10];
    char name[20];
    char surname[20];
    float height;
    float weight;
    work w;
} info_person;

void input(info_person *info) {
    printf("Enter id : ");
    scanf("%s", info->id);
    printf("Enter name : ");
    scanf("%s", info->name);
    printf("Enter surname : ");
    scanf("%s", info->surname);
    printf("Enter height : ");
    scanf("%f", &info->height);
    printf("Enter weight : ");
    scanf("%f", &info->weight);
    printf("Please type day/month/year before summit your work\n");
    printf("Enter day : ");
    scanf("%f", &info->w.day);
    printf("Enter month : ");
    scanf("%f", &info->w.month);
    printf("Enter year : ");
    scanf("%d", &info->w.year);
}

void display(info_person *info) {
    printf("Your ID : %s\n", info->id);
    printf("Your name : %s\n", info->name);
    printf("Your surname : %s\n", info->surname);
    printf("Your height : %.2f\n", info->height);
    printf("Your weight : %.2f\n", info->weight);
    printf("You entered on %.0f/%.0f/%d\n", info->w.day, info->w.month, info->w.year);
}

int main() {
    int numPersons;
    
    printf("Enter the number of persons: ");
    scanf("%d", &numPersons);

    // จองหน่วยความจำสำหรับข้อมูลของหลายคนโดยใช้ malloc
    info_person *persons = (info_person *)malloc(numPersons * sizeof(info_person));

    // นำข้อมูลเข้าสู่ struct ของแต่ละคน
    for (int i = 0; i < numPersons; ++i) {
        printf("\nEnter information for person %d:\n", i + 1);
        input(&persons[i]);
    }

    // แสดงข้อมูลของแต่ละคน
    for (int i = 0; i < numPersons; ++i) {
        printf("\nInformation for person %d:\n", i + 1);
        display(&persons[i]);
    }

    // คืนหน่วยความจำที่ถูกจอง
    free(persons);

    return 0;
}
