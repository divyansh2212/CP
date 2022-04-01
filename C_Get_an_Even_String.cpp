// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int deletions(string &s, int idx, vector<int> &dp)
{
    if (idx < 0)
        return 0;
    if (idx == 0)
        return 1;
    if (dp[idx] != -1)
        return dp[idx];

    if (s[idx] == s[idx - 1])
        return dp[idx] = deletions(s, idx - 2, dp);
    else
    {
        int j;
        for (j = idx - 1; j >= 0; j--)
            if (s[idx] == s[j])
                break;
        if (j == -1)
            return dp[idx] = 1 + deletions(s, idx - 1, dp);
        else
        {
            int case1 = 1 + deletions(s, idx - 1, dp);
            int case2 = idx - j - 1 + deletions(s, j - 1, dp);
            return dp[idx] = min(case1, case2);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();
        vector<int> dp(n, -1);
        cout << deletions(s, n - 1, dp) << endl;
    }
    return 0;
}