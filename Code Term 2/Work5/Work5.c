#include <stdio.h>
void getinput(int array[], int n){
    printf("Enter %d Numbers\n",n);
    for(int i = 0; i < n; i++){
        printf("Enter Number %d : ", i+1);
        scanf("%d", &array[i]);
    }
}

void findeven(int array[], int n){
    printf("Even Numbers : \n");
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            printf("%d at position %d\n", array[i],i+1);
        }
    }
}

void findodd(int array[], int n){
    printf("Odd Numbers : \n");
    for(int i = 0; i < n; i++){
        if(array[i] % 2 != 0){
            printf("%d at position %d\n", array[i],i+1);
        }
    }
}

void NumberOfEven(int array[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(array[i] % 2 == 0){
            count++;
        }
    }
    printf("Number of Even Numbers : %d\n", count);
}

void NumberOfOdd(int array[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(array[i] % 2 != 0){
            count++;
        }
    }
    printf("Number of Odd Numbers : %d\n", count);
}

int main(){
    int n;
    printf("How many numbers you want to type? : ");
    scanf("%d", &n);
    //printf("\n");
    int number[n];
    getinput(number, n);
    printf("\n");
    findeven(number, n);
    printf("\n");
    findodd(number, n);
    printf("\n");
    NumberOfEven(number, n);
    NumberOfOdd(number, n);

    return 0;
}