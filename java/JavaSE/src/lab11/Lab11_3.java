package lab11;

public class Lab11_3 extends Thread{
	public void run()
	{
		System.out.println("�߳���������");
		System.out.println("�߳̽���ȴ�ģʽ");
		this.notify();
		System.out.println("");
		try {
			System.out.println("�߳�������");
			this.sleep(1000);
			System.out.println("�߳����߽���");
		} catch (InterruptedException e) {
			// TODO �Զ����ɵ� catch ��
			e.printStackTrace();
		}
	}
	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		Lab11_3 lab11_3 = new Lab11_3();
		Lab11_3 lab11_32 = new Lab11_3();
		
		lab11_3.start();
		System.out.println("�߳��Ѿ���");
		try {
			lab11_32.join();
		} catch (Exception e) {
			// TODO: handle exception
		}
	}

}
