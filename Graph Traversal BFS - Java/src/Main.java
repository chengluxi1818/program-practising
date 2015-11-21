import java.util.*;

public class Main {
	public static void main(String[] args) {
		int numVertices = 5;
		List<List<Integer> > adjMatrix = new ArrayList<>();
		
		for(int i = 0; i < numVertices; i++) {
			List<Integer> row = new ArrayList<>();
			adjMatrix.add(i, row);
		}
		
		Random rand = new Random();
		
		for(int i = 0; i < numVertices; i++){
			for(int j = 0; j < numVertices; j++) {
				int weight = rand.nextInt(3);
				(adjMatrix.get(i)).add(j, weight);
				System.out.print(weight + " ");
			}
			System.out.println();
		}
		
		System.out.println("*********");
		
		boolean[] visit = new boolean[adjMatrix.size()];
		
		for(int i = 0; i < visit.length; i++) 
			visit[i] = false;		
		
		DFS(adjMatrix, visit, 0);
	}
	
	public static void BFS(List<List<Integer> > adj, int source) {
		Queue<Integer> que = new LinkedList<>();
		boolean[] visit = new boolean[adj.size()];
		
		for(int i = 0; i < visit.length; i++) 
			visit[i] = false;
		
		que.add(source);
		visit[source] = true;
		
		while(!que.isEmpty()) {
			int front = que.poll();
			
			
			for(int i = 0; i < adj.size(); i++) {
				int temp = i;
				if((adj.get(front)).get(i) != 0 && visit[temp] == false) {
					System.out.print(temp + " ");
					que.add(temp);
					visit[temp] = true;
				}
			}
		}
		
	}
	
	public static void DFS(List<List<Integer> > adj, boolean[] visit, int source) {
		visit[source] = true;
		System.out.print(source + " ");
		
		for(int i = 0; i < (adj.get(source)).size(); i++) {
			int temp = (adj.get(source)).get(i);
			if(temp != 0 && !visit[i]) {
				DFS(adj, visit, i);
			}
		}
	}
	
	public static void DFSstack(List<List<Integer> > adj, int source) {
		List<Boolean> visit = new ArrayList<>((adj.get(source)).size());
		Stack<Integer> trav = new Stack<>();
		
		trav.push(source);
		visit.set(source, true);
		
		int start = 0;
		while(!trav.empty()) {
			int temp = trav.peek();
			
			for(int i = start; i < (adj.get(temp)).size(); i++) {
				int k = (adj.get(temp)).get(i);
				
				if(k != Integer.MAX_VALUE && !visit.get(k)) {
					trav.push(i);
					visit.set(i, true);
					start = 0;
					break;
				}
			}
			
			start = trav.pop();
			
		}
	}
}