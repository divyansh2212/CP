// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    ll ans = 0, sum = 0;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum *= 2;
    if (sum % n)
    {
        cout << "0\n";
        return;
    }
    sum /= n;
    int i = 0;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        ans += mp[sum - arr[i]];
        mp[arr[i]]++;
    }

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