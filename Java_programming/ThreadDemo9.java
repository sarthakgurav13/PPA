class Demo extends  Thread
{
    public void run() 
    {
        try
        {
            int i = 0;

            for(i = 1; i<=10; i++)
            {
            System.out.println("Therad " +Thread.currentThread().getName()+" "+i);

            Thread.sleep(1000);     //unreported exception InterruptedException; 
                                    // must be caught or declared to be thrown
            }
        }
        catch(InterruptedException eobj)  //checked exception handling using try catch block
            {
                System.out.println("Exception handled in run method" +eobj);
            }
    }
}
class ThreadDemo9
{
    public static void main(String A[]) throws Exception    //throws Exception becauze unreported exception InterruptedException; 
                                                             // must be caught or declared to be thrown

    {
        System.out.println("Inside main Thread ");

       Demo dobj1 = new Demo();
       Demo dobj2 = new Demo();

       dobj1.setName("First_Thread");
       dobj2.setName("Second_Thread");
       
       dobj1.start();
       dobj2.start();

       dobj1.join();
       dobj2.join();

       System.out.println("End of Mian Thread ");       

    }
}