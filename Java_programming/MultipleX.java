class Base
{
    public int x;
    public int y;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }

     public void gun()
    {
        System.out.println("Inside Base gun");
    }
}

class BaseA
{
    public int i;
    public int j;

    public BaseA()
    {
        System.out.println("Inside BaseA Constructor");
    }

    public void sun()
    {
        System.out.println("Inside BaseA sun");
    }
}
class Derived extends BaseA ,Base           //multiple inheritance is not allowed in java
{
     public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
}

class MultipleX
{
    public static void main (String A[])
    {
        Derived dobj= new Derived();

        dobj.fun();
        dobj.gun();
        dobj.sun(); 

    }
}