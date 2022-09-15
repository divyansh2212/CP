// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

// bool check(vector<ll> &arr, ll mid)
// {
// ll rounds = 0;
// }

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll sum = 0, mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    ll ans = ceil(sum * 1.0 / (n - 1));
    cout << max(mx, ans);
}

int main()
{
    solve();
    return 0;
}