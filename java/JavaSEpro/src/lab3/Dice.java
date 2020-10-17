package lab3;

import java.util.Random;

public class Dice{
	private int points = 0;
	public int getPoints()
	{
		return points;
	}
	public void roll()
	{
		Random random = new Random();
		points = random.nextInt(6)+1; 
	}
}