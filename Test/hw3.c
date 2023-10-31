#include <stdio.h>
int main (){
    float weight,height;
    printf("Enter your weight(kg) : ");
    scanf("%f",&weight);
    printf("Enter your height(cm) : ");
    scanf("%f",&height);

    height /= 100;
    float BMI = weight/(height*height);
    printf("Your BMI is %.2f\n",BMI);


    int a,b,c,d,e;
    printf ("Enter Number A : ");
    scanf("%d",&a);
    printf ("Enter Number B : ");
    scanf("%d",&b);
    printf ("Enter Number C : ");
    scanf("%d",&c);
    printf ("Enter Number D : ");
    scanf("%d",&d);
    printf ("Enter Number E : ");
    scanf("%d",&e);

    printf("Your Average is %.2f",(float)(a+b+c+d+e) / 5);

return 0;
}