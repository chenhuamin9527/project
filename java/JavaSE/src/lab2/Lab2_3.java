package lab2;

import java.util.Scanner;

public class Lab2_3 {
	public static void main(String[] args)
	{
		int n;
		int count = 1;
		int t = 1;
		int []a = new int[10000000];
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		for (int i = 0; i < n; i++)
		{
			a[i] = input.nextInt();
		}
		for (int i = 1; i < n; i++)
		{
			if(a[i] < a[i-1])
			{
				t = 1;
			}
			else
			{
				t++;
			}
			if(t >= count)
			{
				count = t;
			}
		}
		System.out.println(count);
		input.close();
	}
}
