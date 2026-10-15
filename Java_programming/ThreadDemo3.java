class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Therad is running... ");
    }
}
class ThreadDemo3
{
    public static void main(String A[])
    {
        System.out.println("Inside main Thread ");

       Demo dobj1 = new Demo();
       Demo dobj2 = new Demo();

       dobj1.start();
       dobj2.start();

    }
}