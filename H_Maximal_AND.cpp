// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<int> hsh(31, 0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (int j = 0; j < 31; j++)
            if ((x & (1 << j)) != 0)
                hsh[j]++;
    }

    ll ans = 0;
    for (ll i = 30; i >= 0; i--)
    {
        int to_add = n - hsh[i];
        if (k >= to_add)
            k -= to_add, ans += pow(2, i);
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}