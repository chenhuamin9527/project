package lab11;

public class Lab11_3 extends Thread{
	public void run()
	{
		System.out.println("线程正在运行");
		System.out.println("线程进入等待模式");
		this.notify();
		System.out.println("");
		try {
			System.out.println("线程正休眠");
			this.sleep(1000);
			System.out.println("线程休眠结束");
		} catch (InterruptedException e) {
			// TODO 自动生成的 catch 块
			e.printStackTrace();
		}
	}
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Lab11_3 lab11_3 = new Lab11_3();
		Lab11_3 lab11_32 = new Lab11_3();
		
		lab11_3.start();
		System.out.println("线程已就绪");
		try {
			lab11_32.join();
		} catch (Exception e) {
			// TODO: handle exception
		}
	}

}
