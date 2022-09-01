// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<vector<ll>> matrix(n + 1, vector<ll>(n + 1));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> matrix[i][j];

    vector<ll> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << (int)sqrt((matrix[i][i + 1] * matrix[i][i + 2]) / matrix[i + 1][i + 2]) << " ";
        else if (i == n)
            cout << (int)sqrt((matrix[i][i - 1] * matrix[i][i - 2]) / matrix[i - 1][i - 2]) << " ";
        else
            cout << (int)sqrt((matrix[i][i - 1] * matrix[i][i + 1]) / matrix[i - 1][i + 1]) << " ";
    }
}
int main()
{
    solve();
    return 0;
}