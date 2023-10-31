#include <stdio.h>
int main (){
    int a,b;
    printf("Enter Number(A) : ");
    scanf("%d",&a);
    printf("Enter Number(B) : ");
    scanf("%d",&b);

    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;

    printf("%d = %d + %d\n",c,a,b);
    printf("%d = %d - %d\n",d,a,b);
    printf("%d = %d * %d\n",e,a,b);
    printf("%d = %d / %d\n",f,a,b);

    return 0;
}