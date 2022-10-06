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

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans < arr[i])
            break;
        else
            ans += arr[i];
    }
    cout << ans;
}
int main()
{
    // while (t--)
    solve();
    return 0;
}