// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
    {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;

        for (int i = 0; i < operations.size(); i++)
        {
            int x = operations[i][0], y = operations[i][1];
            int idx = m[x];
            m.erase(x);
            nums[idx] = y, m[y] = idx;
        }

        return nums;
    }
};