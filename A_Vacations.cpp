// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int minDays(vector<int> &a, int day, int lastActivity, vector<vector<int>> &dp)
{
    if (day == a.size())
        return 0;
    if (dp[day][lastActivity] != -1)
        return dp[day][lastActivity];
    if (a[day] == 0)
        return dp[day][lastActivity] = 1 + minDays(a, day + 1, 0, dp);
    else if (a[day] == 1)
    {
        if (lastActivity == 2)
            return dp[day][lastActivity] = 1 + minDays(a, day + 1, 0, dp);
        else
            return dp[day][lastActivity] = min(1 + minDays(a, day + 1, 0, dp), minDays(a, day + 1, 2, dp));
    }
    else if (a[day] == 2)
    {
        if (lastActivity == 1)
            return dp[day][lastActivity] = 1 + minDays(a, day + 1, 0, dp);
        else
            return dp[day][lastActivity] = min(minDays(a, day + 1, 1, dp), 1 + minDays(a, day + 1, 0, dp));
    }
    else
    {
        if (lastActivity == 1)
            return dp[day][lastActivity] = min(1 + minDays(a, day + 1, 0, dp), minDays(a, day + 1, 2, dp));
        else if (lastActivity == 2)
            return dp[day][lastActivity] = min(1 + minDays(a, day + 1, 0, dp), minDays(a, day + 1, 1, dp));
        else
            return dp[day][lastActivity] = min({minDays(a, day + 1, 1, dp), minDays(a, day + 1, 2, dp), 1 + minDays(a, day + 1, 0, dp)});
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // for second parameter
    // 0 --- rest, 1 --- sport, 2 --- contest
    vector<vector<int>> dp(n, vector<int>(3, -1));
    cout << minDays(a, 0, 0, dp);
}
int main()
{
    solve();
    return 0;
}