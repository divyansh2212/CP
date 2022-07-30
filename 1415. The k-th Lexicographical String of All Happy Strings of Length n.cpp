// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(int idx, string &ans, int &curr, string &s)
    {
        if (ans != "")
            return;
        if (idx == 0)
        {
            curr--;
            if (0 == curr)
                ans = s;
            return;
        }

        for (char i = 'a'; i <= 'c'; i++)
        {
            if (s.size() && i == s.back())
                continue;
            s.push_back(i);
            f(idx - 1, ans, curr, s);
            s.pop_back();
        }
    }

public:
    string getHappyString(int n, int k)
    {
        string ans = "", s = "";
        f(n, ans, k, s);
        return ans;
    }
};