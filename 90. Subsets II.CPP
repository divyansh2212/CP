// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void f(vector<int> &nums, vector<vector<int>> &ans, vector<int> &curr, int idx)
    {
        ans.push_back(curr);

        for (int i = idx; i < nums.size(); i++)
        {
            if (i != idx && nums[i] == nums[i - 1])
                continue;
            curr.push_back(nums[i]);
            f(nums, ans, curr, i + 1);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> curr;

        f(nums, ans, curr, 0);

        return ans;
    }
};