package lab6;

public class Lab6_4 {

	 public static void main(String args[])  
	   {     
	       Student a=new Student();  
	       try  
	           {  
	               a.speak(600);  
	               a.speak(1200);  
	           }  
	       catch(MyException e)  
	       {  
	           System.out.println(e.toString());  
	       }  
	   }

}
