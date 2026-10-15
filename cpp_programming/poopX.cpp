#include<iostream>
using namespace std;

int Addition(int no1 , int no2)     
{
    int ans =0;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int Value1 = 0 , Value2 =0 , Result = 0;
    
     cout<<"enter first number :\n";
     cin>>Value1;
     
    cout<<"enter second number :\n";
    cin>>Value2;

     Result = Addition(Value1, Value2);

     cout<<"Addition is : "<<Result<<"\n";

    return 0;

}
