package lab5;

import java.util.Scanner;

public class Lab5_5 {

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		Scanner inputScanner = new Scanner(System.in);
		System.out.println("������Բ�İ뾶��");
		double r = inputScanner.nextDouble();
		if(r < 0) 
		{
			System.out.println("��������");
			r = 0;
		}
		System.out.println("��������εĳ��Ϳ�");
		double x = inputScanner.nextDouble();
		double y = inputScanner.nextDouble();
		if(x < 0 || y < 0) 
		{
			System.out.println("��������");
			x = 0;
			y = 0;
		}
		System.out.println("�����������ε����߳���");
		double a = inputScanner.nextDouble();
		double b = inputScanner.nextDouble();
		double c = inputScanner.nextDouble();
		if(a < 0||b < 0 || c < 0 || a + b <= c || a + c <= b || b + c <= a) 
		{
			System.out.println("��������");
			a = 0;
			b = 0;
			c = 0;
		}		
		Circle circle = new Circle(r);
		Rectangle rectangle = new Rectangle(x, y);
		Triangle triangle = new Triangle(a, b, c);
		double c_area = circle.Area();
		double c_circum = circle.Circumference();
		double r_area = rectangle.Area();
		double r_circum = rectangle.Circumference();
		double t_area = triangle.Area();
		double t_circum = triangle.Circumference();
		System.out.print("Բ�����Ϊ��");
		System.out.println(String.format("%.2f", c_area));
		System.out.print("Բ���ܳ�Ϊ��");
		System.out.println(String.format("%.2f", c_circum));
		System.out.print("���ε����Ϊ��" );
		System.out.println(String.format("%.2f", r_area));
		System.out.print("���ε��ܳ�Ϊ��");
		System.out.println(String.format("%.2f", r_circum));
		System.out.print("�����ε����Ϊ��");
		System.out.println(String.format("%.2f", t_area));
		System.out.print("�����ε��ܳ�Ϊ��");
		System.out.println(String.format("%.2f", t_circum));
		inputScanner.close();
	}

}
