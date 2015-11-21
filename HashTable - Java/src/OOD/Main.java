package OOD;

import java.util.Scanner;


class Link {
	public String key;
	public int value;
	public Link next;
	
	public Link(String k, Integer v) {
		this.key = k;
		this.value = v;
		this.next = null;
	}
}

class HashTable {
	private int numKeys;
	private int tableSize;
	private Link[] table;
	
	public HashTable(int ts) {
		this.numKeys = 0;
		this.tableSize = ts;
		this.table = new Link[tableSize];
		for(int i = 0; i < tableSize; i++) {
			table[i] = null;
		}
	}
	
	private int hash(String str) {
		int index = 0;;
		
		for(int i = 0; i < str.length(); i++)
			index += (int)str.charAt(i);
		
		//index = str.hashCode();
		return index % tableSize;
	}
	
	public int search(String str) {
		int index = hash(str);
		
		if(table[index] == null)
			return -1;
		
		Link node = table[index];
		
		while(node != null) {
			if(node.key.equals(str))
				return node.value;
			node = node.next;
		}
		
		return -1;
	}
	
	public void set(String k, int v) {
		int index = hash(k);
		if(table[index] == null) {
			table[index] = new Link(k, v);
			numKeys++;
			return;
		}
		
		Link node = table[index];
		while(node.next != null) {
			if(node.key.equals(k)) {
				node.value = v;
				return;
			}
			
			node = node.next;
		}
		
		node.next = new Link(k, v);
		numKeys++;
		return;
	}
	
	public boolean remove(String k) {
		int index = hash(k);
		if(table[index] == null)
			return false;
		
		Link curr = table[index];
		Link newNode = new Link("", -1);
		newNode.next = curr;
		Link prev = newNode;
		while(curr != null) {
			if(curr.key.equals(k)) {
				prev.next = curr.next;
				numKeys--;
				table[index] = newNode.next;
				return true;
			}
			prev = curr;
			curr = curr.next;
		}
		
		return false;
	}
	
	public void printTable() {
		for(int i = 0; i < tableSize; i++) {
			if(table[i] != null) {
				Link temp = table[i];
				while(true) {
					System.out.print("{" + temp.key + ", " + temp.value + "}");
					temp = temp.next;
					if(temp == null) {
						System.out.print("\n");
						break;
					}
					System.out.print(" -> ");
				}
			}
		}
	}
	
	public int getSize() {
		return numKeys;
	}
	
	public void makeEmpty() {
		for(int i = 0; i < tableSize; i++)
			table[i] = null;
	}
}

	
public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Hash Table Test\n\n");
        System.out.println("Enter size");
        /* Make object of HashTable */
        HashTable ht = new HashTable(scan.nextInt());
 
        char ch;
        /*  Perform HashTable operations  */
        do    
        {
            System.out.println("\nHash Table Operations\n");
            System.out.println("1. insert ");
            System.out.println("2. remove");
            System.out.println("3. get");            
            System.out.println("4. clear");
            System.out.println("5. size");
 
            int choice = scan.nextInt();            
            switch (choice)
            {
            case 1 : 
                System.out.println("Enter key and value");
                ht.set(scan.next(), scan.nextInt() ); 
                break;                          
            case 2 :                 
                System.out.println("Enter key");
                ht.remove( scan.next() ); 
                break;                        
            case 3 : 
                System.out.println("Enter key");
                System.out.println("Value = "+ ht.search( scan.next() )); 
                break;                                   
            case 4 : 
                ht.makeEmpty();
                System.out.println("Hash Table Cleared\n");
                break;
            case 5 : 
                System.out.println("Size = "+ ht.getSize() );
                break;         
            default : 
                System.out.println("Wrong Entry \n ");
                break;   
            }
            /* Display hash table */
            ht.printTable();  
 
            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);                        
        } while (ch == 'Y'|| ch == 'y');  
	}
}
