#include <iostream>
#include <queue>
#include <unordered_set>
#include <cmath>
using namespace std;

// Helper to hash a pair of coordinates for the unordered_set
struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second);
    }
};

int minKnightMoves(int x, int y) {
    // Reduce the problem to the first quadrant
    x = abs(x);
    y = abs(y);

    // All possible knight moves
    vector<pair<int, int>> directions = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    // BFS queue and visited set
    queue<pair<int, int>> q;
    unordered_set<pair<int, int>, PairHash> visited;

    // Start from (0, 0)
    q.push({0, 0});
    visited.insert({0, 0});

    int steps = 0;

    // BFS loop
    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            auto [currX, currY] = q.front();
            q.pop();

            // Check if we've reached the target
            if (currX == x && currY == y) return steps;

            // Explore all possible moves
            for (const auto& [dx, dy] : directions) {
                int nextX = currX + dx;
                int nextY = currY + dy;

                // Prune moves too far from the target for optimization
                if (!visited.count({nextX, nextY}) && nextX >= -2 && nextY >= -2) {
                    q.push({nextX, nextY});
                    visited.insert({nextX, nextY});
                }
            }
        }
        steps++;
    }

    return -1; // This should never be reached
}

int main() {
    int x, y;
    cout << "Enter target coordinates (x, y): ";
    cin >> x >> y;

    cout << "Minimum knight moves: " << minKnightMoves(x, y) << endl;
    return 0;
}

