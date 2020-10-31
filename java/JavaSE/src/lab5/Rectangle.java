package lab5;

public class Rectangle {
	private double a;
	private double b;
	public Rectangle(double a, double b)
	{
		this.a = a;
		this.b = b;
	}
	public double Area()
	{
		return a*b;
	}
	public double Geta()
	{
		return a;
	}
	public double Getb()
	{
		return b;
	}
}
