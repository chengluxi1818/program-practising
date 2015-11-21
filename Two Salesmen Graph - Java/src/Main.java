import java.util.*;
public class Main {
	public static void main(String[] args) {
		
	}
	
	public static int bestCity(List<Integer> a, List<Integer> b, List<List<Integer> > citymap) {
		int res = 0;
		
		List<Integer> compare = new ArrayList<Integer>();
		
		for(int i = 0; i < a.size(); i++) {
			if(a.get(i) == Integer.MAX_VALUE || b.get(i) == Integer.MAX_VALUE)
				continue;
			
			if(a.get(i) == b.get(i)) {
				return a.get(i);
			}
			
			// TODO: Calculate distance between a City and b City
			int x = a.get(i);
			int y = b.get(i);
			int weightx = (citymap.get(x)).get(y);
			int weighty = (citymap.get(y)).get(x);
			if(weightx != Integer.MAX_VALUE && weighty != Integer.MAX_VALUE) {
				compare.add(weightx + weighty);
			}
		}
		
		if(compare.size() == 1)
		
		return res;
	}
		
}
