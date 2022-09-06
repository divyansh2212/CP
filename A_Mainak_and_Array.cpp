// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int mn = inf, mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    if (arr[0] == mn || arr[n - 1] == mx)
        cout << mx - mn << endl;
    else
    {
        int ans = arr[n - 1] - arr[0];
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                ans = max(ans, arr[i] - arr[0]);
            if (i + 1 < n)
                ans = max(ans, arr[i] - arr[i + 1]);
            if (i != n - 1)
                ans = max(ans, arr[n - 1] - arr[i]);
        }
        cout << ans << endl;
    } 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}