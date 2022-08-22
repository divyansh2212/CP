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

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > 0)
        {
            ll to_sub = arr[i] / 2;
            arr[i - 1] -= to_sub;
            arr[i] -= (2 * to_sub);

            if (arr[i] == 1 && arr[i - 1] > 0)
                arr[i] = -1, arr[i - 1]--;  
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += abs(arr[i]);

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}