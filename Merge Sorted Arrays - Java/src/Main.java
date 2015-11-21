import java.util.ArrayList;
import java.util.List;


public class Main {
	public static void main(String[] args) {
		testArrayMerger();
		System.out.println();
		testArrayMergerDuplication();
		System.out.println();
		testArrayMergerMinus();
	}
	
	public static void testArrayMerger() {
		int[] array1 = {1, 2, 8, 9};
		int[] array2 = {3, 5, 7, 11};
		ArrayMerger merger = new ArrayMerger();
		
		int[] result = merger.mergeAndRemove(array1, array2);
		for(int u : result)
			System.out.print(u + " ");
	}
	
	public static void testArrayMergerDuplication() {
		int[] array1 = {1, 2, 8, 9, 15};
		int[] array2 = {3, 5, 8, 10, 15};
		ArrayMerger merger = new ArrayMerger();
		
		int[] result = merger.mergeAndRemove(array1, array2);
		for(int u : result)
			System.out.print(u + " ");
	}
	
	public static void testArrayMergerMinus() {
		int[] array1 = {-4, 1, 2, 8, 9, 11};
		int[] array2 = {-4, -2, 0, 3, 5, 8};
		ArrayMerger merger = new ArrayMerger();
		
		int[] result = merger.mergeAndRemove(array1, array2);
		for(int u : result)
			System.out.print(u + " ");		
	}
}

class ArrayMerger {
	public int[] mergeAndRemove(int[] array1, int[] array2) {
		List<Integer> combinedArray = new ArrayList<Integer>();
		
		int i = 0;
		int j = 0;
		
		while(i < array1.length && j < array2.length) {
			if(array1[i] < array2[j]) combinedArray.add(array1[i++]);
			else if(array1[i] > array2[j]) combinedArray.add(array2[j++]);
			else {
				//combinedArray.add(array1[i]);
				i++;
				j++;
			}
		}
		while(i < array1.length) combinedArray.add(array1[i++]);
		while(j < array2.length) combinedArray.add(array2[j++]);
		
		int[] res = new int[combinedArray.size()];
		int x = 0;
		for(int u : combinedArray) {
			res[x++] = u;
		}
		
		return res;
	}
}
