class Demo
{
    public Demo()                       //default constructor
    {
        System.out.println(" Inside default constructor");
    }
     public Demo(int i,int j)           //parameterised constructor
    {
        System.out.println(" Inside parameterised constructor");
    }

}

class  Constructors_Demo
{
    public static void main (String A[])
    {
        Demo dobj1 = new Demo();                    //calling default constructor
        Demo dobj2 = new Demo(11,21);       //calling parameterised constructor
    }

}