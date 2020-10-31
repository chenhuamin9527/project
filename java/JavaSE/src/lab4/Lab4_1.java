package lab4;

import java.util.Scanner;

public class Lab4_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int rows = input.nextInt();
		int cols = input.nextInt();
		int data[][] = new int[rows][cols];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				data[i][j] = input.nextInt();
			}
		}
		int v_data[][] = new int[cols][rows];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				v_data[j][i] = data[i][j];
			}
		}
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				System.out.print(v_data[i][j] + " ");
			}
			System.out.println();
		}
	}

}
