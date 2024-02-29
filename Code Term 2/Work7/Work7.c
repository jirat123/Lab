// add insert and search

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <string.h>

struct publishstruct {
    char code[7];
    char title[20];
    int price;
} publishing;

typedef FILE *filetype;

const char *folderpath = "Work7_Folder";

char *getfilepath(const char *filename){
    char *filepath = malloc(strlen(folderpath) + strlen(filename) + 2);
    if (filepath == NULL){
        printf("Error in allocating memory\n");
        exit(1);
    }
    sprintf(filepath, "%s/%s", folderpath, filename);
    return filepath;
}

int menu(){
    int answer;
    printf(" MENU\n");
    printf(" [1] Create file\n");
    printf(" [2] Display Data in file\n");
    printf(" [3] Insert Data in file\n");
    printf(" [4] Search Data in file\n");
    printf(" [5] Stop running program\n");
    printf(" Your answer ");
    scanf("%d",&answer);
    return(answer);
}

filetype CreateFile(filetype fname){
    char filename[10], price[6];
    printf("File name : ");
    gets(filename);
    gets(filename);
    printf("%s\n",filename) ;
    char *filepath = getfilepath(filename);
    if (( fname = fopen(filepath,"w")) == NULL ) {
        printf(" Error in opening file\n\n" );
        free(filepath);
        return(fname);
        }
    free(filepath);
    while (1) {
        printf("Code ( Enter = Quit ) : ");
        gets(publishing.code);
        if (publishing.code[0] == '\0' ) break;
        printf("Title : " );
        gets(publishing.title);
        printf("Price : ");
        gets(price);
        publishing.price = atoi(price);
        fwrite(&publishing,sizeof(publishing),1,fname);
        if (ferror(fname)) {
            printf("Error in writing \n\n ");
            return(fname);
        }
    }
    fclose(fname);
    return(fname);
}

void Display(filetype fname) {
    char filename[10];
    printf(" File name : ");
    gets(filename);
    gets(filename);
    if ((fname = fopen(filename,"r")) == NULL) {
        printf(" Error in opening file \n\n ");
        return;
    }
    while (fread(&publishing ,sizeof(publishing),1,fname) == 1){
    if (ferror(fname) ) {
        printf(" Error in reading file \n\n ");
        return;
    }
    else {
        printf("code = %s \n",publishing.code);
        printf("Title = %s \n",publishing.title);
        printf("price = %d \n",publishing.price);
        }
    }
}

filetype Insert(filetype fname){
    char filename[10], price[6];
    printf("File name : ");
    gets(filename);
    gets(filename);
    if((fname=fopen(filename,"r"))==NULL){
        printf("You didn't enter file name\n\n");
        return(fname);}
    printf("%s\n",filename) ;
    if (( fname = fopen(filename,"a")) == NULL ) {
        printf(" Error in opening file \n\n " );
        return(fname);
        }
    while (1) {
        printf("Code ( Enter = Quit ) : ");
        gets(publishing.code);
        if (publishing.code[0] == '\0' ) break;
        printf("Title : " );
        gets(publishing.title);
        printf("Price : ");
        gets(price);
        publishing.price = atoi(price);
        fwrite(&publishing,sizeof(publishing),1,fname);
        if (ferror(fname)) {
            printf("Error in writing \n\n ");
            return(fname);
        }
    }
    fclose(fname);
    return(fname);
}

void Search_data(filetype fname){
    char filename[10], code[7];
    printf("File name : ");
    gets(filename);
    gets(filename);
    printf("%s\n",filename) ;
    if (( fname = fopen(filename,"r")) == NULL ) {
        printf(" Error in opening file \n\n " );
        return;
        }
    printf("Code ( Enter = Quit ) : ");
    gets(code);
    while (fread(&publishing ,sizeof(publishing),1,fname) == 1){
        if (ferror(fname) ) {
            printf(" Error in reading file \n\n ");
            return;
        }
        else {
            if (strcmp(code,publishing.code)==0){
                printf("code = %s \n",publishing.code);
                printf("Title = %s \n",publishing.title);
                printf("price = %d \n",publishing.price);
            }
        }
    }
    fclose(fname);
}



int main(void) {
    filetype fp;
    int ch = 0;
    while (ch!=5) {
        ch = menu();
    if (ch==1)
        CreateFile(fp);
    else if (ch==2)
        Display(fp);
    else if (ch==3)
        fp = Insert(fp);
    else if (ch==4)
        Search_data(fp);
    else if (ch != 5)
        printf("You must be input 1-5 only\n\n"); 
    }
}