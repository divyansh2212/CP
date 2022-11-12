// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, x;
    cin >> n >> x;
    bool flag = false;

    vector<ll> set(n);
    for (int i = 0; i < n; i++)
        cin >> set[i];

    sort(set.begin(), set.end());

    if (x < set[0] || x > set[n - 1])
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}