package lab6;

interface Car {
	abstract void run();
}

public class Lab6_2 {
	//成员内部类
	class CarTest implements Car {
		public void run()
		{
			System.out.println("run1");
		}
		public void CarRun()
		{
			System.out.println("CarRun1");
		}
	}
	
	public void Inner()
	{
		CarTest car1 = new CarTest();
		car1.run();
		car1.CarRun();
	}
	
	public void fun()
	{
		class CarTest implements Car{
			public void run()
			{
				System.out.println("run2");
			}
			public void CarRun()
			{
				System.out.println("CarRun2");
			}
		}
		CarTest car2 = new CarTest();
		car2.CarRun();
		car2.run();
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Lab6_2 t1 = new Lab6_2();
		t1.Inner();
		t1.fun();
		Lab6_2 t2 = new Lab6_2()
		{
			public void run()
			{
				System.out.println("run2");
			}
			public void CarRun()
			{
				System.out.println("CarRun2");
			}
		};
	}
}
