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
			System.out.println("��������С��");
			String str = input.nextLine();
			String result;
			balance -= 1000;	//��1000ԪͶע
			int totalPoints = 0;
			for(int j = 1; j <= 3; j++)
			{
				dice.roll();
				int cur_points = dice.getPoints();
				totalPoints += cur_points;
				System.out.println("�������Ϊ��" + cur_points);
			}
			System.out.println("���Ϊ��" + totalPoints);
			if(totalPoints >= 10)
				result = "��";
			else
				result = "С";
			if(str.equals(result)) balance += 1000 + 0.8 * 1000;
			System.out.println("��ǰ���Ϊ��" + balance);
			
		}
		System.out.println("��ǰ���Ϊ��" + balance);
		input.close();
	}

}
