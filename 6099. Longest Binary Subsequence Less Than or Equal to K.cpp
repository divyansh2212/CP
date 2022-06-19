// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{

public:
    void generate(string &s, int idx, int &k, int &ans, int place, int val)
    {
        ans = max(ans, place);

        if (idx < 0)
            return;

        if (s[idx] == '0')
            generate(s, idx - 1, k, ans, place + 1, val);
        else
        {
            ll to_add = pow(2LL, place);
            if (to_add + val <= k)
                generate(s, idx - 1, k, ans, place + 1, to_add + val);
        }

        generate(s, idx - 1, k, ans, place, val);
    }

    int longestSubsequence(string s, int k)
    {
        int ans = 0;

        string curr = "";

        int n = s.length();

        generate(s, n - 1, k, ans, 0, 0);

        return ans;
    }
};