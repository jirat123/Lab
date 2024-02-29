#include<stdio.h>
int main(){
    float r,h; // r = radius, h = high
    printf("Enter radius : ");
    scanf("%f",&r);
    printf("Enter hgih : ");
    scanf("%f",&h);

    float volume = 3.14*r*r*h;
    printf("The volume is %.2f",volume);

    return 0;  
}