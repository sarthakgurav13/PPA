#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;
    
        PPA()           //default constructor
        {
            cout<<"inside default constrctor\n";
        }

        ~PPA()          //destructor
        {
            cout<<"inside distructor\n";
        }
       
};

int main()
{
    PPA pobj1;
    PPA pobj2;
    
    
    return 0;
}