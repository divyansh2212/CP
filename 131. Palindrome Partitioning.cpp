// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    bool isPalindrome(string &s, int i, int j)
    {
        bool flag = true;
        while (i <= j)
        {
            if (s[i] != s[j])
                flag = false;
            i++, j--;
        }
        return flag;
    }
    void f(string &s, int idx, vector<vector<string>> &ans, vector<string> &curr)
    {
        if (idx == s.length())
        {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < s.length(); i++)
        {
            if (isPalindrome(s, idx, i))
            {
                curr.push_back(s.substr(idx, i - idx + 1));
                f(s, i + 1, ans, curr);
                curr.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> curr;
        f(s, 0, ans, curr);
        return ans;
    }
};