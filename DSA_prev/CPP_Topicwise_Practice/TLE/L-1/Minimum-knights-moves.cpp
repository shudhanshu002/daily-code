// Given a target position (x, y) on an infinite chessboard, return the minimum number of moves a knight needs to reach that position from (0, 0).

#include <bits/stdc++.h>
#include <utility>
using namespace std;

class Solution
{
public:
    int minKnightMoves(int x, int y)
    {
        x = abs(x);
        y = abs(y);

        vector<pair<int, int>> dir = {
            {1, 2}, {2, 1}, {-1, 2}, {-2, 1}, {1, -2}, {-2, 1}, {-1, -2}, {-2, -1}};

        queue<pair<int, int>> q;
        set<pair<int, int>> visited;

        q.push({0, 0});
        visited.insert({0, 0});

        int steps = 0;

        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                auto [cx, cy] = q.front();
                q.pop();

                if (cx == x && cy == y)
                {
                    return steps;
                }
                for (auto [dx, dy] : dir)
                {
                    int nx = cx + dx;
                    int ny = cy + dy;

                    if (nx >= -1 && ny >= -1 && visited.find({nx, ny}) == visited.end())
                    {
                        visited.insert({nx, ny});
                        q.push({nx, ny});
                    }
                }
            }
            steps++;
        }
    }
};
