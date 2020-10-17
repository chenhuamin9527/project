package lab3;

import java.util.Scanner;

public class Lab3_5 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int balance = 10000;
		Dice dice = new Dice();
		Scanner input = new Scanner(System.in);
		for (int i = 1; i <= 10; i++)
		{
			System.out.println("买大或者买小？");
			String str = input.nextLine();
			String result;
			balance -= 1000;	//花1000元投注
			int totalPoints = 0;
			for(int j = 1; j <= 3; j++)
			{
				dice.roll();
				int cur_points = dice.getPoints();
				totalPoints += cur_points;
				System.out.println("开出结果为：" + cur_points);
			}
			System.out.println("结果为：" + totalPoints);
			if(totalPoints >= 10)
				result = "大";
			else
				result = "小";
			if(str.equals(result)) balance += 1000 + 0.8 * 1000;
			System.out.println("当前余额为：" + balance);
			
		}
		System.out.println("当前余额为：" + balance);
		input.close();
	}

}
