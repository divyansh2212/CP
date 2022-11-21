// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool check(vector<ll> &arr, ll &c, ll d, ll mid, vector<ll> &suffix)
{
    int n = arr.size();
    if (mid == 0)
        return (arr[0] * d >= c);

    ll curr = 0;
    while (d > 0)
    {
        curr += arr[0];
        d--;
        if (d == 0)
            break;
        if (curr >= c)
            return true;

        if (mid <= n - 1)
        {
            if (d < mid)
                    curr += suffix[1] - suffix[1 + d], d = 0;
            else if (mid == n - 1)
                curr += suffix[1], d -= mid;
            else
                curr += suffix[1] - suffix[mid + 1], d -= mid;
        }
        else
        {
            if (d == n - 1)
                curr += suffix[1], d = 0;
            else if (d < n - 1)
                curr += suffix[1] - suffix[1 + d], d = 0;
            else
                curr += suffix[1], d -= mid;
        }
    }
    return (curr >= c);
}
void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    vector<ll> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] + arr[i];

    ll lo = 0, hi = inf, mid, ans = -1;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (check(arr, c, d, mid, suffix))
            ans = mid, lo = mid + 1;
        else
            hi = mid - 1;
    }

    if (ans == -1)
        cout << "Impossible\n";
    else if (ans == inf)
        cout << "Infinity\n";
    else
        cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}