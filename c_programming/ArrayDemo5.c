#include<stdio.h>

int main()
{
    int arr[4];

    arr[3]=20;
    arr[4]=10;
    arr[1]=30;
    arr[0]=40;
    arr[2]=50;
    
    
    printf("%d\n",arr[0]);     //40
    printf("%d\n",arr[3]);    //20
 
    return 0;
}