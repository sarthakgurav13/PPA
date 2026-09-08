#include<stdio.h>

int Addition (int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;         // Business logic
    return Result;
}

int main()
{
int value1 = 0, value2 = 0,ans = 0;

printf("Enter First Number : \n");
scanf("%d", &value1);

printf("Enter Second Number : \n");
scanf("%d", &value2);

ans = Addition(value1, value2);
printf("Addition is : %d\n", ans);


return 0;

}