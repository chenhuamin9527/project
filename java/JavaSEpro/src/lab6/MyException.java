package lab6;

class MyException extends Exception  
{    
   String message;  
   MyException(int m)  
   {  
        message="���ֲ��ܴ���1000";  
   }        
   public String toString()  
   {  
        return message;  
   }  
}