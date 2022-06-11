// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void f(vector<int> &candidates, vector<vector<int>> &ans, vector<int> &curr, int idx, int k)
    {
        if (k == 0)
        {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < candidates.size(); i++)
        {
            if (i != idx && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > k)
                break;

            curr.push_back(candidates[i]);
            f(candidates, ans, curr, i, k - candidates[i]);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> curr;

        sort(candidates.begin(), candidates.end());

        f(candidates, ans, curr, 0, target);

        return ans;
    }
};