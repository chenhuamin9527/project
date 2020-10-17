package lab5;

public class Circle implements Area_Circumference
{
	private double radium;
	private final double PI = 3.14;
	public double getRadium()
	{
		return radium;
	}
	public Circle(double radium)
	{
		this.radium = radium;
	}
	public double Area()
	{
		return PI*radium*radium;
	}
	public double Circumference()
	{
		return 2 * PI * radium;
	}
}
