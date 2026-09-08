class Arithematic 
{
    public int No1;
    public int No2;

    public Arithematic()        // default constructor 
    {
        this.No1 = 0;
        this.No2 = 0;

    }
    public Arithematic(int i, int j )       // parameterised constructor
    {
        this.No1 = i;
        this.No2 = j;

    }

    public int Addition()           //Addition() method 
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;

    }

     public int Subtraction()           //Subtraction() method 
    {
        int Ans = 0;
        Ans = this.No1 - this.No2;          
        return Ans;

    }

}

class OOPXX
{
    public static void main (String A[])
    {
        Arithematic aobj1 = new Arithematic(21,10); 
        Arithematic aobj2 = new Arithematic(11,10);    
        int Result = 0;

        Result = aobj1.Addition();
            System.out.println("Addition is : " +Result);
        
        Result = aobj1.Subtraction();
            System.out.println("Subtraction is : " +Result);
            
        Result = aobj2.Addition();
            System.out.println("Addition is : " +Result);
        
        Result = aobj2.Subtraction();
            System.out.println("Subtraction is : " +Result);    
    }
}