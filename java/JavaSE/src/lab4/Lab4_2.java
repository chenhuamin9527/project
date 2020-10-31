package lab4;

//Integer¡¢Bollean¡¢Byte¡¢Character¡¢Double¡¢Number

public class Lab4_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Integer int1 = new Integer(7);
		Integer int2 = new Integer("45");
		System.out.println(int1.intValue());
		System.out.println(int1.equals(int2));
		System.out.println(int2.compareTo(int1));
		Boolean b1 = new Boolean(true);
		Boolean b2 = new Boolean("OK");
		System.out.println("b1: " + b1.booleanValue());
		System.out.println("b2: " + b2.booleanValue());
		byte mbyte = 45;
		Byte b = new Byte(mbyte);
		Byte mybyte = new Byte("12");
		System.out.println(Byte.MIN_VALUE);
		System.out.println(Byte.MAX_VALUE);
		Character mychar1 = new Character('A');
		Character mychar2 = new Character('a');
		System.out.println(mychar1 + "ÊÇ´óÐ´×ÖÄ¸Âð£¿" + Character.isUpperCase(mychar1));
		System.out.println(mychar2 + "ÊÇÐ¡Ð´×ÖÄ¸Âð£¿" + Character.isLowerCase(mychar2));
		Double double1 = 1.23;
		Double double2 = new Double(2.34);
		System.out.println(double1.compareTo(double2));
		System.out.println(double2.isNaN());
	}

}
