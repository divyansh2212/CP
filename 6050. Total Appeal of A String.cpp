// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void f(string &s, int idx, vector<string> &subStrings, string curr)
    {
        if (idx == s.length())
            return;

        // select
        curr.push_back(s[idx]);
        subStrings.push_back(curr);
        f(s, idx + 1, subStrings, curr);
        curr.pop_back();

        // not select
        if (curr.size())
            subStrings.push_back(curr);
        curr.clear();
        f(s, idx + 1, subStrings, curr);
    }

    long long appealSum(string s)
    {
        vector<string> subStrings;
        string curr = "";
        f(s, 0, subStrings, curr);

        ll ans = 0;

        for (ll i = 0; i < subStrings.size(); i++)
        {
            vector<int> hsh(26, 0);
            for (ll j = 0; j < subStrings[i].length(); j++)
                hsh[subStrings[i][j] - 'a'] = 1;

            for (ll i = 0; i < hsh.size(); i++)
                ans += hsh[i];
        }

        return ans;
    }
};