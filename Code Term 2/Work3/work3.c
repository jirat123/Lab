#include <stdio.h>
int main(){
    int num[1000];
    int even[1000];
    int odd[1000];
    int number=0;

    printf ("please type your number(You should be press spacebar first) :");
    while(getchar() != '\n'){
        scanf("%d",&num[number]);
        number++;
    }

    int numeven=0;
    int numodd=0;
    for(int i = 0;i < number;i++){
        if(num[i] % 2 == 0){
            even[numeven] = num[i];
            numeven++;
        }
        else{
            odd[numodd] = num[i];
            numodd++;
        }
    }

    printf("Even numbers are\n");
    for(int i = 0;i < numeven ;i++){
        printf("%d\n",even[i]);
    }
    printf("Number of even = %d\n",numeven);

    printf("Odd numbers are\n");
    for(int i = 0;i < numodd ;i++){
        printf("%d\n",odd[i]);
    }
    printf("Number of odd = %d",numodd);

    return 0;
}