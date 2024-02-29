#include <stdio.h>

int main() {
    int i, x = 1;
    for (i=0; i<=8; i+=2){
        printf("i = %d x = %d\n", i,x++);
    }
    return 0;
}
