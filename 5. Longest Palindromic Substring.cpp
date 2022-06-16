// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{

public:
    string longestPalindrome(string s)
    {
        if (s.length() < 2)
            return s;
        int n = s.length();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++)
            dp[i][i] = 1;

        int start = 0, maxlen = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = 1;
                start = i;
                maxlen = 2;
            }
        }

        for (int k = 3; k <= n; k++)
        {
            for (int i = 0; i < n - k + 1; i++)
            {
                int j = i + k - 1;

                if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
                {
                    dp[i][j] = 1;
                    if (k > maxlen)
                    {
                        maxlen = k;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxlen);
    }
};