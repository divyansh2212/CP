// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        vector<vector<int>> ans;
        int n = grid.size(), m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < m; j++)
            {
                if (j + 2 < m && i + 2 < n)
                {
                    int curr = INT_MIN;
                    for (int in = i; in <= i + 2; in++)
                        for (int jn = j; jn <= j + 2; jn++)
                            curr = max(curr, grid[in][jn]);
                    row.push_back(curr);
                }
            }
            if (row.size())
                ans.push_back(row);
        }
        return ans;
    }
};