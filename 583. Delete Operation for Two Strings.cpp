// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    // int f(string &word1, string &word2, int idx1, int idx2, vector<vector<int>> &dp)
    // {
    //     if (idx1 == 0 || idx2 == 0)
    //         return 0;

    //     if (dp[idx1][idx2] != -1)
    //         return dp[idx1][idx2];

    //     if (word1[idx1 - 1] == word2[idx2 - 1])
    //         return dp[idx1][idx2] = 1 + f(word1, word2, idx1 - 1, idx2 - 1, dp);

    //     else
    //         return dp[idx1][idx2] = max(f(word1, word2, idx1 - 1, idx2, dp), f(word1, word2, idx1, idx2 - 1, dp));
    // }

    int minDistance(string word1, string word2)
    {
        int n = word1.length(), m = word2.length();
        // vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        vector<int> prev(m + 1, 0);

        for (int i = 1; i < n + 1; i++)
        {
            vector<int> curr(m + 1, 0);
            for (int j = 1; j < m + 1; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                    curr[j] = 1 + prev[j - 1];
                else
                    curr[j] = max(curr[j - 1], prev[j]);
            }
            prev = curr;
        }

        // int lcs = prev[m];

        return n + m - 2 * prev[m];
    }
};