#include<stdio.h>

int main(){
int number[10000] , num , a = 0;
printf("Enter number (0 to stop): ");
while (1){
    scanf("%d",&num);
    if(num == 0) break;
    number[a] = num;
    a++;
}

int oddnum = 0,oddnumber[10000],odd=0;
int evennum = 0 ,evennumber[10000],even=0;
for(int i=0 ; i < a ; i++){
    if (number[i] % 2 == 0){
        evennumber[evennum] = number[i];
        evennum++;
        even++;
    } 
    else oddnumber[oddnum] = number[i];
        oddnum++;
        odd++;
}