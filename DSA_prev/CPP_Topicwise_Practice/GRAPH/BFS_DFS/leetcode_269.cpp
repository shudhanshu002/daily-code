#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;

class Solution
{
public:
    string result;
    void buildGraph(unordered_map<char, set<char>> &adj, vector<string> &words, vector<int> &indegree)
    {
        int n = words.size();

        for (string word : words)
        {
            for (char &ch : word)
            {
                adj[ch] = set<char>{};
            }
        }

        for (int i = 1; i < n; i++)
        {
            string first = words[i - 1];
            string second = words[i];

            int l = min(first.length(), second.length());
            for (int j = 0; j < l; j++)
            {
                char u = first[j];
                char v = second[j];
                if (u != v)
                {
                    indegree[v - 'a']++;
                    adj[u].insert(v);
                    break;
                }

                if (j + 1 == l && first.length() > second.length())
                {
                    adj.clear();
                    return;
                }
            }
        }
    }

    void khansAlgo(unordered_map<char, set<char>> &adj, int V, vector<int> &indegree)
    {
        queue<char> q;
        for (int i = 0; i < 26; i++)
        {
            char ch = i + 'a';
            if (indegree[i] == 0 && adj.count(ch))
            {
                q.push(ch);
            }
        }

        int count = q.size();
        while (!q.empty())
        {
            char curr = q.front();
            q.pop();
            result.push_back(curr);
            for (const char &x : adj[curr])
            {
                indegree[x - 'a']--;
                if (indegree[x - 'a'] == 0)
                {
                    count++;
                    q.push(x);
                }
            }
        }

        if (count != V)
            result = "";
    }

    string alienOrder(vector<string> &words)
    {
        unordered_map<char, set<char>> adj;
        vector<int> indegree(26, 0);

        buildGraph(adj, words, indegree);
        int V = adj.size();
        khansAlgo(adj, V, indegree);

        return result;
    }
};