#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n;
int a[N], b[N], c[N];
int dp[100005][4];

long long func(int i, int type)
{
    if (i < 0)
        return 0;

    if (dp[i][type] != -1)
        return dp[i][type];

    long long ans = 0;
    if (type == 0)
    {
        ans = max(ans, func(i - 1, 1) + a[i]);
        ans = max(ans, func(i - 1, 2) + b[i]);
        ans = max(ans, func(i - 1, 3) + c[i]);
    }
    if (type == 1)
    {
        ans = max(ans, func(i - 1, 2) + b[i]);
        ans = max(ans, func(i - 1, 3) + c[i]);
    }
    if (type == 2)
    {
        ans = max(ans, func(i - 1, 1) + a[i]);
        ans = max(ans, func(i - 1, 3) + c[i]);
    }
    if (type == 3)
    {
        ans = max(ans, func(i - 1, 1) + a[i]);
        ans = max(ans, func(i - 1, 2) + b[i]);
    }

    return dp[i][type] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    cout << func(n - 1, 0);

    return 0;
}