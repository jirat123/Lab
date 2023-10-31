#include<stdio.h>
int main(){

    int Student;
    float sum = 0;
    float s;
    printf ("Please Enter Number Of Student : ");
    scanf("%d",&Student);
    int S; // S ก็คือจำนวนการลูปตามจำนวนของนักเรียน
    S = Student;
    while (S > 0){
        printf("Grade is :");
        scanf("%f",&s);
        sum += s;
        S--;
    }
    float Avg = sum/Student;
    printf ("Average is %.2f",Avg);


return 0;
}