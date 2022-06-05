// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
    {
        int n = nums.size();

        set<pair<int, int>> pairs;

        for (int i = 0; i < nums.size(); i++)
            pairs.insert({nums[i], i});

        for (int i = 0; i < operations.size(); i++)
        {
            int ele = operations[i][0], ele2 = operations[i][1];

            auto pos = s.find({})
        }

        for (int i = 0; i < pairs.size(); i++)
        {
            int idx = pairs[i].second, e = pairs[i].first;
            nums[idx] = e;
        }

        return nums;
    }
};