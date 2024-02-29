#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct datanumber *number;
struct datanumber{
    int num;
    number next;
};

typedef struct mod7 *mod_7;
struct mod7{
    int mod;
    mod_7 next;
};

number input_number(number n){
    number newnode = n;
    int num,count=0;
    printf("Enter number : ");
    while(1){
        newnode = (number)malloc(sizeof(struct datanumber));
        scanf("%d", &num);
        if (num == 0){
            break;
        }
        newnode->num = num;
        newnode->next = n;
        n = newnode;
        count++;
        }
        number temp = n;
        while (temp != NULL){
            if (temp->num % 7 == 0 && temp->num > 0){
                printf("%d ", temp->num);
            }
            temp = temp->next;
        }
        printf("\nall numbers of number are %d\n",count);
        return n;
    }

mod_7 mod_7_number(mod_7 seven, number n){
    int count7 = 0;
    mod_7 newnode = seven;
    number temp = n;
    while(temp != NULL){
        if(temp->num % 7 == 0 && temp->num > 0){
            newnode = (mod_7)malloc(sizeof(struct mod7));
            newnode->mod = temp->num;
            newnode->next = seven;
            seven = newnode;
            count7++;
        }
        temp = temp->next;
    }
    printf("all numbers of number that div7 are %d\n",count7);
    return seven;
}

void print_mod_7 (mod_7 seven){
    mod_7 newnode = seven;
    while(newnode != NULL){
        //printf("%d ", newnode->mod);
        newnode = newnode -> next;
    }
    printf("\n");
}

// void print_number(number n){
//     number newnode = n;
//     while(newnode != NULL){
//         printf("%d ", newnode->num);
//         newnode = newnode -> next;
//     }
// }


int main(){
    number n;
    mod_7 seven;
    seven = NULL;
    n = NULL;
    n = input_number(n);
    seven = mod_7_number(seven,n);
    print_mod_7(seven);
    return 0;
}