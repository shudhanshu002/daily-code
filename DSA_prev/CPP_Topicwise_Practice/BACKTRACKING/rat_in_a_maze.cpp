#include <iostream>
using namespace std;

void mazeHelp(int maze[][20], int **solution, int n, int x, int y)
{
    // Boundary & validity check
    if (x < 0 || y < 0 || x >= n || y >= n ||
        maze[x][y] == 0 || solution[x][y] == 1)
        return;

    // Destination reached
    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solution[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        solution[x][y] = 0; // backtrack
        return;
    }

    // Mark current cell
    solution[x][y] = 1;

    // Explore all directions
    mazeHelp(maze, solution, n, x + 1, y); // down
    mazeHelp(maze, solution, n, x - 1, y); // up
    mazeHelp(maze, solution, n, x, y + 1); // right
    mazeHelp(maze, solution, n, x, y - 1); // left

    // Backtrack
    solution[x][y] = 0;
}

void ratInMaze(int maze[][20], int n)
{
    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solution[i] = new int[n];
        for (int j = 0; j < n; j++)
            solution[i][j] = 0;
    }

    mazeHelp(maze, solution, n, 0, 0);

    // Free memory
    for (int i = 0; i < n; i++)
        delete[] solution[i];
    delete[] solution;
}

int main()
{
    int maze[20][20] = {
        {1, 0, 1, 1},
        {1, 1, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 1, 1}};

    int n = 4;
    ratInMaze(maze, n);
    return 0;
}
