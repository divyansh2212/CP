// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    void removeLeadingZeros(string &str)
    {
        const regex pattern("^0+(?!$)");
        str = regex_replace(str, pattern, "");
    }

public:
    vector<int> smallestTrimmedNumbers(vector<string> &nums, vector<vector<int>> &queries)
    {
        vector<int> ans(queries.size());
        int sz = nums[0].length();
        for (int i = 0; i < queries.size(); i++)
        {
            int k = queries[i][0], to_rem = queries[i][1];

            vector<pair<string, int>> c_nums(nums.size());
            for (int j = 0; j < nums.size(); j++)
            {
                c_nums[j] = {nums[j].substr(sz - to_rem), j};
                // removeLeadingZeros(c_nums[j].first);
            }

            sort(c_nums.begin(), c_nums.end());

            ans[i] = c_nums[k - 1].second;
        }
        return ans;
    }
};