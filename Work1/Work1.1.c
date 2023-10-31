#include<stdio.h>
int main(){

    float h,b; //b = Base and H = High
    printf("Enter Base : ");
    scanf("%f",&b);
    printf("Enter High : ");
    scanf("%f",&h);
    
    float Area = 0.5*b*h;
    printf ("The area is %.2f",Area);

return 0;
}
