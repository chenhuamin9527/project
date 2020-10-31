package lab6;
//Father类 （属性:name ，gender，age ；方法 : say （）:chinese，drive（）:car）   //（方法():后面为输出的文字）
public class Father extends Person{
	private String name;
	private String gender;
	private int age;
	public void say()
	{
		System.out.println("chinese");
	}
	public void drive()
	{
		System.out.println("car");
	}
}
