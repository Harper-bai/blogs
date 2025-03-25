#include <stdio.h>
#include <stdbool.h>
#define Maxsize 50

typedef struct 
{
    int data[Maxsize];
    int length;
}SqList;

bool  Del_Elem(SqList *L,int i){
    if (L->length == 0)
    return false;
}