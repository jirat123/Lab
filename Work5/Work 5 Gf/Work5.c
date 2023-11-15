#include <stdio.h>
void getinput(int num[], int n){
    printf("You have to type %d Numbers\n",n);
    for(int i = 0; i < n; i++){
        printf("Enter Number %d : ", i+1);
        scanf("%d", &num[i]);
    }
}
void even(int num[], int n){
    printf("Even Numbers : \n");
    for(int i = 0; i < n; i++){
        if(num[i] % 2 == 0){
            printf("%d at position %d\n", num[i],i+1);
        }
    }
}
void odd(int num[], int n){
    printf("Odd Numbers : \n");
    for(int i = 0; i < n; i++){
        if(num[i] % 2 != 0){
            printf("%d at position %d\n", num[i],i+1);
        }
    }
}
void numeven(int num[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 2 == 0){
            count++;
        }
    }
    printf("Number of Even Numbers : %d\n", count);
}
void numodd(int num[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 2 != 0){
            count++;
        }
    }
    printf("Number of Odd Numbers : %d\n", count);
}
int main(){
    int n;
    printf("Enter size of number : ");
    scanf("%d", &n);
    int number[n];
    getinput(number, n);
    printf("\n");
    even(number, n);
    printf("\n");
    odd(number, n);
    printf("\n");
    numeven(number, n);
    numodd(number, n);
    return 0;
}