package lab5;

import java.util.Random;

class Test{
	int i = 0;
}

class Parents{
	private final void doit()
	{
		System.out.println("����.doit()");
	}
	final void doit2()
	{
		System.out.println("����.doit2()");
	}
	public void doit3()
	{
		System.out.println("����.doit3()");
	}
}

class Sub extends Parents
{
	public final void doit()
	{
		System.out.println("���ࡣdoit()");
	}
	//final�������ܱ�����
//	final void doit2()
//	{
//		System.out.println("����.doit2()");
//	}
	public void doit3()
	{
		System.out.println("����.doit3()");
	}
}

public class Lab5_3 {
	static Random rand = new Random();
	private final int VALUE_1 = 9; 	//����һ��final����
	private static final int VALUE_2 = 10; 	//����һ��final��static����
	private final Test test = new Test();	//����һ��final����
	private Test test2 = new Test();	//����һ������final������

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Lab5_3 data = new Lab5_3();
		//data.test = new Test();
		//���ܽ�����Ϊfinal�������еĳ�Ա�����ı�����
		
		//data.VALUE_2++;
		//���ܸı䶨��Ϊfinal�ĳ���ֵ
		
		data.test2 = new Test();	//���Խ�û�ж���Ϊfinal������ָ����������
		Sub s = new Sub();
		s.doit();
		Parents p = s;
		//p.doit();
		p.doit2();
		p.doit3();
	}

}
