// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    list<ll> b, a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }

    ll ans = 0;

    while (a.size() > 1)
    {
        ll to_add;
        if (b.back() > b.front())
        {
            to_add = b.front();
            ans += a.front();
            a.pop_front();
            b.pop_front();
            a.front() += to_add;
        }
        else
        {
            to_add = b.back();
            ans += a.back();
            a.pop_back();
            b.pop_back();
            a.back() += to_add;
        }
    }

    ans += a.front();

    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}