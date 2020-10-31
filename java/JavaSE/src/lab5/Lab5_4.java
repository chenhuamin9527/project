package lab5;


class Alarmdoor implements alarm
{
	public Alarmdoor()
	{
		
	}
	public void open()
	{
		System.out.println("The door is open!");
	}
	public void close()
	{
		System.out.println("The door is close!");
	}
	public void alarming() {
		// TODO Auto-generated method stub
		System.out.println("Alarming!");
	}
}

public class Lab5_4 {

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Alarmdoor a = new Alarmdoor();
		a.close();
		a.open();
		a.alarming();
	}

}
