// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxResult(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> dp(n, -1e9);

        dp[0] = nums[0];
        multiset<int> st;
        st.insert(dp[0]);
        for (int idx = 1; idx < n; idx++)
        {
            if (st.size() > k)
            {
                auto it = st.find(dp[idx - k - 1]);
                st.erase(it);
            }
            dp[idx] = *st.rbegin() + nums[idx];
            st.insert(dp[idx]);
        }

        return dp[n - 1];
    }
};