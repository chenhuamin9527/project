package lab3;

import java.util.Random;

public class Lab3_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "";
		long starTime = System.currentTimeMillis();
		for(int i = 0; i < 10000; i++)
		{
			str = str + i;
		}
		long endTime = System.currentTimeMillis();
		long time = endTime - starTime;
		System.out.println("String消耗时间：" + time);
		StringBuilder builder = new StringBuilder("");
		Random random = new Random();
		
		starTime = System.currentTimeMillis();
		for(int j = 0; j < 10000; j++)
		{
			int s = random.nextInt(10000)%10;
			builder.append(s);
		}
		endTime = System.currentTimeMillis();
		time = endTime - starTime;
		System.out.println("StringBuilder消耗时间：" + time);
		System.out.println(builder);
	}

}
