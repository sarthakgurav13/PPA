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

class Derived extends Base
{
    public int i;
    public int j;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
}
class DerivedX extends Derived

{
    public int m;
    public int n;

    public DerivedX()
    {
        System.out.println("Inside Derived  Constructor ");
    }

    public void mun()
    {
        System.out.println("Inside Derived mun");
    }
}
class MultiLevel
{
    public static void main (String A[])
    {
        DerivedX dobj = new DerivedX();
        dobj.fun();
        dobj.gun();
        dobj.sun();
        dobj.mun();
    }
}