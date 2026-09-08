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
    
    return 0;
}