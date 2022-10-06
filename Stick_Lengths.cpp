// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;

    ll avg = 0;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    if (n % 2)
        avg = arr[n / 2];
    else
        avg = (arr[n / 2] + arr[n / 2]) / 2;
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += abs(arr[i] - avg);
    cout << ans;
}
int main()
{
    solve();
    return 0;
}