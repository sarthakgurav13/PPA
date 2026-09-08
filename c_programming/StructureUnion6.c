#include<stdio.h>


union Demo   //sizeof = 4
{
    int i;
    float f;
};

int main ()

{
    union Demo dobj;
    dobj.f = 11.0;

    printf("%f\n", dobj.f);
    printf("%d\n", dobj.i);
    printf("%d\n", sizeof(dobj));       // 4
    
    return 0;
}