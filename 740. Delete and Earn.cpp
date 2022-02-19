#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int maxmProfit(vector<int> &nums, vector<bool> &visited)
    {
        int profit = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            visited[nums[i]] = true,
            profit = max(profit, maxmProfit(nums, visited) + nums[i]);
        }
        
    }

    int deleteAndEarn(vector<int> &nums)
    {

    }
};