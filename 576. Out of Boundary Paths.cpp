// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

class Solution
{
    ll f(int i, int j, int &m, int &n, int moves, vector<vector<vector<int>>> &dp)
    {
        if (i < 0 || j < 0 || i == m || j == n)
            return 1;
        if (moves == 0)
            return 0;
        if (dp[i][j][moves] != -1)
            return dp[i][j][moves];

        ll ans = f(i + 1, j, m, n, moves - 1, dp) + f(i - 1, j, m, n, moves - 1, dp) + f(i, j - 1, m, n, moves - 1, dp) + f(i, j + 1, m, n, moves - 1, dp);
        return dp[i][j][moves] = (ans % M);
    }

public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return (int)f(startRow, startColumn, m, n, maxMove, dp);
    }
};