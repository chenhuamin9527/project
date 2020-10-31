package lab5;

import java.util.Random;

class Test{
	int i = 0;
}

class Parents{
	private final void doit()
	{
		System.out.println("父类.doit()");
	}
	final void doit2()
	{
		System.out.println("父类.doit2()");
	}
	public void doit3()
	{
		System.out.println("父类.doit3()");
	}
}

class Sub extends Parents
{
	public final void doit()
	{
		System.out.println("子类。doit()");
	}
	//final方法不能被覆盖
//	final void doit2()
//	{
//		System.out.println("子类.doit2()");
//	}
	public void doit3()
	{
		System.out.println("子类.doit3()");
	}
}

public class Lab5_3 {
	static Random rand = new Random();
	private final int VALUE_1 = 9; 	//声明一个final常量
	private static final int VALUE_2 = 10; 	//声明一个final、static常量
	private final Test test = new Test();	//声明一个final引用
	private Test test2 = new Test();	//声明一个不是final的引用

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Lab5_3 data = new Lab5_3();
		//data.test = new Test();
		//不能将定义为final的引用中的成员变量改变引用
		
		//data.VALUE_2++;
		//不能改变定义为final的常量值
		
		data.test2 = new Test();	//可以将没有定义为final的引用指向其他引用
		Sub s = new Sub();
		s.doit();
		Parents p = s;
		//p.doit();
		p.doit2();
		p.doit3();
	}

}
