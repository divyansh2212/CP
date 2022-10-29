/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;
// @lc code=start
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // unordered_map<string, vector<string>> groups;
        vector<pair<string, string>> groups;
        vector<string> curr;
        vector<vector<string>> ans;

        for (int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            groups.push_back({s, strs[i]});
        }

        sort(groups.begin(), groups.end());

        for (int i = 0; i < groups.size(); i++)
        {
            if (i == 0)
                curr.push_back(groups[i].second);
            else if (groups[i - 1].first == groups[i].first)
                curr.push_back(groups[i].second);
            else
            {
                ans.push_back(curr);
                curr.clear();
                curr.push_back(groups[i].second);
            }
        }
        if (curr.size())
            ans.push_back(curr);

        return ans;
    }
};
// @lc code=end
