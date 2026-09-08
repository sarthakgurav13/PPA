#include<stdio.h>
int main()
{
    int Arr[] = {11,21,51,101,111};
    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[3]);

    
    printf("%d\n",*p);      //21
    printf("%d\n",*q);      //101

    p++;            //increment
    q--;            // decrement

    printf("%d\n",*p);      //21+1= 51
    printf("%d\n",*q);      //101-1=51

    return 0;
}