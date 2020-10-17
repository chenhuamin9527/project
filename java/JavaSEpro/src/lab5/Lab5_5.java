package lab5;

import java.util.Scanner;

public class Lab5_5 {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Scanner inputScanner = new Scanner(System.in);
		System.out.println("请输入圆的半径：");
		double r = inputScanner.nextDouble();
		if(r < 0) 
		{
			System.out.println("错误输入");
			r = 0;
		}
		System.out.println("请输入矩形的长和宽：");
		double x = inputScanner.nextDouble();
		double y = inputScanner.nextDouble();
		if(x < 0 || y < 0) 
		{
			System.out.println("错误输入");
			x = 0;
			y = 0;
		}
		System.out.println("请输入三角形的三边长：");
		double a = inputScanner.nextDouble();
		double b = inputScanner.nextDouble();
		double c = inputScanner.nextDouble();
		if(a < 0||b < 0 || c < 0 || a + b <= c || a + c <= b || b + c <= a) 
		{
			System.out.println("错误输入");
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
		System.out.print("圆的面积为：");
		System.out.println(String.format("%.2f", c_area));
		System.out.print("圆的周长为：");
		System.out.println(String.format("%.2f", c_circum));
		System.out.print("矩形的面积为：" );
		System.out.println(String.format("%.2f", r_area));
		System.out.print("矩形的周长为：");
		System.out.println(String.format("%.2f", r_circum));
		System.out.print("三角形的面积为：");
		System.out.println(String.format("%.2f", t_area));
		System.out.print("三角形的周长为：");
		System.out.println(String.format("%.2f", t_circum));
		inputScanner.close();
	}

}
