// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k % 4 == 0)
    {
        cout << "NO\n";
        return;
    }

    vector<pair<ll, ll>> pairs;
    for (int i = 1; i <= n; i += 2)
    {
        ll f = (i + k) * (i + 1);
        if (f % 4 == 0)
            pairs.push_back({i, i + 1});
        else
            pairs.push_back({i + 1, i});
    }

    cout << "YES\n";
    for (int i = 0; i < pairs.size(); i++)
        cout << pairs[i].first << " " << pairs[i].second << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}