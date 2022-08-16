// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string smallestNumber(string pattern)
    {
        int n = pattern.length();
        string ans(n + 1, '0');

        int curr = 1, streak = 0, idx = -1;

        for (int i = 0; i < n; i++)
            if (pattern[i] == 'D')
                curr = i + 2;

        vector<bool> hsh(10, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            if (pattern[i] == 'D')
                streak++, idx = i;
            else if (idx != -1)
            {
                for (int j = idx; j <= idx + streak; j++)
                    ans[j] = curr + '0', hsh[curr] = true, curr--;
                streak = 0, idx = -1;
            }
        }
        if (idx != -1)
        {
            for (int j = idx; j <= idx + streak; j++)
                ans[j] = curr + '0', hsh[curr] = true, curr--;
            streak = 0, idx = -1;
        }

        for (int i = 0; i < n + 1; i++)
        {
            if (ans[i] == '0')
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (hsh[k] == false)
                    {
                        hsh[k] = true, ans[i] = '0' + k;
                        break;
                    }
                }
            }
        }

        return ans;
    }
};