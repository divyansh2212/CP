// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll x, y;
    cin >> x >> y;

    ll l1 = (x / 2), r1 = (x / 2);
    if (x % 2)
        r1++;

    ll l2, r2;
    for (ll i = 1; i * i <= y; i++)
        if (y % i == 0)
            l2 = i, r2 = (y / i);

    bool flag = true;
    if (l1 > l2)
    {
        swap(l1, l2);
        swap(r1, r2);
    }

    if (l1 < l2 && r1 < l2)
    {
        cout << l1 << " " << r1 << endl;
        cout << l2 << " " << r2 << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}