package lab11;

public class Lab11_2 extends Thread{
	public void run()
	{
		System.out.println(this.getId()+"���߳��������У���ǰʱ����" + System.nanoTime() + "����");
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
