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
		System.out.println("请输入命令：");
		System.out.println("add为添加单词，delete为删除单词");
		String com = input.nextLine();
		if(com.equals("add"))
		{
			System.out.println("输入需要添加的单词：");
			String word = input.nextLine();
			boolean flag = true;
			for(int i = 0; i < list.size(); i++)
			{
				if(word.equals(list.get(i)))
				{
					System.out.println("数组中已经含有该单词");
					flag = false;
					break;
				}
			}
			if(flag)
				list.add(word);
		}
		if(com.equals("delete"))
		{
			System.out.println("输入需要删除的单词：");
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
				System.out.println("数组中并未含有该单词");
			}
			list.remove(word);
		}
		System.out.println("数组单词含有:");
		for(int i = 0; i < list.size(); i++)
		{
			System.out.println(list.get(i));
		}
	}

}
