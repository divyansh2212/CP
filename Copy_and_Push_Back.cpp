// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ultiflag = false;

bool f(string &s, string curr, int idx, bool last, vector<vector<int>> &dp)
{
    if (ultiflag)
        return true;
    if (curr == s)
    {
        ultiflag = true;
        return true;
    }
    if (curr.length() >= s.length())
        return false;

    if (dp[idx][last] != -1)
        return dp[idx][last];
    
    // double
    bool ans = f(s, curr + curr, idx + curr.length(), false, dp);

    // 1 operation
    if (last == false)
    {
        curr.push_back(s[idx]);
        ans |= f(s, curr, idx + 1, true, dp);
        curr.pop_back();
    }

    return dp[idx][last] = ans;
}

int main()
{
    bool flag = true;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n > 1 && s[0] != s[1])
        {
            cout << "NO\n";
            continue;
        }
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        string curr = s.substr(0, 2);
        vector<vector<int>> dp(n, vector<int>(2, -1));
        ultiflag = false;

        bool flag = f(s, curr, 2, false, dp);

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}