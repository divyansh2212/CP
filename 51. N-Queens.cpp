// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    // bool issafe(int row, int col, int n, vector<string> &board)
    // {
    //     int duplRow = row, duplCol = col;

    //     while (row >= 0 && col >= 0)
    //     {
    //         if (board[row][col] == 'Q')
    //             return false;
    //         row--, col--;
    //     }

    //     row = duplRow, col = duplCol;
    //     while (col >= 0)
    //     {
    //         if (board[row][col] == 'Q')
    //             return false;
    //         col--;
    //     }

    //     row = duplRow, col = duplCol;
    //     while (col >= 0 && row < n)
    //     {
    //         if (board[row][col] == 'Q')
    //             return false;
    //         col--, row++;
    //     }

    //     return true;
    // }

    void solve(int col, vector<vector<string>> &ans, int n, vector<string> &board, vector<bool> &leftRow, vector<bool> &upDiagonal, vector<bool> &lowDiagonal)
    {
        if (col == n)
            ans.push_back(board);

        for (int row = 0; row < n; row++)
        {
            // if (issafe(row, col, n, board))
            if (leftRow[row] == false && upDiagonal[n - 1 + col - row] == false && lowDiagonal[row + col] == false)
            {
                board[row][col] = 'Q';
                leftRow[row] = true;
                upDiagonal[n - 1 + col - row] = true;
                lowDiagonal[row + col] = true;

                solve(col + 1, ans, n, board, leftRow, upDiagonal, lowDiagonal);

                board[row][col] = '.';
                leftRow[row] = false;
                upDiagonal[n - 1 + col - row] = false;
                lowDiagonal[row + col] = false;
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;

        string s(n, '.');
        vector<string> board(n, s);

        vector<bool> leftRow(n, false), upperDiagnol(2 * n - 1, false), lowDiagnol(2 * n - 1, false);

        solve(0, ans, n, board, leftRow, upperDiagnol, lowDiagnol);

        return ans;
    }
};