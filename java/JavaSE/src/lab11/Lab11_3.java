package lab11;

public class Lab11_3{
	Thread thread1;
	Thread thread2;
	public Lab11_3() {
		thread1=new Thread(new Runnable() {			
			@Override
			public void run() {
				try {
					System.out.println("�߳�1����");
					Thread.sleep(1000);
					System.out.println("�߳�1����");
					thread2.join();
					System.out.println("�߳�2����");
					thread1.interrupt();
					System.out.println("�߳�1�ж�");
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
				// TODO �Զ����ɵķ������
				try {
					
				} catch (Exception e) {
					// TODO: handle exception
					e.printStackTrace();
				}
				
			}
		});
	}
	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		new Lab11_3();
	}
}
