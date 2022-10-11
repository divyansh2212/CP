// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, k, mn = 1e18;
    cin >> n >> k;

    vector<ll> prefix(300000, 0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
        prefix[x]++;
    }

    for (int i = 295634; i >= 1; i--)
        prefix[i] = prefix[i] + prefix[i + 1];

    int ans = 0;
    ll curr = 0;
    for (int i = 200000; i >= mn; i--)
    {
        if (curr + prefix[i] > k)
        {
            ans++;
            curr = 0;
        }
        if (i == mn)
        {
            if (curr)
                ans++;
            break;
        }
        curr += prefix[i];
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}