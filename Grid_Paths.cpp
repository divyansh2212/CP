// <-------------------------Jai Shree Babosa------------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int f(int i, int j, vector<string> &grid, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0 || grid[i][j] == '*')
        return 0;
    if (i == 0 && j == 0)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    int way1 = f(i - 1, j, grid, dp);
    int way2 = f(i, j - 1, grid, dp);

    return dp[i][j] = (way1 + 0LL + way2) % mod;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    vector<int> prev(n, 0);
    prev[0] = 1;

    for (int i = 0; i < n; i++)
    {
        vector<int> curr(n, 0);
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '*')
                curr[j] = 0;
            else
            {
                curr[j] = prev[j];
                if (j > 0)
                    curr[j] = (curr[j] + 0LL + curr[j - 1]) % mod;
            }
        }
        prev = curr;
    }
    cout << prev[n - 1];
}
int main()
{
    solve();
    return 0;
}