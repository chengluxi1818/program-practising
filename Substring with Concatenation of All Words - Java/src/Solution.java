import java.util.*;

public class Solution {
    public static List<Integer> findSubstring(String s, String[] words) {
        List<Integer> res = new ArrayList<Integer>();
        
        if(words.length == 0) return res;
        
        HashMap<String, Integer> map = new HashMap<>();
        
        int multi = words[0].length();
        int start = 0;
        
        while(words.length*multi < s.length()) {
            for(int i = 0; i < words.length; i++) {
                int found = s.indexOf(words[i]);
                System.out.println(words[i]);
                System.out.println(found);
                if(found == -1)
                    return res;
                
                String temp = new String(words[i]);
                map.put(temp, found);
            }
            
            int min = Integer.MAX_VALUE;
            int max = Integer.MIN_VALUE;
            
            
            for(String key : map.keySet()) {
                int curr = map.get(key);
                if(curr < min) {
                    min = curr;
                }
                if(curr > max) {
                    max = curr;
                }
            }
            
            if((max+multi)-min == (words.length*multi)) res.add(min);
            map.clear();
            if(max+multi < s.length()) {
                s = s.substring(max+multi);
                start = max+multi;
            }
        }
        
        return res;
    }
    
    public static void main(String[] args) {
    	String str = new String("barfoothefoobarman");
    	String[] words = new String[2];
    	words[0] = new String("foo");
    	words[1] = new String("bar");
    	
    	List<Integer> res = findSubstring(str, words);
    	
    	System.out.println(res);
    	
    }
}