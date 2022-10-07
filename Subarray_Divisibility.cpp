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
    {
        cin >> arr[i];
    }

    map<ll, int> mp;
    mp[0]++;

    ll sum = 0, rem = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        rem = (sum % n);
        mp[rem]++;

        if (rem == 0)
            ans += mp[rem];
        else
        {
            ans += mp[n - rem];
        }
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}