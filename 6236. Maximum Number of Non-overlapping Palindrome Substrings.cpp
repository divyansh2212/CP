// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{

    int findMaxm(int idx, vector<vector<int>> &palindromes, string &s, int &k, vector<int> &memo)
    {
        if (idx == s.length())
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        int maxm = 0;
        for (int j = idx + k - 1; j < s.length(); j++)
            if (palindromes[idx][j] == 1)
                maxm = max(maxm, 1 + findMaxm(j + 1, palindromes, s, k, memo));
        maxm = max(maxm, findMaxm(idx + 1, palindromes, s, k, memo));

        return memo[idx] = maxm;
    }

public:
    int maxPalindromes(string s, int k)
    {
        int n = s.length(), ans = 0;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        // vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
            dp[i][i] = 1;

        for (int i = 1; i < n; i++)
            if (s[i] == s[i - 1])
                dp[i - 1][i] = 1;

        for (int i = 0; i <= n - 3; i++)
            if (s[i] == s[i + 2])
                dp[i][i + 2] = 1;

        for (int len = 4; len <= n; len++)
            for (int i = 0; i <= n - len; i++)
                if (s[i] == s[i + len - 1] && dp[i + 1][i + len - 2] == 1)
                    dp[i][i + len - 1] = 1;

        // for (int len = k; len <= n; len++)
        // {
        //     for (int i = 0; i <= n - len;)
        //     {
        //         if (dp[i][i + len - 1] == 1)
        //         {
        //             bool flag = true;
        //             for (int j = i; j <= i + len - 1 && flag; j++)
        //                 if (visited[j])
        //                     flag = false;

        //             for (int j = i; j <= i + len - 1 && flag; j++)
        //                 visited[j] = true;
        //             if (flag)
        //                 ans++, i = i + len;
        //             else
        //                 i++;
        //         }
        //         else
        //             i++;
        //     }
        // }

        vector<int> memo(n, -1);
        return findMaxm(0, dp, s, k, memo);

        // return ans;
    }
};