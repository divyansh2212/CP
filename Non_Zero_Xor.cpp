// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll xr = 0, ans = 0;
    unordered_map<ll, int> mp;
    mp[0]++;
    for (int i = 0; i < n; i++)
    {
        xr = (xr ^ arr[i]);
        if (mp.find(xr) != mp.end())
        {
            ans++;
            mp.clear();
            xr = 0;
        }
        mp[xr]++;
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