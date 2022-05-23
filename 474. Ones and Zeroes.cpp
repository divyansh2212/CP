// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<string> &strs, int idx, int zeroes, int ones, int m, int n, vector<vector<vector<int>>> &dp)
    {
        if (idx < 0)
            return 0;

        if (dp[idx][zeroes][ones] != -1)
            return dp[idx][zeroes][ones];

        // not take
        int way1 = f(strs, idx - 1, zeroes, ones, m, n, dp);

        // take
        int curr1 = 0, curr0 = 0, way2 = 0;
        for (int i = 0; i < strs[idx].length(); i++)
        {
            if (strs[idx][i] == '1')
                curr1++;
            else
                curr0++;
        }

        if ((curr1 + ones <= n) && (curr0 + zeroes <= m))
            way2 = 1 + f(strs, idx - 1, zeroes + curr0, ones + curr1, m, n, dp);

        return dp[idx][zeroes][ones] = max(way1, way2);
    }

    int findMaxForm(vector<string> &strs, int m, int n)
    {
        int len = strs.size();
        vector<vector<vector<int>>> dp(len, vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));
        return f(strs, len - 1, 0, 0, m, n, dp);
    }
};