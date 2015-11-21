class Account {
	private String accountNumber;
	public Account(String s) {
		this.accountNumber = s;
	}
}

interface Fly {
	public void fly();
}

public class Main {
	private static Fly can;
	
	public static void main(String[] args) {
/*		int a = 2;
		int b = 2;
		Integer A = new Integer(2);
		Integer B = new Integer(2);
		
		System.out.println(a == b);
		System.out.println(A == B);
		
		System.out.println(a == A);
		System.out.println(a == B);
		
		System.out.println(A.equals(a));
		System.out.println(A.equals(B));
		*/
/*		
		String as = new String("abc");
		String bs = new String("abc");
		
		for(int i = 0; i < as.length(); i++) {
			if(as.charAt(i) == bs.charAt(i))
				System.out.println(false);
		}
		System.out.println(true);*/
		
		String as = new String("abcabcabcndeg");
		String bs = new String("abcabcabcndeg");
		
		System.out.println(as.hashCode());
		System.out.println(bs.hashCode());
		
		Account a = new Account("abc");
		Account b = new Account("abc");
		Account c = a;
		
		System.out.println(a.equals(b));
		System.out.println(a.hashCode());
		System.out.println(b.hashCode());
		System.out.println(a.equals(c));
		System.out.println(a == c);
		
	}
}
