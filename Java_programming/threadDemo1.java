class ThreadDemo1
{
    public static void main(String A[])
    {
        System.out.println("Inside main");

        Thread t = Thread.currentThread();

        System.out.println("Current thread is : " +t.getName());

        System.out.println("Current thread is TID is " +t.getId());

        System.out.println("thread is alive :" +t.isAlive());

        System.out.println("Thread priority is : " +t.getPriority());
    }
}