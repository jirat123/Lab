#include <stdio.h>
typedef struct{
    char brand[50];
    char model[50];
    char color[20];
    float price;
}Car;

int main(){
    Car yourCar;

    printf("Enter Your Brand : ");
    scanf("%s",&yourCar.brand);
    printf("Enter Your Model : ");
    scanf("%s",&yourCar.model);
    printf("Enter Your Color : ");
    scanf("%s",&yourCar.color);
    printf("Enter Your Price (Baht) : ");
    scanf("%f",&yourCar.price);
    
    printf("Your Brand is %s\n",yourCar.brand);
    printf("Your Model is %s\n",yourCar.model);
    printf("Your Color is %s\n",yourCar.color);
    printf("Your Price is %.2f baht\n",yourCar.price);

return 0;

}