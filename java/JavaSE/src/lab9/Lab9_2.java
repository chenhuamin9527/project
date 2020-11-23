package lab9;

import java.util.Iterator;
import java.util.TreeSet;

public class Lab9_2 implements Comparable<Object>{
	String name;
	long id;
	
	public Lab9_2(String name, long id)
	{
		this.id = id;
		this.name = name;
	}
	
	public int compareTo(Object o)
	{
		Lab9_2 upstu = (Lab9_2) o;
		int result = id > upstu.id ? 1 : (id == upstu.id ? 0 : -1);
		return result;
	}
	
	public String getName()
	{
		return name;
	}
	
	public void setName(String name)
	{
		this.name = name;
	}
	
	public long getId()
	{
		return id;
	}
	
	public void setId(long id)
	{
		this.id = id;
	}
	
	public static void main(String[] args) {
		Lab9_2 stu1 = new Lab9_2("李同学", 01011);
		Lab9_2 stu2 = new Lab9_2("陈同学", 01021);
		Lab9_2 stu3 = new Lab9_2("王同学", 01051);
		Lab9_2 stu4 = new Lab9_2("马同学", 01012);
		TreeSet<Lab9_2> tree = new TreeSet<>();
		tree.add(stu1);
		tree.add(stu2);
		tree.add(stu3);
		tree.add(stu4);
		Iterator<Lab9_2> it = tree.iterator();
		System.out.println("Set集合中的所有元素：");
		while(it.hasNext())
		{
			Lab9_2 stu = (Lab9_2) it.next();
			System.out.println(stu.getId() + " " + stu.getName());
		}
		it = tree.headSet(stu2).iterator();
		System.out.println("截取前面部分的集合：");
		while(it.hasNext())
		{
			Lab9_2 stu = (Lab9_2) it.next();
			System.out.println(stu.getId() + " " + stu.getName());
		}
		it = tree.subSet(stu2, stu3).iterator();
		System.out.println("截取中间部分的集合");
		while(it.hasNext())
		{
			Lab9_2 stu = (Lab9_2) it.next();
			System.out.println(stu.getId() + " " + stu.getName());
		}
	}

}
