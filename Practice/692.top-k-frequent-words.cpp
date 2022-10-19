/*
 * @lc app=leetcode id=692 lang=cpp
 *
 * [692] Top K Frequent Words
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
    bool static cmp(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }

public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {

        int n = words.size();
        sort(words.begin(), words.end());
        vector<pair<string, int>> pairs;
        for (int i = 0; i < n; i++)
        {
            if (pairs.size() && pairs.back().first == words[i])
                pairs.back().second++;
            else
                pairs.push_back({words[i], 1});
        }

        sort(pairs.begin(), pairs.end(), cmp);

        vector<string> ans;
        while (k-- && pairs.size())
        {
            string s = pairs.back().first;
            pairs.pop_back();
            ans.push_back(s);
        }
        return ans;
    }
};
// @lc code=end
