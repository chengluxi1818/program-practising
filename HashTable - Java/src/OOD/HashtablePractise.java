package OOD;

public class HashtablePractise {
	private LinkPractise[] table;
	private int tableSize;
	private int numElemt;
	
	public HashtablePractise(int ts) {
		table = new LinkPractise[ts];
		tableSize = ts;
		numElemt = 0;
	}
	
	private int hash(String key) {
		int index = 0;
		for(int i = 0; i < key.length(); i++) {
			index += (int)key.charAt(i);
		}
		
		return index % tableSize;
	}
	
	public void insert(String key, int value) {
		int i = hash(key);
		
		if(table[i] == null)
			table[i] = new LinkPractise(key, value);
		else {
			LinkPractise node = table[i];
			while(node.next != null) {
				if(node.key == key) {
					node.val = value;
					return;
				}
				
				node = node.next;
			}
			
			LinkPractise temp = new LinkPractise(key, value);
			node.next = temp;
		}
		
		numElemt++;
	}
	
	public int get(String key) {
		int i = hash(key);
		
		if(table[i] == null) return -1;
		else {
			LinkPractise node = table[i];
			while(node != null) {
				if(node.key == key) {
					return node.val;
				}
				
				node = node.next;
			}
		}
		
		return -1; 
	}
	
	public boolean remove(String key) {
		int i = hash(key);
		
		if(table[i] == null) return false;
		else {
			LinkPractise newHead = new LinkPractise("fake", -1);
			newHead.next = table[i];
			
			LinkPractise prev = newHead;
			LinkPractise curr = table[i];
			
			while(curr.next != null) {
				if(curr.key == key) {
					LinkPractise temp = curr.next;
					prev.next = temp;
					numElemt--;
					return true;
				}
				else {
					prev = curr;
					curr = curr.next;
				}
			}
		}
		
		return false;
	}
}

class LinkPractise {
	public String key;
	public int val;
	public LinkPractise next;
	
	public LinkPractise(String k, int value) {
		this.key = k;
		this.val = value;
		this.next = null;
	}
}


