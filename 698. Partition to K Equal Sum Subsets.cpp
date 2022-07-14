// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool f(vector<int> &nums, vector<bool> &visited, int &target, int idx, int currSum, int k)
    {
        if (k == 1)
            return true;
        if (currSum == target)
            return f(nums, visited, target, 0, 0, k - 1);
        if (idx == nums.size())
            return false;

        bool flag = false;
        for (int i = idx; i < nums.size(); i++)
        {
            if (visited[i] || currSum + nums[i] > target)
                continue;
            visited[i] = true;
            flag |= f(nums, visited, target, i + 1, currSum + nums[i], k);
            visited[i] = false;
            if (flag)
                return flag;
        }
        return false;
    }

    bool canPartitionKSubsets(vector<int> &nums, int k)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (nums.size() < k || (sum % k))
            return false;

        int target = sum / k;

        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        vector<bool> visited(nums.size(), false);
        return f(nums, visited, target, 0, 0, k);
    }
};