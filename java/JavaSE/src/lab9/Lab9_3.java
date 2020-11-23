package lab9;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

//分别使用HashMap、TreeMap存储同样顺序的10个不同英文单词，然后分别遍历输出它们，看看两者的存储结果有何不同。

public class Lab9_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Map<String, String> map1 = new HashMap<>();
		TreeMap<String, String> map2 = new TreeMap<>();
		map1.put("a","1");
		map1.put("b","2");
		map1.put("c","3");
		map1.put("d","4");
		map1.put("e","5");
		map1.put("f","6");
		map1.put("g","7");
		map1.put("h","8");
		map1.put("i","9");
		map1.put("j","10");
		Set <String> set = map1.keySet();
		Iterator<String> it = set.iterator();
		System.out.println("HashMap类实现的集合：");
		while(it.hasNext())
		{
			String str = (String) it.next();
			String name = (String) map1.get(str);
			System.out.println(str + " " + name);
		}
		map2.put("a","1");
		map2.put("b","2");
		map2.put("c","3");
		map2.put("d","4");
		map2.put("e","5");
		map2.put("f","6");
		map2.put("g","7");
		map2.put("h","8");
		map2.put("i","9");
		map2.put("j","10");
		Iterator<String> iter = map2.keySet().iterator();
		System.out.println("TreeMap类实现的集合：");
		while(iter.hasNext())
		{
			String str = (String) iter.next();
			String name = (String) map2.get(str);
			System.out.println(str + " " + name);
		}
	}

}
