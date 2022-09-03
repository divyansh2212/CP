// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void generate(int idx, int &k, vector<int> &ans, string &s, int &n)
    {
        if (idx == 0)
        {
            int num = stoi(s);
            ans.push_back(num);
            return;
        }
        for (char i = '0'; i <= '9'; i++)
        {
            if (idx == n && i == '0')
                continue;
            if (idx == n || abs(s.back() - i) == k)
            {
                s.push_back(i);
                generate(idx - 1, k, ans, s, n);
                s.pop_back();
            }
        }
    }

public:
    vector<int> numsSameConsecDiff(int n, int k)
    {
        vector<int> ans;
        string s = "";

        generate(n, k, ans, s, n);
        return ans;
    }
};