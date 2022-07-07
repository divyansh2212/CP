// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    bool f(string &s1, string &s2, string &s3, int idx1, int idx2, int idx3, vector<vector<int>> &dp)
    {
        if (idx3 == 0)
            return true;

        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];

        bool way1 = false, way2 = false;

        if (idx1 > 0 && s1[idx1 - 1] == s3[idx3 - 1])
            way1 = f(s1, s2, s3, idx1 - 1, idx2, idx3 - 1, dp);

        if (idx2 > 0 && s2[idx2 - 1] == s3[idx3 - 1])
            way2 = f(s1, s2, s3, idx1, idx2 - 1, idx3 - 1, dp);

        return dp[idx1][idx2] = (way1 | way2);
    }

public:
    bool isInterleave(string s1, string s2, string s3)
    {
        if (s1.length() + s2.length() != s3.length())
            return false;
        vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1, 0));
        // return f(s1, s2, s3, s1.length(), s2.length(), s3.length(), dp);

        int k = s3.length();
        for (int i = 1; i <= s1.length(); i++)
        {
            for (int j = 1; j <= s2.length(); j++)
            {
                /* code */
            }
            
        }
        
    }
};