package lab2;

import java.util.Scanner;

public class Lab2_2 {
	public static void main(String[] args){
		int month[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
		int now_day;
		Scanner input = new Scanner(System.in);
		int i_year, i_month, i_day;
		i_year = input.nextInt();
		i_month = input.nextInt();
		i_day = input.nextInt();
		now_day = month[i_month] + i_day;
		if(isLeapyear(i_year)==1 && i_month>2)
			now_day++;
		System.out.println("今天是" + i_year + "的第" + now_day + "天");
	}
	public static int isLeapyear(int year)
	{
		if(year%400 == 0)
			return 1;
		if(year%4==0 && year%100!=0)
			return 1;
		return 0;
	}
}
