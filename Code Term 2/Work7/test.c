# include <stdio.h>
# include <stdlib.h>
# include <string.h>

const char *kuya = "kuay";

int main(){
    char a[10];
    sprintf(a, "%s", kuya);
    puts(a);
    return 0;
}