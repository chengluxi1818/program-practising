class DeepIterator {
	private int row;
	private int col;
	private int[][] ref;
	private int next;
	
	public DeepIterator(int[][] list) {
		this.row = 0;
		this.col = 0;
		this.ref = list;
		this.next = -1;
	}
	
	private void iterNext() {
		if(next != -1) {
			return;
		}
		
		if(row < ref.length) {
			if(ref[row].length == 0) {
				row++;
				col = 0;
				iterNext();
			}
			else {
				next = ref[row][col];
				col++;
				if(col >= ref[row].length) {
					col = 0;
					row++;
				}
			}
		}
	}
	
	public int next() {
		if(!hasNext()) return -1;
		
		iterNext();
		int res = next;
		next = -1;
		
		return res;
	}
	
	public boolean hasNext() {
		iterNext();
		if(next == -1) return false;
		
		return true;
	}
}

public class Main {
	public static void main(String[] args) {
		int[][] input = {
				{},
				{},
				{1},
				{},
				{2},
				{},
				{3, 4, 5, 10, 11, 12},
				{6, 7},
				{8},
				{},
				{}
		};
		
		DeepIterator deep = new DeepIterator(input);
		
		while(deep.hasNext())
			System.out.println(deep.next());
		System.out.println(deep.hasNext());
		System.out.println(deep.next());
	}
}
