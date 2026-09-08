#include<iostream>
using namespace std;

#pragma pack (1)        //to avoid padding of data members of class Demo

class Demo
{
    public:     //access specifier
        int i;
        char ch;            //data members of class Demo
    private:    
        float f;

};

int main()
{
    Demo dobj;      //object of class Demo
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;      //cannot access private member of class Demo
      
    cout<<dobj.i<<"\n";
    cout<<dobj.ch<<"\n";
    cout<<dobj.f<<"\n";     //cannot access private member of class Demo
    return 0;                   
}