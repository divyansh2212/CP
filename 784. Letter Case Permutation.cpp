// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(vector<string> &ans, string &s, int idx)
    {
        if (idx == s.length())
        {
            ans.push_back(s);
            return;
        }

        if (s[idx] >= '0' && s[idx] <= '9')
            f(ans, s, idx + 1);
        else if (s[idx] >= 'a' && s[idx] <= 'z')
        {
            s[idx] = s[idx] - 'a' + 'A';
            f(ans, s, idx + 1);
            s[idx] = s[idx] - 'A' + 'a';
            f(ans, s, idx + 1);
        }
        else
        {
            s[idx] = s[idx] - 'A' + 'a';
            f(ans, s, idx + 1);
            s[idx] = s[idx] - 'a' + 'A';
            f(ans, s, idx + 1);
        }
    }

public:
    vector<string> letterCasePermutation(string s)
    {
        vector<string> ans;
        f(ans, s, 0);
        return ans;
    }
};