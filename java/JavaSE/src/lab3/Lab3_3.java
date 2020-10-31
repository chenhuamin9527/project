package lab3;

import java.util.Scanner;

public class Lab3_3 {
	public static void main(String[] args)
	{
		String qq_number = "[1-9]\\p{Digit}{4,10}";
		Scanner input = new Scanner(System.in);
		String input_number = input.next();
		if(input_number.matches(qq_number))
		{
			System.out.println("qq号码符合要求");
		}
		else
		{
			System.out.println("qq号码不符合要求");
		}
		input.close();
	}
}
