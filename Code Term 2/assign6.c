#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct datanumber *number;
struct datanumber{
    int num;
    number next;
};

typedef struct dataseven *dseven;
struct dataseven{
    int mod;
    dseven next;
};

number createNumber(number num){
    number newNumber;
    int n = 100000;
    printf("Enter 0 to stop.\n");
    do{
    printf("Enter number : ");
    scanf("%d", &n);
    }while (n != 0);
    while (1) {
    newNumber = (number)malloc(sizeof(struct datanumber));
    newNumber->num = n;
    newNumber->next = num;
    num = newNumber;
    }
    return num;
}

dseven searchSeven(dseven seven, number num){
    dseven newSeven;
    number temp = num;
    while(temp != NULL){
        if(temp->num % 7 == 0 && temp->num > 0){
            newSeven = (dseven)malloc(sizeof(struct dataseven));
            newSeven->mod = temp->num;
            newSeven->next = seven;
            seven = newSeven;
        }
        temp = temp->next;
    }
    return seven;
}

void displayNumber(number num){
    number newNumber = num;
    while(newNumber != NULL){
        printf("%d ", newNumber->num);
        newNumber = newNumber->next;
    }
}

void displaySeven(dseven seven){
    dseven newSeven = seven;
    while(newSeven != NULL){
        printf("%d ", newSeven->mod);
        newSeven = newSeven->next;
    }
}

int main(){
    number num;
    num = NULL;
    dseven seven;
    seven = NULL;
    num = createNumber(num);
    seven = searchSeven(seven, num);
    displayNumber(num);
    displaySeven(seven);
}
