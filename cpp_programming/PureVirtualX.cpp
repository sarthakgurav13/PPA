#include<iostream>
using namespace std ;

#pragma pack(1)
class Base
{
    public :
    int i,j;

    int Addition(int No1, int No2)
    {
        return No1 + No2;
    }
    
    virtual int Subtraction(int No1 ,int No2) = 0;
};

#pragma pack(1)
class Derived : public Base
{
    public:
    int x;

    int Subtraction(int No1 ,int No2)
    {
        return No1 - No2;
    }

    int Multiplication(int No1 ,int No2)
    {
        return No1 * No2;
    }

};

int main()
{
    
    Derived dobj;
    int Ret = 0;

    cout<<"sizeof base class is : "<<sizeof(Base)<<"\n";
    cout<<"sizeof Derived class is : "<<sizeof(Derived)<<"\n";
     
    Ret = dobj.Addition(11,10);
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = dobj.Subtraction(11,10);
    cout<<"Subtraction  is : "<<Ret<<"\n";

    Ret = dobj.Multiplication(11,10);
    cout<<"Multiplication  is : "<<Ret<<"\n";






    return 0 ;
}