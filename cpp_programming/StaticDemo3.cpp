#include<iostream>
using namespace std;

class demo
{
    public :
        int No1;
        int No2;
        static int X;

        demo(int i, int j)      
        {
            cout<<"Inside Constructor\n";
            No1 = i;
            No2 = j;
        }

        void fun()
        {
            cout<<"Inside Fun\n";
            cout<<No1<<"\n";
            cout<<No2<<"\n";
            cout<<X<<"\n";
        }
         static void gun()
        {
            cout<<"Inside gun\n";
            cout<<X<<"\n";
        }
};

int demo::X = 11;

int main()
{
    cout<<demo::X<<"\n";

        demo::gun();

        demo obj1(10,20);
        demo obj2(30,40);

        obj1.fun();
        obj2.fun();


    
    return 0;
}