#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSimilar(string s1, string s2) {
        int diff = 0;
        for(int i=0;i<s1.length();i++) {
            if(s1[i] != s2[i]) diff++;
        }

        return diff==0 || diff==2;
    }

    vector<int> parent, rank;

    int find(int x){
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void Union(int x,int y) {
        x = find(x);
        y = find(y);

        if(x == y) return;

        if(rank[x] > rank[y]) {
            parent[y] = x;
        } else if(rank[x] < rank[y]) {
            parent[x] = y;
        } else {
            parent[x] = y;
            rank[y]++;
        }
    }

    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();

        parent.resize(n);
        rank.resize(n,0);

        for(int i=0;i<n;i++) parent[i] = i;

        int grps = n;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(isSimilar(strs[i], strs[j]) && (find(i) != find(j))) {
                    Union(i,j);
                    grps--;
                }
            }
        }

        return grps;
    }
};



// a little optimization

class Solution {
public:
    vector<int> parent, rankv;

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y) {
        x = find(x);
        y = find(y);

        if (x == y) return;

        if (rankv[x] < rankv[y])
            parent[x] = y;
        else if (rankv[x] > rankv[y])
            parent[y] = x;
        else {
            parent[y] = x;
            rankv[x]++;
        }
    }

    bool isSimilar(string &a, string &b) {
        int diff = 0;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                diff++;
                if (diff > 2) return false;
            }
        }

        return diff == 0 || diff == 2;
    }

    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();

        parent.resize(n);
        rankv.assign(n, 0);

        for (int i = 0; i < n; i++)
            parent[i] = i;

        int groups = n;

        if (n < m * m) {
            // Pairwise comparison
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (find(i) != find(j) &&
                        isSimilar(strs[i], strs[j])) {
                        Union(i, j);
                        groups--;
                    }
                }
            }
        } else {
            // Generate neighbors
            unordered_map<string, int> mp;

            for (int i = 0; i < n; i++)
                mp[strs[i]] = i;

            for (int i = 0; i < n; i++) {
                string s = strs[i];

                for (int p = 0; p < m; p++) {
                    for (int q = p + 1; q < m; q++) {

                        swap(s[p], s[q]);

                        auto it = mp.find(s);

                        if (it != mp.end()) {
                            int j = it->second;

                            if (find(i) != find(j)) {
                                Union(i, j);
                                groups--;
                            }
                        }

                        swap(s[p], s[q]);
                    }
                }
            }
        }

        return groups;
    }
};

// Time:  O(min(n²·m, n·m²))
// Space: O(n)