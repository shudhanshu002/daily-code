#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m;
    vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    int dfs(vector<vector<int>> &grid, int r, int c, int &id)
    {
        if (r < 0 || c < 0 || r >= n || c >= m || grid[r][c] != 1)
            return 0;

        grid[r][c] = id;
        int count = 1;

        for (auto &dir : dir)
        {
            int x = r + dir[0];
            int y = c + dir[1];

            count += dfs(grid, x, y, id);
        }

        return count;
    }

    int largestIsland(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();

        int maxArea = 0;
        unordered_map<int, int> mp;
        int island_id = 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int size = dfs(grid, i, j, island_id);
                maxArea = max(maxArea, size);
                mp[island_id] = size;
                island_id++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                {
                    unordered_set<int> st;
                    for (auto vec : dir)
                    {
                        int x = i + vec[0];
                        int y = j + vec[1];
                        if (x >= 0 && x < n && y >= 0 && y < m &&
                            grid[x][y] != 0)
                            st.insert(grid[x][y]);

                        int sum = 1;
                        for (const int &s : st)
                            sum += mp[s];
                        maxArea = max(maxArea, sum);
                    }
                }
            }
        }

        return maxArea;
    }
};