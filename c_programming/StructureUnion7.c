#include<stdio.h>


union Demo   //sizeof = 4  major size consider
{
    int i;
    char ch;
};

int main ()

{
    union Demo dobj;
    dobj.i = 65;

    
    printf("%d\n", dobj.i);             //65
    printf("%c\n", dobj.ch);            //A assikey value of i 

    
    return 0;
}