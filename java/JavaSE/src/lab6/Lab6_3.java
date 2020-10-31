package lab6;

import java.util.Scanner;

public class Lab6_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try{
			Scanner input = new Scanner(System.in);
			int num1 = input.nextInt();
			int num2 = input.nextInt();
			System.out.println(num1/num2);
		} catch (ArithmeticException e){
			System.out.println("除数不能为0");
		} catch(Exception e)
		{
			e.printStackTrace();
		}
		
	}

}
