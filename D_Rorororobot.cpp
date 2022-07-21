// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define INF int_MAX
const int M = 1e9 + 7;

bool f(vector<int> &mp, int &xf, int &yf, int &k, int &n, int &m, ll i, ll j)
{
    if (i == xf && j == yf)
        return true;
    if (i < 1 || j < 1 || i > n || j > m || i <= mp[j])
        return false;

    bool ans = false;

    if (f(mp, xf, yf, k, n, m, i + k, j))
        return true;
    if (f(mp, xf, yf, k, n, m, i - k, j))
        return true;
    if (f(mp, xf, yf, k, n, m, i, j - k))
        return true;
    return f(mp, xf, yf, k, n, m, i, j + k);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> mp(m + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        mp[i] = x;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int xs, ys, xf, yf, k;
        cin >> xs >> ys >> xf >> yf >> k;

        bool ans = f(mp, xf, yf, k, n, m, xs, ys);
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}