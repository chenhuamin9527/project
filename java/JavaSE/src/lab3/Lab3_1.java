package lab3;

//����ʹ��String��ĳ��÷������������졢��ȡ����length������indexof�������ַ�charAt����ȡ�Ӵ�substring��ȥ���ո�trim���滻replace�����equal���Ƚ�compareTo���ָ�split�ȡ�
public class Lab3_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1 = "abc";
		String str2 = "efgh";
		String str3 = str1 + str2;
		String str4 = "hello world";
		String str5 = "hello world";
		System.out.println("str1�ĳ���Ϊ��" + str1.length());
		System.out.println("str1��b�ַ�����λ��Ϊ��" + str1.indexOf('b'));
		System.out.println("str2������Ϊ2���ַ�Ϊ��" + str2.charAt(2));
		System.out.println("str3�дӿ�ͷ��ȡ����Ϊ5���Ӵ�Ϊ��" + str3.substring(0, 4));
		System.out.println("str4ȥ���ո��Ϊ��" + str4.trim());
		if (str4.equals(str5))
			System.out.println("str4��str5���");
		else
			System.out.println("str4��str5�����");
		System.out.println("str1��str2�ȽϵĽ��Ϊ��" + str1.compareTo(str2));
		String str = "192.168.0.1";
		String[] firstArray = str.split("\\.");
		String[] secondArray = str.split("\\.",2);
		System.out.println("str��ԭֵΪ��[" + str + "]");
		System.out.println("ȫ���ָ�Ľ����");
		for(String a : firstArray)
		{
			System.out.println("[" + a + "]");
		}
		System.out.println();
		System.out.println("�ָ����εĽ����");
		for(String a : secondArray)
		{
			System.out.println("[" + a + "]");
		}
		System.out.println();
	}

}
