// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isSafe(vector<vector<char>> &board, int i, int j, char c)
    {
        for (int idx = 0; idx < 9; idx++)
        {
            if (board[i][idx] == c)
                return false;
            if (board[idx][j] == c)
                return false;

            if (board[3 * (i / 3) + (idx / 3)][3 * (j / 3) + (idx % 3)] == c)
                return false;
        }
        return true;
    }

    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                {
                    for (int num = 0; num < 9; num++)
                    {
                        if (isSafe(board, i, j, num + '1'))
                        {
                            board[i][j] = num + '1';
                            if (solve(board))
                                return true;
                            else
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