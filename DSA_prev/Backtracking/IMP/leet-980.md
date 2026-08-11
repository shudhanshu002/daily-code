```cpp
class Solution {
public:
    vector<pair<int, int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    int path(vector<vector<int>>& grid, int i, int j, int zeroCount,
             int currCount) {
        if (grid[i][j] == 2) {
            return (currCount == zeroCount + 1) ? 1 : 0;
        }

        int ways = 0;

        for (auto [x, y] : dir) {
            int nr = i + x;
            int nc = j + y;

            if (nr < 0 || nr >= grid.size() || nc < 0 || nc >= grid[0].size())
                continue;
            if (grid[nr][nc] == -1 || grid[nr][nc] == 5)
                continue;

            int temp = grid[nr][nc];
            if (grid[nr][nc] != 2)
                grid[nr][nc] = 5;

            ways += path(grid, nr, nc, zeroCount, currCount + 1);

            grid[nr][nc] = temp;
        }
        return ways;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int zeroCell = 0;
        int a, b;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0)
                    zeroCell++;
                else if (grid[i][j] == 1)
                    a = i, b = j;
            }
        }

        grid[a][b] = 5;
        return path(grid, a, b, zeroCell, 0);
    }
};

```