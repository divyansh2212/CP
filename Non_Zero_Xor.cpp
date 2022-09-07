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

    ll i = 0, xr = 0, ans = 0;

    while (i < n)
    {
        xr = (xr ^ arr[i]);
        if (xr == 0)
            ans++, xr = 0;
        else if (xr != 0 && arr[i] == 0)
            ans++, xr = 0;
        i++;
    }

    xr = 0, i = n - 1;
    ll currans = 0;
    while (i >= 0)
    {
        xr = (xr ^ arr[i]);
        if (xr == 0)
            currans++, xr = 0;
        else if (xr != 0 && arr[i] == 0)
            currans++, xr = 0;  
        i--;
    }
    cout << min(ans, currans) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}