#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxmProfit(vector<int> &nums, vector<bool> &visited, int i)
    {
        if (i < 0)
            return 0;

        int profit = 0;
        for (int idx = 0; idx < nums.size(); idx++)
        {
            if (visited[idx] == false && i != idx)
            {
                visited[idx] = true, visited[nums[idx] + 1] = true, visited[nums[idx] - 1] = true;
                profit = max(profit, maxmProfit(nums, visited, idx - 1) + nums[idx]);
                visited[idx] = false, visited[nums[idx] + 1] = false, visited[nums[idx] - 1] = false;
            }
        }
        return profit;
    }

    int deleteAndEarn(vector<int> &nums)
    {
        const int N = 1e5 + 10;
        vector<bool> visited(N, false);
        return maxmProfit(nums, visited, nums.size() - 1);
    }
};