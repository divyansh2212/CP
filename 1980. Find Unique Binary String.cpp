// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    bool flag = false;
    void f(map<string, bool> &mp, string &ans, int idx, string &curr)
    {
        if (flag)
            return;
        if (idx == ans.length())
        {
            if (mp.find(curr) == mp.end())
                flag = true, ans = curr;
            return;
        }

        f(mp, ans, idx + 1, curr);
        curr[idx] = '1';
        f(mp, ans, idx + 1, curr);
        curr[idx] = '0';
    }

public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        string ans(n, '0');
        string curr = ans;
        map<string, bool> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = true;

        f(mp, ans, 0, curr);

        return ans;
    }
};