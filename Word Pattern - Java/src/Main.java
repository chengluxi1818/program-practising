import java.util.*;

/*
Word Pattern My Submissions Question Solution 

Total Accepted: 11098 Total Submissions: 42289 Difficulty: Easy
Given a pattern and a string str, find if str follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

Examples:
pattern = "abba", str = "dog cat cat dog" should return true.
pattern = "abba", str = "dog cat cat fish" should return false.
pattern = "aaaa", str = "dog cat cat dog" should return false.
pattern = "abba", str = "dog dog dog dog" should return false.
Notes:
You may assume pattern contains only lowercase letters, and str contains lowercase letters separated by a single space.
*/

public class Main {
    public static boolean wordPattern(String pattern, String str) {
        if((pattern.length() == 0 && str.length() != 0) || (str.length() != 0 && str.length() == 0))
            return false;
            
        String[] split = str.split(" ");
        
        HashMap<String, List<Integer>> map = new HashMap<>();
        
        
        for(int i = 0; i < split.length; i++) {
            String single = split[i];
            List<Integer> temp = map.get(single);
            if(temp == null)
                temp = new ArrayList<Integer>();

            temp.add(i);
            map.put(single, temp);
        }
        
        for(String key : map.keySet()) {
        	System.out.println(map.get(key));
        }
        
        for(String key : map.keySet()) {
            List<Integer> temp = map.get(key);
            for(int i = 0; i < temp.size(); i++) {
            	int k = (temp.get(i)).intValue();
                if(pattern.charAt(temp.get(0)) != pattern.charAt(k))
                    return false;
            }
        }
        
        return true;
    }
    
    public static void main(String[] args) {
    	String str = "dog cat cat dog";
    	String pattern = "abba";
    	
    	boolean res = wordPattern(pattern, str);
    	
    	System.out.println(res);
    }
}
