package lab11;

public class Lab11_2 extends Thread{
	public void run()
	{
		System.out.println(this.getId()+"号线程正在运行，当前时间是" + System.nanoTime() + "纳秒");
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Thread t1 = new Thread(new Lab11_2());
		Thread t2 = new Thread(new Lab11_2());
		Thread t3 = new Thread(new Lab11_2());
		Thread t4 = new Thread(new Lab11_2());
		t1.start();
		t2.start();
		t3.start();
		t4.start();
	}

}
