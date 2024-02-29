#include <stdio.h>
int main(){
    float kg;
    printf("Enter your weight : ");
    scanf("%f",&kg);

    float g = kg*1000;
    printf("g is %.2f",g);


return 0;
}