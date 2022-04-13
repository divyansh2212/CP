// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<pair<int, int>> moves = {
        {0, 1}, {0, -1}, {1, 0}, {1, -1}, {1, 1}, {-1, 0}, {-1, 1}, {-1, -1}};
        
    void gameOfLife(vector<vector<int>> &board)
    {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> new_board(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int livecells = 0;

                for (int move = 0; move < moves.size(); move++)
                {
                    int x = i + moves[move].first, y = j + moves[move].second;
                    if (x < n && x >= 0 && y < m && y >= 0)
                        if (board[x][y] == 1)
                            livecells++;
                }

                if (board[i][j] == 0)
                {
                    if (livecells == 3)
                        new_board[i][j] = 1;
                    else
                        new_board[i][j] = 0;
                }
                else
                {
                    if (livecells < 2)
                        new_board[i][j] = 0;
                    else if (livecells == 2 || livecells == 3)
                        new_board[i][j] = 1;
                    else
                        new_board[i][j] = 0;
                }
            }
        }
        board = new_board;
    }
};