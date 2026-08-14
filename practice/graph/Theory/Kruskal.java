package graph.Theory;

import java.util.ArrayList;
import java.util.List;

public class Kruskal {
    static class Edge {
        int u,v,weight;

        Edge(int u,int v,int weight) {
            this.u = u;
            this.v = v;
            this.weight = weight;
        }
    }

    static class DSU {
        int[] parent;
        int[] rank;

        DSU(int n) {
            parent = new int[n];
            rank = new int[n];

            for(int i=0;i<n;i++) {
                parent[i] = i;
            }
        }

        int find(int x) {
            if(parent[x] == x) return x;
            return parent[x] = find(parent[x]);
        }

        boolean union(int a, int b) {
            a = find(a);
            b = find(b);

            if(a == b) return false;

            if(rank[a] < rank[b]) {
                int temp = a;
                a = b;
                b = temp;
            }

            parent[b] = a;

            if(rank[a] == rank[b]) rank[a]++;

            return true;
        }
    }

    static int kruskal(int n, List<Edge> edges) {
        edges.sort((a,b) -> a.weight - b.weight);

        DSU dsu = new DSU(n);

        int mstWeight = 0;
        int edgesUsed = 0;

        for (Edge edge : edges) {

            if (dsu.union(edge.u, edge.v)) {
                mstWeight += edge.weight;
                edgesUsed++;

                if (edgesUsed == n - 1)
                    break;
            }
        }

        return mstWeight;
    }

    public static void main(String[] args) {
        int n = 4;

        List<Edge> edges = new ArrayList<>();

        edges.add(new Edge(0, 1, 10));
        edges.add(new Edge(0, 2, 6));
        edges.add(new Edge(0, 3, 5));
        edges.add(new Edge(1, 3, 15));
        edges.add(new Edge(2, 3, 4));

        System.out.println(kruskal(n, edges));
    }
}
