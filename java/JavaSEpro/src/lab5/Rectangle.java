package lab5;

public class Rectangle implements Area_Circumference
{
	private double x;
	private double y;
	public double getX()
	{
		return x;
	}
	public double getY()
	{
		return y;
	}
	public Rectangle(double x, double y)
	{
		this.x = x;
		this.y = y;
	}
	public double Area()
	{
		return x*y;
	}
	public double Circumference()
	{
		return 2 * (x + y);
	}
}
