// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, r;
    cin >> n >> r;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll i = 0, j = 0, ans = 0;

    while (j < n)
    {
        if (arr[j] - arr[i] > r)
        {
            ans += (n - 1 - j + 1);
            i++;
        }
        else
            j++;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}