package lab6;

class MyException extends Exception  
{    
   String message;  
   MyException(int m)  
   {  
        message="数字不能大于1000";  
   }        
   public String toString()  
   {  
        return message;  
   }  
}