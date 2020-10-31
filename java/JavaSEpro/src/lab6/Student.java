package lab6;

class Student  
{  
   public void speak(int m) throws MyException  
   {  
       if(m>1000)  
         {  
             MyException exception=new MyException(m);  
             throw exception;  
         }  
       System.out.println("I can speak "+m+" words in 3 minutes.");  
   }  
}