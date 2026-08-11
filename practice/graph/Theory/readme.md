1. Tree Diameter Property

If you start BFS/DFS from any node:

any node -> farthest node A
A -> farthest node B

Then:

dist(A,B) = diameter

Used in:

LC 1245 Tree Diameter
LC 3203 Minimum Diameter After Merge
Competitive Programming
2. Radius-Diameter Relationship

For every tree:

Radius=⌈Diameter/2⌉

r=⌈
2
d
	​

⌉

Useful whenever:

Center of tree
Diameter minimization
Tree merging
3. Centers of Tree

A tree has:

1 center if diameter is even
2 centers if diameter is odd

Example:

0-1-2-3-4

Center:

2

Example:

0-1-2-3-4-5

Centers:

2,3

The center minimizes maximum distance to all nodes.

4. Tree Edge Count

A connected graph is a tree iff:

Edges = Nodes - 1

and no cycle exists.

Immediately useful in:

DSU problems
Graph validation
5. Handshaking Lemma

For any undirected graph:

∑degree(v)=2E

∑
v∈V
	​

deg(v)=2E

Useful for:

Counting leaves
Graph proofs
Degree problems
6. Leaves in a Tree

For any tree:

Nodes > 1

there are at least:

2 leaves

This fact appears surprisingly often.

7. Bipartite Graph Property

A graph is bipartite iff:

No odd cycle exists

Used in:

LC 785 Is Graph Bipartite
LC 886 Possible Bipartition
8. DAG Property

A graph is DAG iff:

Topological ordering exists

and

No cycle exists

Used in:

Course Schedule
Build dependencies
Alien Dictionary
9. Tree DP Observation

Whenever problem asks:

Longest path
Maximum score
Subtree answer

Think:

Answer(node)
=
Combine(children answers)

This is the basis of:

Diameter DP
House Robber III
Binary Tree Maximum Path Sum
10. Connected Components

For an undirected graph:

components =
number of DFS/BFS starts

Used everywhere.

11. DSU Property

DSU only answers:

Connectivity

It does NOT answer:

Shortest path
Reachability in directed graph
Diameter

This is exactly why DSU fails on LC 2101.

12. Bridge Property

Edge is a bridge if removing it increases components.

Key observation:

Bridge cannot belong to any cycle.

Used in:

Critical Connections (LC 1192)
13. Articulation Point Property

Node is articulation point if removing it disconnects graph.

Think:

Critical node

instead of critical edge.

14. MST Property

For a connected graph:

MST always contains V-1 edges

Useful algorithms:

Kruskal → DSU
Prim → Heap
15. Unique Path Property of Trees

Between any two nodes in a tree:

Exactly one simple path exists.

This fact alone simplifies many proofs.

Examples:

LCA
Distance between nodes
Diameter
Tree DP
16. Distance Formula in Tree

If LCA is known:

dist(u,v)=depth(u)+depth(v)−2×depth(lca)

dist(u,v)=depth(u)+depth(v)−2⋅depth(LCA(u,v))

Very important for advanced tree problems.

17. BFS Guarantees Shortest Path

In an unweighted graph:

First time BFS reaches node
=
Shortest distance

This is one of the most useful graph facts.

18. Multi-Source BFS

Instead of:

Run BFS from every source

put all sources into queue initially.

Used in:

Rotten Oranges
01 Matrix
Nearest Exit
Fire spread problems
19. DFS Time In/Out Trick

If:

tin[u] <= tin[v]
and
tout[v] <= tout[u]

then:

u is ancestor of v

Used heavily in:

LCA
Euler Tour
Tree Queries
20. Strongly Connected Components

For directed graphs:

Inside an SCC:

Every node reaches every other node

Algorithms:

Kosaraju
Tarjan

Very useful for advanced graph problems.

The graph concepts that appear most often in interviews and LeetCode are:

BFS gives shortest path in unweighted graph.
Double BFS gives tree diameter.
Radius = ceil(diameter/2).
Bipartite ⇔ no odd cycle.
DAG ⇔ topological order exists.
Unique path property of trees.
DSU = connectivity only.
Multi-source BFS.
LCA distance formula.
SCC concepts for directed graphs.