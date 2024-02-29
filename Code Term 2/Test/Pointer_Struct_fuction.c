#include <stdio.h>

typedef struct number num;
struct number
{
    int number,num;
};

void sum(num *n){
    int a=0;
    int num[1000],i,sum=0;
    printf("How many number you want to sum?: ");
    scanf("%d",&n->num);
    for(int i=0;i<n->num;i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
        a++;
    }
    for(int k = 0; k < a;k++){
        sum+=num[k];
    }
    printf("Sum = %d",sum);
}

int main(){
    num n;
    sum(&n);
    return 0;
}