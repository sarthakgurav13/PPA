class Base
{
    public int x; 
    public int y;

    public Base()
    {
        System.out.println("Inside Base Contructor");
    }

    public void fun()
    {
        System.out.println("Inside Base Fun");
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
        System.out.println("Inside Derived Contructor");
    }

    public void sun()
    {
        System.out.println("Inside Derived Sun");
    }
}

class SinglelevelX
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();
        dobj.fun();
        dobj.gun();
        dobj.sun();


    }

}