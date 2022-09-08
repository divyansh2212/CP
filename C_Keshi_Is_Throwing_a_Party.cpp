// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool check(int mid, vector<int> &a, vector<int> &b)
{
    int poor = 0;
    for (int i = 0; i < a.size(); i++)
        if (poor <= b[i] && (mid - 1 - poor) <= a[i])
            poor++;
    return (poor >= mid);
}

void solve()
{
    ll n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int lo = 0, hi = n, mid, ans = 0;

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (check(mid, a, b))
            lo = mid + 1, ans = mid;
        else
            hi = mid - 1;
    }
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