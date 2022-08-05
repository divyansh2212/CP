// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> maxInRow(n, 0), maxInColumn(n, 0);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                maxInRow[i] = max(maxInRow[i], grid[i][j]), maxInColumn[j] = max(maxInColumn[j], grid[i][j]);

        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                ans += min(maxInColumn[j], maxInRow[i]) - grid[i][j];

        return ans;
    }
};