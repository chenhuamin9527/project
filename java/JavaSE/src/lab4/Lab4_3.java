package lab4;

import java.util.Random;

public class Lab4_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random random = new Random();
		int small = 0;
		int big = 0;
		for (int i = 0; i < 10000; i++)
		{
			int temp = random.nextInt(6)+1;
			if(temp <= 3)
				small++;
			else
				big++;
		}
		System.out.println("大的点数出现次数为：" + big);
		System.out.println("小的点数出现次数为：" + small);
	}

}
