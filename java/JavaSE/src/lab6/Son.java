package lab6;
//Son类（属性:name，gender，age ；方法: say（）:English,Chinese，drive（）:airplane，）
public class Son extends Person{
	private String name;
	private String gender;
	private int age;
	public void say()
	{
		System.out.println("English");
	}
	public void drive()
	{
		System.out.println("airplane");
	}
}
