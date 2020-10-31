package lab5;


//
//ChinaPeople类是People类的子类，新增了public void chinaGongfu()方法，并重写父类的public void speakHello()方法。
public class Lab5_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		People Person1 = new People();
		Chinapeople Person2 = new Chinapeople();
		Person1.averageHeight();
		Person1.averageWeight();
		Person1.speakHello();
		Person2.chinaGongfu();
		Person2.speakHello();
	}

}
