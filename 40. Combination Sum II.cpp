// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void f(vector<int> &arr, vector<vector<int>> &ans, vector<int> curr, int idx, int k)
    {
        if (k == 0)
        {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < arr.size(); i++)
        {
            if (i != idx && arr[i] == arr[i - 1])
                continue;
            if (arr[i] <= k)
            {
                curr.push_back(arr[i]);
                f(arr, ans, curr, i + 1, k - arr[i]);
                curr.pop_back();
            }
            else
                break;
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> curr;

        sort(candidates.begin(), candidates.end());
        f(candidates, ans, curr, 0, target);

        return ans;
    }
};