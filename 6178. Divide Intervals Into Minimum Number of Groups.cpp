// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{

public:
    int minGroups(vector<vector<int>> &intervals)
    {
        int n = intervals.size(), mx = -1;

        vector<int> prefix(1e6 + 2, 0);
        for (int i = 0; i < n; i++)
            prefix[intervals[i][0]]++, prefix[intervals[i][1] + 1]--;

        int ans = 0;
        for (int i = 1; i <= 1e6 + 1; i++)
        {
            prefix[i] += prefix[i - 1];
            ans = max(ans, prefix[i]);
        }

        return ans;
    }
};