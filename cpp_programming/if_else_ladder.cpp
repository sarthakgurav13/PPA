#include<iostream>
using namespace std;

int main()
{
    int std = 0;
    cout<<"Enter your std \n";
    cin>>std;

    if(std==1)
    {
        cout<<"your exam time is 9.30 AM";
    }
    else if(std==2)
    {
        cout<<"your exam time is 10.30 AM";
    }
    else if(std==3)
    {
        cout<<"your exam time is 11.30 AM";
    }
    else if(std==4)
    {
        cout<<"your exam time is 12.30 PM";
    }
    else 
    {
        cout<<"Invalid\n";
    }
    return 0;
}