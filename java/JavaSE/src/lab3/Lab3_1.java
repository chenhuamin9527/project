package lab3;

//测试使用String类的常用方法，包括构造、获取长度length、查找indexof、返回字符charAt、获取子串substring、去除空格trim、替换replace、相等equal、比较compareTo、分割split等。
public class Lab3_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1 = "abc";
		String str2 = "efgh";
		String str3 = str1 + str2;
		String str4 = "hello world";
		String str5 = "hello world";
		System.out.println("str1的长度为：" + str1.length());
		System.out.println("str1中b字符所在位置为：" + str1.indexOf('b'));
		System.out.println("str2中索引为2的字符为：" + str2.charAt(2));
		System.out.println("str3中从开头截取长度为5的子串为：" + str3.substring(0, 4));
		System.out.println("str4去除空格后为：" + str4.trim());
		if (str4.equals(str5))
			System.out.println("str4与str5相等");
		else
			System.out.println("str4与str5不相等");
		System.out.println("str1与str2比较的结果为：" + str1.compareTo(str2));
		String str = "192.168.0.1";
		String[] firstArray = str.split("\\.");
		String[] secondArray = str.split("\\.",2);
		System.out.println("str的原值为：[" + str + "]");
		System.out.println("全部分割的结果：");
		for(String a : firstArray)
		{
			System.out.println("[" + a + "]");
		}
		System.out.println();
		System.out.println("分割两次的结果：");
		for(String a : secondArray)
		{
			System.out.println("[" + a + "]");
		}
		System.out.println();
	}

}
