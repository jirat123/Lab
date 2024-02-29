#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct name *n;
struct name
{
    char name[10];
    char surname[10];
};

typedef struct work *w;
struct work
{
    char work[10];
    char title[10];
};