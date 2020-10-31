package lab4;

import java.math.BigInteger;
import java.util.Scanner;

public class Lab4_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int count = 0;
		String str1 = input.nextLine();
		String str2 = input.nextLine();
		BigInteger int1 = new BigInteger(str1);
		BigInteger int2 = new BigInteger(str2);
		System.out.println(int1.add(int2));
		System.out.println(int2.subtract(int2));
		BigInteger m=new BigInteger("123456");
        BigInteger COUNT=new BigInteger("0");
        BigInteger ONE=new BigInteger("1");
        BigInteger TWO=new BigInteger("2");
		BigInteger TEN=new BigInteger("10");
		System.out.println("ÒòÊıÎª£º ");
	    for(BigInteger i=TWO; i.compareTo(m)<0;i=i.add(ONE)){
	         if((int1.remainder(i).compareTo(BigInteger.ZERO))==0){
	            COUNT=COUNT.add(ONE);
	            System.out.print(" "+i.toString());
	            if(COUNT.equals(TEN))
	            	break;
	        }
	    }
	    System.out.println(" ");
		
	}

}
