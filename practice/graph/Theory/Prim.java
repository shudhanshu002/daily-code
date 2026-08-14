package graph.Theory;

import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;

public class Prim {
    
    static int prim(int n, List<List<int[]>> graph) {
        // weight, node
        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b) -> a[0] - b[0]);
        boolean[] visited = new boolean[n];

        pq.offer(new int[]{0,0});
        int mstWeight = 0;

        while(!pq.isEmpty()) {
            int[] curr = pq.poll();

            int wt = curr[0];
            int u = curr[1];

            if(visited[u]) continue;

            mstWeight += wt;

            for(int[] edge: graph.get(u)) {
                int v = edge[0];
                int weight = edge[1];

                if(!visited[v]) pq.offer(new int[]{wt, v});
            }
        }
        return mstWeight;
    }

    static void addEdge(List<List<int[]>> graph, int u, int v, int weight) {
        graph.get(u).add(new int[]{v, weight});
        graph.get(v).add(new int[]{u, weight});
    } 

    public static void main(String[] args) {

        int n = 4;

        List<List<int[]>> graph = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            graph.add(new ArrayList<>());
        }

        addEdge(graph, 0, 1, 10);
        addEdge(graph, 0, 2, 6);
        addEdge(graph, 0, 3, 5);
        addEdge(graph, 1, 3, 15);
        addEdge(graph, 2, 3, 4);

        System.out.println(prim(n, graph));
    }
}
