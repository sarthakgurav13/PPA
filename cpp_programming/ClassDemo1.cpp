#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        void Display()      //member function of class PPA
        {
            cout<<"inside Display\n";       
        }
};

int main()
{
    PPA pobj;
    cout<<sizeof(pobj)<<"\n";       //size of object of class PPA
    return 0;
}