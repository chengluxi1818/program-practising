import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

import org.apache.log4j.BasicConfigurator;
import org.apache.log4j.Logger;

public class ListFlattener {

        private static Logger logger = Logger.getLogger(ListFlattener.class);

        public static List flattenList(List inList) {
                List newList = new LinkedList();

                for (Object i : inList) {
                        // If it's not a list, just add it to the return list.
                        if (!(i instanceof List)) {
                                newList.add(i);
                        } else {
                                // It's a list, so add each item to the return list.
                                newList.addAll(flattenList((List)i));
                        }
                }

                return newList;
        }

        public static List flattenListNoRecursion(List inList) {
                List tempList = null;

                // Clone the input list to newList
                List newList = new LinkedList();
                newList.addAll(inList);

                ListIterator iterator = newList.listIterator();


                int currentPosition = 0;

                while (iterator.hasNext()) {
                        Object i = iterator.next();
                        if (!(i instanceof List)) {
                                // If it's not a list, advance the position.  Don't advance position if this IS a list.
                                currentPosition++;
                        } else {
                                // If the current item is a list, save it to a temp var.
                                tempList = (List) i;

                                // Delete the list from the list
                                iterator.remove();

                                // Add each item from the temp list to the master list at the same position the sublist was removed.
                                for (Object obj : tempList) {
                                        iterator.add(obj);
                                }

                                // reset the iterator to re-walk the list that was just inserted (within the master) to check for more lists.
                                iterator = newList.listIterator(currentPosition);
                        }
                }
                return newList;
        }

        public static void printList(List list) {
                int i = 0;
                for (Object item : list) {
                        logger.debug("List #"+i +": "+item);
                        i++;
                }
        }

        public static void main(String[] args) {

                BasicConfigurator.configure();

                // List of strings
                LinkedList stringList = new LinkedList();
                for (Integer i = 0; i < 10; i++) {
                        stringList.add("Stringi.toString());
                }

                // List of integers
                LinkedList intList = new LinkedList();
                for (Integer i = 10; i < 20; i++) {
                        intList.add(i);
                }

                // Nested Lists
                LinkedList nestedList1 = new LinkedList();
                LinkedList nestedList2 = new LinkedList();
                LinkedList nestedList3 = new LinkedList();

                nestedList3.add("Nested String 1");
                nestedList3.add("Nested String 2");
                nestedList2.add(nestedList3);
                nestedList1.add(nestedList2);

                LinkedList bigList = new LinkedList();

                bigList.add("First");
                bigList.add(stringList);
                bigList.add("Third");
                bigList.add(intList);
                bigList.add("Fifth");
                bigList.add(nestedList1);
                bigList.add("Seventh");

//              List flattenedList = flattenList(bigList);
                List flattenedListRecursion = flattenList(bigList);
                List flattenedList = flattenListNoRecursion(bigList);

                logger.debug("Original:                 "+bigList.toString());
//              printList(bigList);
                logger.debug("Flattened (w/ recursion): "+flattenedListRecursion.toString());
                logger.debug("Flattened (no recursion): "+flattenedList.toString());
//              printList(flattenedList);

        }
}

public class Main {

}
