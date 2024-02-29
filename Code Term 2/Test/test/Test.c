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
    else if (number[i] % 2 != 0){
        oddnumber[oddnum] = number[i];
        oddnum++;
        odd++;
    }
}

printf("even number is : ");
for(int i=0 ; i < evennum ; i++){
    printf("%d\n",evennumber[i]);
    }
    printf("odd number is : ");
for(int i=0 ; i < oddnum ; i++){
    printf("%d\n",oddnumber[i]);
    }


printf("numbers of even is %d\n",even);
printf("numbers of odd is %d\n",odd);
return 0;

}
