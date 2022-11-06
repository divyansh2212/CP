// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        ll ans = 0, curr = 0;
        set<int> st;
        unordered_map<int, int> mp;

        int i = 0, j = 0;

        while (j < nums.size())
        {
            st.insert(nums[j]);
            curr += nums[j];
            mp[nums[j]]++;
            if (j - i + 1 == k)
            {
                if (st.size() == k)
                    ans = max(ans, curr);
                curr -= nums[i];
                mp[nums[i]]--;
                // auto it = st.find(nums[i]);
                if (mp[nums[i]] == 0)
                    st.erase(nums[i]);
                i++;
            }
            j++;
        }

        return ans;
    }
};