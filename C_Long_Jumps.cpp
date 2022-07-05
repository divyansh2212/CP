// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(vector<ll> &arr, ll idx, vector<ll> &dp)
{
    if (idx >= arr.size())
        return 0;
    if (dp[idx] != -1)
        return dp[idx];

    ll take = 0;
    take = arr[idx] + f(arr, idx + arr[idx], dp);

    return dp[idx] = take;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> dp(n, -1);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll curr = arr[i];
            curr += f(arr, i + arr[i], dp);
            ans = max(ans, curr);
        }

        cout << ans << endl;
    }
    return 0;
}