#include<stdio.h>

// 1    2   4   8
#pragma pack(1)
struct Demo
{
    int i;
    char ch;
    float f;
    
};

int main()
{
    struct Demo dobj1;
    struct Demo dobj2;

    struct Demo *dp = NULL;
    dp = &dobj2;
         
    dobj1.i = 11;          // Direct accesing Operator
    dobj1.ch = 'A';
    dobj1.f = 90.99f;

    dp->i =21;          // InDirect accesing Operator
    dp->ch = 'B';
    dp->f = 91.99;

    printf("%d\n",dobj1.i);
    printf("%d\n",dp->i);
    
    return 0;
}