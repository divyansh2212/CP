// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, x, y, mx = INT_MIN;
    cin >> n >> x >> y;

    vector<ll> arr(n);
    vector<ll> special;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        if (arr[i] > y)
            special.push_back(arr[i]);
    }

    if (y >= x || special.size() == 0)
    {
        ll ans = mx / y;
        ans += (mx % y);
        cout << ans << endl;
    }

    else
    {
        ll ans = 0;
        int idx = 0;
        bool flag = false;
        while (!special.empty())
        {
            ll num = special.back();
            special.pop_back();
            num -= (idx * y);

            if (num <= y)
            {
                if (num > 0)
                    flag = true;
                continue;
            }

            int curr = 0;
            curr += (num - y) / x;
            if ((num - y) % x)
                curr++;

            idx += curr;
            num -= (curr * x);
            if (num > 0)
                flag = true;

            ans += curr;
        }
        if (flag)
            ans++;
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