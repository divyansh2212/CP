// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int f(vector<int> &tvsets, int idx, int transLeft, vector<vector<int>> &dp)
{
    if (idx < 0 || transLeft == 0)
        return 0;

    if (dp[idx][transLeft] != -1)
        return dp[idx][transLeft];

    // pick
    int way1 = tvsets[idx] + f(tvsets, idx - 1, transLeft - 1, dp);

    // not pick
    int way2 = f(tvsets, idx - 1, transLeft, dp);

    return dp[idx][transLeft] = max(way2, way1);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> tvsets(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tvsets[i];
        tvsets[i] = -1 * tvsets[i];
    }

    vector<vector<int>> dp(n, vector<int>(m + 1, -1));
    cout << f(tvsets, n - 1, m, dp);

    return 0;
}