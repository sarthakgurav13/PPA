import java.util.Scanner;

class Exam
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int std = 0;
        System.out.println("Enter Your Std :");
            
        std = sobj.nextInt();

        if(std == 1)
            {
                System.out.println("Exam at 10.00 AM");
            }
        else if(std == 2)
            {
                System.out.println("Exam at 11.00 AM");
            }
        else if(std == 3)
            {
                System.out.println("Exam at 12.00 AM");
            }
        else if(std == 4)
            {
                System.out.println("Exam at 1 PM");
            }    
        else
            {
                System.out.println("Invalid");
            } 
            
            

    }

    

}