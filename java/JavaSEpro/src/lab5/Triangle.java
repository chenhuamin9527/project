package lab5;

public class Triangle implements Area_Circumference{
	private double a;
	private double b;
	private double c;
	public double getA()
	{
		return a;
	}
	public double getB()
	{
		return b;
	}
	public double getC()
	{
		return c;
	}
	public Triangle(double a, double b, double c)
	{
		this.a = a;
		this.b = b;
		this.c = c;
	}
	public double Area()
	{
		double p = (a + b + c)/2;
		return Math.sqrt(p*(p-a)*(p-b)*(p-c));
	}
	public double Circumference()
	{
		return a + b + c;
	}
}
