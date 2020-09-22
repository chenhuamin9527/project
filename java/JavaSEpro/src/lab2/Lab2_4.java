package lab2;

public class Lab2_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Account tom = new Account("Tom", "100", "111111", 10000);
		tom.checkAccount();
		tom.save(1000);
	}
	public static class Account
	{
		private String name;
		private String id;
		private double balance;
		private String secret;
		public Account(String name, String id,String secret, double balance)
		{
			this.name = name;
			this.id = id;
			this.balance = balance;
		}
		public void setName(String name)
		{
			this.name = name;
		}
		public void setSecret(String secret)
		{
			this.secret = secret;
		}
		public void save(double money)
		{
			if(money < 0)
			{
				System.out.println("���������");
				return;
			}
			else
			{
				this.balance += money;
			}
			System.out.println("�ѳɹ�����" + money + "Ԫ");
		}
		public void get(double money)
		{
			if(money > balance)
			{
				System.out.println("����");
			}
			else
			{
				this.balance -= money;
				System.out.println("�ѳɹ�ȡ��" + money + "Ԫ");
			}
		}
		public void checkAccount()
		{
			System.out.println("�˻����Ϊ�� " + this.balance);
		}
	}
}
