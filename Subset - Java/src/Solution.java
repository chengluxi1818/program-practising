import java.util.*;

public class Solution {
	public static void main(String[] args) {
		
	}
	
	public static List<List<Integer> > subSet(List<Integer> nums) {
		List<List<Integer> > res = new ArrayList<List<Integer> >();
		if(nums.size() == 0) return res;
		List<Integer> temp = new ArrayList<Integer>();
		
		helper(res, temp, nums, 0);
		
		return res;
	}
	
	public static void helper(List<List<Integer> > res, List<Integer> temp, List<Integer> nums, int next) {
		res.add(temp);
		if(temp.size() == nums.size()) {
			return;
		}
		
		for(int i = 0; i < nums.size(); i++) {
			temp.add(nums.get(i));
			helper(res, temp, nums, i+1);
			temp.remove(temp.size()-1);
		}
		
	}
}
