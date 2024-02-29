#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

 
struct work{
    int day,month,year;
}w;

struct info_person{
    char name[20];
    char surname[20];
    char id[10];
    float height;
    float weight;
}person;

typedef FILE *f;

// int menu(){
//     int ans;
//     printf("MENU\n");
//     printf("Press 1 to create file\n");
//     printf("Press 2 to Display all\n");
//     printf("You press ----> ");
//     scanf("%d",&ans);
//     return(ans);
// }

f createfile(f filename){
    char namefile[10],weight[10],height[10],day[5],month[5],year[5];
    printf("File name : ");
    gets(namefile);
    gets(namefile);
    if ((filename = fopen(namefile,"w")) == NULL ){
        printf("Error in opening file\n\n");
        return(filename);
    }
    while(1){
        printf("Press 0 if you want to quit\n");
        printf("ID : ");
        gets(person.name);
        if (strcmp(person.name, "0") == 0) break;
        printf("name : ");
        gets(person.name);
        printf("surname :");
        gets(person.surname);
        printf("weight : ");
        gets(weight);
        printf("height : ");
        gets(height);
        person.weight = atoi(weight);
        person.height = atoi(height);
        printf("You must enter date before summit your work\n");
        printf("Day : ");
        gets(day);
        printf("Month : ");
        gets(month);
        printf("Year : ");
        gets(year);
        w.day = atoi(day);
        w.month = atoi(month);
        w.year = atoi(year);
        fwrite(&person,sizeof(person),1,filename);
        if(ferror(filename)){
            printf("Error in opening file\n\n");
            return(filename);
        }
    }
    fclose(filename);
    return(filename);
}

void display(f filename){
    char namefile[10];
    printf("File name : ");
    gets(namefile);
    gets(namefile);
    if((filename = fopen(namefile,"r")) == NULL){
        printf("Error in reading file");
        return;
    }
    else{
        while((fread(&person,sizeof(person),1,filename)) == 1){
            printf("Your ID is %s\n",person.id);
            printf("Yor name is %s\n",person.name);
            printf("Your surname is %s\n",person.surname);
            printf("Your weight is %.2f\n",person.weight);
            printf("Your height is %.2f\n",person.height);
            printf("Yore date work is on %d/%d/%d\n",w.day,w.month,w.year);
        }
    }
}

    int main(){
        f fn;
        int a;
        while(1){
        printf("MENU\n");
        printf("Press 1 to create file\n");
        printf("Press 2 to Display\n");
        printf("You press ----> ");
        scanf("%d",&a);
        switch (a){
            case 1:
                fn = createfile(fn);
                break;
            case 2:
                display(fn);
            default:
                printf("You must Input 1-2 only\n");
        }
        printf("-------------------------------------------\n");
        }
    }