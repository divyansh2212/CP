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

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<ll, ll> mp;
    ll sum = 0, ans = 0;
    mp[sum]++;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum - x) != mp.end())
            ans += mp[sum - x];
        mp[sum]++;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}