// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int f(vector<int> &a, int idx, int last, vector<vector<int>> &dp)
{
    if (idx == a.size())
        return 0;
    if (dp[idx][last] != -1)
        return dp[idx][last];

    int notTake = 0, take = 0;

    notTake = f(a, idx + 1, last, dp);

    if (a[idx] > a[last])
        take = 1 + f(a, idx + 1, idx, dp);

    return dp[idx][last] = max(take, notTake);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = 0;

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    cout << f(a, 1, 0, dp);
}
int main()
{
    solve();
    return 0;
}