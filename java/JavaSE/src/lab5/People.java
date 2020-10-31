package lab5;
//People类有访问权限是protected的double类型成员变量height和weight，
//
//以及public void speakHello()、public void averageHeight()和public void averageWeight()方法。
public class People {
	protected double height;
	protected double weight;
	public void speakHello()
	{
		System.out.println("Hello!");
	}
	public void averageHeight()
	{
		System.out.println("平均身高");
	}
	public void averageWeight()
	{
		System.out.println("平均体重");
	}
}
