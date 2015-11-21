package LX;

import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		//List<String> list = new ArrayList<>();
		//list.add("abc");
		List list = new ArrayList();
		list.add("abc");
		list.add(1);
		System.out.println(list);
		
		List<Integer> list2 = new ArrayList();
		list2.add(2);
		list2.add(1);
		System.out.println(list2);
		
		List<Integer> list3 = new ArrayList<Integer>();
		list3.add(2);
		list3.add(1);
		System.out.println(list3);
		
		List list4 = new ArrayList<Integer>();
		list4.add("abc");
		list4.add(1);
		System.out.println(list4);
	}
}
