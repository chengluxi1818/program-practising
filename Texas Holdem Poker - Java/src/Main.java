import java.util.*;

enum Suit {
	Diamond, Club, Heart, Spade
}

enum Rank {
	Ace(14), Ace(1), Two(2), Three(3), Four(4), Five(5), Seven(7), Eight(8), Nine(9), Ten(10), Jack(11), Queen(12), King(13);
	
	private int val;
	
	private Rank(int value) {
		this.val = value;
	}
	
	public int get() {
		return this.val;
	}
}

enum Hand {
	Pair, TwoPair, Three, Straight, FullHouse, Four, HighCard;
}

public class Main {
	public static void main(String[] args) {
		
	}
	
	public static Hand determine(List<Rank> holder, Rank temp) {
		List<Integer> store = new ArrayList<>(13);
		List<Integer> hold = new ArrayList<>(5);
		int size = holder.size();
		
		for(int i = 0; i < size; i++) {
			hold.set(i, (holder.get(i)).get());
		}
		
		// TODO: Figure out how to sort a enum
		Collections.sort(hold);
		
		// Determine whether it is straight
		if(hold.get(size-1) - hold.get(0) == size)
			return Hand.Straight;
		
		// Determine 10, J, Q, K, A
		if(hold.get(0) == 1 && hold.get(1) == 10 && hold.get(size-1) == 13)
			return Hand.Straight;
		
		// Write down counts
		for(int i = 0; i < hold.size(); i++) {
			int prev = store.get(hold.get(i) - 1);
			store.set(hold.get(i) - 1, prev++);
		}
		
		// Determine Pairs and Threes, and Fours
		int twos = 0;
		int threes = 0;
		
		for(int i = 0; i < store.size(); i++) {
			int count = store.get(i);
			
			if(count == 4)
				return Hand.Four;
			else if(count == 3)
				threes++;
			else if(count == 2)
				twos++;
		}
		
		if(twos == 2)
			return Hand.TwoPair;
		if(threes == 1 && twos == 1)
			return Hand.FullHouse;
		if(threes == 1)
			return Hand.Three;
		if(twos == 1)
			return Hand.Pair;
		
		return Hand.HighCard;
	}
}