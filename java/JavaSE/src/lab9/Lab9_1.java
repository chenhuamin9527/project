package lab9;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Lab9_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<String> list = new ArrayList<>();
		list.add("hello");
		list.add("world");
		list.add("you");
		Scanner input = new Scanner(System.in);
		System.out.println("���������");
		System.out.println("addΪ��ӵ��ʣ�deleteΪɾ������");
		String com = input.nextLine();
		if(com.equals("add"))
		{
			System.out.println("������Ҫ��ӵĵ��ʣ�");
			String word = input.nextLine();
			boolean flag = true;
			for(int i = 0; i < list.size(); i++)
			{
				if(word.equals(list.get(i)))
				{
					System.out.println("�������Ѿ����иõ���");
					flag = false;
					break;
				}
			}
			if(flag)
				list.add(word);
		}
		if(com.equals("delete"))
		{
			System.out.println("������Ҫɾ���ĵ��ʣ�");
			String word = input.nextLine();
			boolean flag = true;
			for(int i = 0; i < list.size(); i++)
			{
				if(word.equals(list.get(i)))
				{
					flag = false;
					list.remove(i);
					break;
				}
			}
			if(flag)
			{
				System.out.println("�����в�δ���иõ���");
			}
			list.remove(word);
		}
		System.out.println("���鵥�ʺ���:");
		for(int i = 0; i < list.size(); i++)
		{
			System.out.println(list.get(i));
		}
	}

}
