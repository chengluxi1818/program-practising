import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Stack;
import java.lang.Iterable;

import com.google.common.collect.Lists;
import com.google.common.collect.Sets;


@SuppressWarnings({"rawtypes","unchecked"})
public class Main {
  public static void main(String[] args) {
    Iterable iterable = Lists.newArrayList(
      1,
      2,
      Lists.newArrayList(
          "2.a.",
          Lists.newArrayList("2.a.ii"),
          "2.b."),
      3,
      4);
    
    Iterable iterable2 = Lists.newArrayList(1 ,2 ,3 ,4 ,5 ,6 ,7 ,8, 8);

    /* expected output:
          Result:
           1
           2
           2.a.
           2.a.ii
           2.b.
           3
           4
     */

    DeepIterator iter = new DeepIterator(iterable2);
    System.out.println("Result:");
    System.out.println(" " + iter.next());
    while (iter.hasNext()) {
      System.out.println(" " + iter.next());
    }
    System.out.println();
  }; 
}
/*
class DeepIterator implements Iterator {
	private Stack<Iterator> stk;
	private Object nextElement;
	
	public DeepIterator(Iterable iter) {
		Iterator temp = iter.iterator();
		if(!temp.hasNext())
			throw new RuntimeException("Empty Case!");
		
		stk = new Stack<>();
		stk.push(temp);
		nextElement = null;
	}
	
	private void iterateNext() {
		if(stk.isEmpty() || nextElement != null) {
			return;
		}
		
		Iterator traverse = stk.peek();
		if(traverse.hasNext()) {
			Object next = traverse.next();
			if(next instanceof Integer || next instanceof String) {
				nextElement = next;
			}
			else if(next instanceof Iterable) {
				stk.push(((Iterable)next).iterator());
				iterateNext();
			}
			else if(next instanceof Iterator) {
				stk.push((Iterator)next);
				iterateNext();
			}
			else if(next instanceof ArrayList) {
				stk.push(((ArrayList)next).iterator());
				iterateNext();
			}
			else {
				throw new RuntimeException("Unsupported Data Type!");
			}
		}
		else {
			stk.pop();
			iterateNext();
		}
	}
	
	public Object next() {
		if(!hasNext()) {
			throw new NoSuchElementException();
		}
		
		iterateNext();
		Object res = nextElement;
		nextElement = null;
		
		return res;
	}
	
	public boolean hasNext() {
		iterateNext();
		if(nextElement == null) return false;
		
		return true;
	}
}
*/




class DeepIterator implements Iterator {
	private Stack<Iterator> stk;
	private Object next;
	
	public DeepIterator(Iterable iter) {
		stk = new Stack<Iterator>();
		stk.push(iter.iterator());
		next = null;
	}
	
	private void iterateNext() {
		if(stk.empty() || next != null) {
			return;
		}
		
		Iterator temp = stk.peek();
		
		if(temp.hasNext()) {
			Object elmt = temp.next();
			
			if(elmt instanceof Integer) {
				next = (Integer)elmt;
			}
			else if(elmt instanceof String) {
				next = (String)elmt;
			}
			else if(elmt instanceof Iterable) {
				stk.push(((Iterable)elmt).iterator());
				iterateNext();
			}
			else if(elmt instanceof Iterator) {
				stk.push((Iterator)elmt);
				iterateNext();
			}
			else if(elmt instanceof ArrayList) {
				stk.push(((ArrayList)elmt).iterator());
				iterateNext();
			}
			else {
				throw new RuntimeException("Unsupported data type.");
			}
		}
		else {
			stk.pop();
			iterateNext();
		}
	}
	
	@Override
	public Object next() {
		Object res = null;
		
		iterateNext();
		if(next == null) throw new NoSuchElementException();
		else{
			res = next;
			next = null;
		}
		
		return res;
	}
	
	@Override
	public boolean hasNext() {
		//if(stk.empty()) return false;
		iterateNext();
		if(next == null) 
			return false;
		
		return true;
	}
	
}

//// Standard interfaces for reference below:
//
//interface Iterator<E> {
//	
//	/**
//    * @return the next element in the collection
//    * @throws NoSuchElementException if there are no more elements
//    */
//   E next();
//
//   /**
//    * @return true if there is at least one more element in the collection
//    */
//   boolean hasNext();
//
//   /**
//    * @throws IllegalStateException if next has not yet been called or remove
//    *         has already been called since the last call to next.
//    * @throws UnsupportedOperationException if this Iterator does not support
//    *         the remove operation.
//    */
//   void remove();
//}
//
//interface Iterable<E> {
//   Iterator<E> iterator();
//}

