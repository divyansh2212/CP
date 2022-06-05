// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void solve(int col, int &n, int &ans, vector<bool> &leftRow, vector<bool> &downLeft, vector<bool> &upLeft)
    {
        if (col == n)
        {
            ans++;
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (!leftRow[row] && !upLeft[n - 1 + col - row] && !downLeft[row + col])
            {
                leftRow[row] = true,
                upLeft[n - 1 + col - row] = true, downLeft[row + col] = true;

                solve(col + 1, n, ans, leftRow, downLeft, upLeft);

                leftRow[row] = false,
                upLeft[n - 1 + col - row] = false, downLeft[row + col] = false;
            }
        }
    }

    int totalNQueens(int n)
    {
        int ans = 0;

        vector<bool> leftRow(n, false), upLeft(2 * n - 1, false), downLeft(2 * n - 1, false);

        solve(0, n, ans, leftRow, downLeft, upLeft);

        return ans;
    }
};