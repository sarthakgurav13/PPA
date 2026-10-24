import  java.net.*;
import java.io.*;

class ChatClient
{
    public static void main(String A[]) throws Exception
    {
      

      Socket sobj = new Socket("localhost",5100);
      System.out.println("client gets connected with server succesfully "); 
      
      PrintStream pobj = new PrintStream(sobj.getOutputStream());
      BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
      BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

      System.out.println("Marvellous client is Running ");
      String str1 =  null , str2 = null;
      System.out.println("Enter msg for server : ");
      while(!(str1 = bobj2.readLine()).equals("end"))
      {
        pobj.println(str1);
        str2 = bobj1.readLine();
        System.out.println("Server Says : "+str2);
        System.out.println("Enter msg for server : ");
      }
    }
}