#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class UnionFind {
 public:
  UnionFind(int n) : id(n), rank(n) {
    iota(id.begin(), id.end(), 0); // Initialize id with 0, 1, 2, ..., n-1
  }

  void unionByRank(int u, int v) {
    const int i = find(u);
    const int j = find(v);
    if (i == j)
      return;
    if (rank[i] < rank[j]) {
      id[i] = j;
    } else if (rank[i] > rank[j]) {
      id[j] = i;
    } else {
      id[i] = j;
      ++rank[j];
    }
  }

  int find(int u) {
    return id[u] == u ? u : id[u] = find(id[u]);
  }

 private:
  vector<int> id;
  vector<int> rank;
};

class Solution {
 public:
  int minimumCost(int n, vector<vector<int>>& connections) {
    int ans = 0;
    UnionFind uf(n + 1);

    // Sort by cost using standard sort
    sort(connections.begin(), connections.end(), [](const vector<int>& a, const vector<int>& b) {
      return a[2] < b[2];
    });

    for (const vector<int>& connection : connections) {
      const int u = connection[0];
      const int v = connection[1];
      const int cost = connection[2];
      if (uf.find(u) == uf.find(v))
        continue;
      uf.unionByRank(u, v);
      ans += cost;
    }

    const int root = uf.find(1);
    for (int i = 1; i <= n; ++i)
      if (uf.find(i) != root)
        return -1;

    return ans;
  }
};

int main() {
  // Sample Input
  int n = 2;  // Number of cities
  vector<vector<int>> connections = {
    {1, 2, 3},
    {3, 4, 4}
  };

  Solution solution;
  int result = solution.minimumCost(n, connections);
  cout << "Minimum cost to connect all cities: " << result << endl;

  return 0;
}


