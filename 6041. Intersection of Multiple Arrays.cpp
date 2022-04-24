// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        vector<int> hsh(1001, 0);
        vector<int> ans;

        int n = nums.size(); int m = nums[0].size();

        for (int i = 0; i < n; i++)
            for (int j = 0; j < nums[i].size(); j++)
                hsh[nums[i][j]]++;

        for (int i = 0; i < hsh.size(); i++)
        {
            if (hsh[i] == n)
                ans.push_back(i);
        }
        return ans;
    }
};