#include <iostream>
#include <vector>

using namespace std;


class Solution
{
public:
    bool isValid(char num, int row, int col, vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            // row check
            if (board[row][i] == num)
                return false;

            // column check
            if (board[i][col] == num)
                return false;

            // big cell check
            // row/3 -- row starting of big cell
            // col/3 -- col starting of big cell

            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num)
                return false;
        }
        return true;
    }

    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == '.')
                {
                    for (char num = '1'; num <= '9'; num++)
                    {
                        if (isValid(num, i, j, board))
                        {
                            board[i][j] = num;
                            if (solve(board))
                                return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};