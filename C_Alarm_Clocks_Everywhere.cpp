// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> xs(n);
    // ll gcds = 0LL;
    for (int i = 0; i < n; i++)
        cin >> xs[i];

    ll gcds = xs[1] - xs[0];
    for (int i = 2; i < n; i++)
        gcds = __gcd(gcds, xs[i] - xs[i - 1]);

    vector<ll> ps(m);
    for (int i = 0; i < m; i++)
        cin >> ps[i];

    for (int i = 0; i < m; i++)
    {
        if (gcds % ps[i] == 0)
        {
            cout << "YES\n";
            cout << xs[0] << " " << i + 1 << endl;
            return;
        }
    }

    cout << "NO\n";
}
int main()
{
    solve();
    return 0;
}