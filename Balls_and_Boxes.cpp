// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll sum = (k * (k + 1)) / 2;

    if (n >= sum)
        cout << "YES\n";

    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}