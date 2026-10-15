#include<iostream>
using namespace std;

class BaseA
{
    public:
    int i,j;

    BaseA()
    {
        cout<<"Inside BaseA constructor\n";
    }

    ~BaseA()
    {
        cout<<"Inside BaseA constructor\n";
    }
    
    void fun()
    {
        cout<<"Inside BaseA fun\n";
    }
};

class BaseB
{
    public:
    int x,y;

    BaseB()
    {
        cout<<"Inside BaseB constructor\n";
    }

    ~BaseB()
    {
        cout<<"Inside BaseB constructor\n";
    }
    
    void Gun()
    {
        cout<<"Inside BaseB Gun\n";
    }
};

class Derived: public BaseA, BaseB
{
    public:

    int a;

    Derived()
    {
        cout<<"Inside Derived Constructor\n";
    }

    ~Derived()
    {
        cout<<"Inside Derived destructor\n";
    }

    void sun()
    {
        cout<<"Inside Derived sun\n";
    }

};




int main()
{
    Derived dobj;

    dobj.fun();
    
    

    return 0;

}