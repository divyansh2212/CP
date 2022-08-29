// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        int n = queries.size();
        vector<int> ans(n, 0);
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            int maxLen = 0, currSum = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (currSum + nums[j] <= queries[i])
                    currSum += nums[j], maxLen++;
                else
                    break;
            }
            ans[i] = maxLen;
        }

        return ans;
    }
};