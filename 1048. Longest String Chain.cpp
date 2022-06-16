// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    bool static compare(const string &s1, const string &s2)
    {
        return s1.length() < s2.length();
    }

    int findingLCS(string &s1, string &s2)
    {
        int n = s1.length(), m = s2.length();
        vector<int> prev(m + 1, 0);

        for (int idx1 = 1; idx1 <= n; idx1++)
        {
            vector<int> curr(m + 1, 0);
            for (int idx2 = 1; idx2 < m + 1; idx2++)
            {
                if (s1[idx1 - 1] == s2[idx2 - 1])
                    curr[idx2] = 1 + prev[idx2 - 1];
                else
                    curr[idx2] = max(prev[idx2], curr[idx2 - 1]);
            }
            prev = curr;
        }

        return prev[m];
    }

public:
    int longestStrChain(vector<string> &words)
    {
        int n = words.size();
        sort(words.begin(), words.end(), compare);
        vector<int> dp(n, 1);

        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                {if (words[i].length() - words[j].length() == 1)
                    if (findingLCS(words[i], words[j]) == words[j].length())
                        dp[i] = max(dp[i], dp[j] + 1);}

        int ans = 1;
        for (int i = 0; i < n; i++)
            ans = max(dp[i], ans);

        return ans;
    }
};