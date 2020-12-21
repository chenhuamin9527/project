package lab11;

public class Lab11_3{
	Thread thread1;
	Thread thread2;
	public Lab11_3() {
		thread1=new Thread(new Runnable() {			
			@Override
			public void run() {
				try {
					System.out.println("线程1启动");
					Thread.sleep(1000);
					System.out.println("线程1休眠");
					thread2.join();
					System.out.println("线程2加入");
					thread1.interrupt();
					System.out.println("线程1中断");
				} catch (Exception e) {
					// TODO: handle exception
					e.printStackTrace();
				}
			}
		});
		thread1.start();
		thread2=new Thread(new Runnable() {
			
			@Override
			public void run() {
				// TODO 自动生成的方法存根
				try {
					
				} catch (Exception e) {
					// TODO: handle exception
					e.printStackTrace();
				}
				
			}
		});
	}
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		new Lab11_3();
	}
}
