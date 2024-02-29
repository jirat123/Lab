#include<stdio.h>
int main(){
int num;
printf("Enter number 1-99 : ");
scanf("%d",&num);
if(num >= 1 && num < 100){
if(num%10==7 || num > 69 && num < 80){
    printf("BUZZ");
}
else if(num%7==0){
    printf("BUZZ-BUZZ");
}
else printf("%d",num);
}
 else 
 printf("Invild Number. Please Enter Numbber 1-99 only.");

 return 0;
 }





    
