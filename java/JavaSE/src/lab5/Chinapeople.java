package lab5;

//
//ChinaPeople类是People类的子类，新增了public void chinaGongfu()方法，并重写父类的public void speakHello()方法。
public class Chinapeople extends People
{
	public void chinaGongfu()
	{
		System.out.println("呵！哈！");
		System.out.println("(一个滑铲)");
	}
	public void speakHello()
	{
		System.out.println("Hello!你好!");
	}
}
