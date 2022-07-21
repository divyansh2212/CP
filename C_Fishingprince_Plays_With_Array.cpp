// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    ll n, m, k, flag = 1;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    vector<int> b(k);
    for (int i = 0; i < k; i++)
        cin >> b[i];

    vector<pair<ll, ll>> p1;
    for (int i = 0; i < n; i++)
    {
        ll num = 1;
        while (a[i] % m == 0)
        {
            a[i] = a[i] / m;
            num = num * m;
        }
        if (p1.size() && p1.back().first == a[i])
            p1.back().second += num;
        else
            p1.push_back({a[i], num});
    }

    vector<pair<ll, ll>> p2;
    for (int i = 0; i < k; i++)
    {
        ll num = 1;
        while (b[i] % m == 0)
        {
            b[i] = b[i] / m;
            num = num * m;
        }
        if (p2.size() && p2.back().first == b[i])
            p2.back().second += num;
        else
            p2.push_back({b[i], num});
    }

    if (p1 == p2)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}