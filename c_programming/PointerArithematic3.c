#include<stdio.h>
int main()
{
    int Arr[] = {11,21,51,101,111};
    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);  //21
    q = &(Arr[3]);  //101

    printf("%d\n",(q-p));  //116-108=8=(2)

    return 0;
}