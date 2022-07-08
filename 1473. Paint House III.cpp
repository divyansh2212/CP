// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(vector<int> &houses, vector<vector<int>> &cost, int &target, int idx, int prevColorIdx, int curr, vector<vector<vector<int>>> &dp)
    {
        if (curr > target)
            return 1e7;
        if (idx == houses.size())
        {
            if (curr == target)
                return 0;
            return 1e7;
        }

        if (dp[idx][prevColorIdx][curr] != -1)
            return dp[idx][prevColorIdx][curr];

        int minCost = 1e7;
        if (houses[idx])
        {
            if (houses[idx] != prevColorIdx)
                minCost = f(houses, cost, target, idx + 1, houses[idx], curr + 1, dp);
            else
                minCost = f(houses, cost, target, idx + 1, houses[idx], curr, dp);
        }
        else
        {
            for (int i = 0; i < cost[idx].size(); i++)
            {
                if (i + 1 == prevColorIdx)
                    minCost = min(minCost,
                                  cost[idx][i] + f(houses, cost, target, idx + 1, i + 1, curr, dp));
                else
                    minCost = min(minCost, cost[idx][i] + f(houses, cost, target, idx + 1, i + 1, curr + 1, dp));
            }
        }
        return dp[idx][prevColorIdx][curr] = minCost;
    }

    int minCost(vector<int> &houses, vector<vector<int>> &cost, int m, int n, int target)
    {
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n + 1, vector<int>(m + 1, 0)));
        int ans = f(houses, cost, target, 0, 0, 0, dp);
        if (ans >= 1e7)
            return -1;
        return ans;
    }
};