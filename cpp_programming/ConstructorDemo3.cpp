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
        
         PPA(int a, int b)      //parametriesed constrctor
        {
            cout<<"inside parametriesed constrctor\n";
        }
         PPA(PPA &obj)              //copy constructor
        {
            cout<<"Inside copy constructor";
        }

        ~PPA()
        {
            cout<<"inside distructor\n";
        }
       
};

int main()
{
    PPA pobj1;              //default constructor will be called here
    PPA pobj2(11,21);       //parametriesed constrctor will be called here
    PPA pobj3(pobj1);       //copy constructor will be called here


    
    
    return 0;
}