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

    vector<pair<int, int>> pairs;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i > x)
            pairs.push_back({x, i});
    }

    ll ans = 0;
    for (int i = pairs.size() - 1; i >= 1; i--)
    {
        int lo = 0, hi = i - 1, mid, curr = 0;
        while (lo <= hi)
        {
            mid = lo + ((hi - lo) / 2);
            if (pairs[i].first > pairs[mid].second)
            {
                curr = mid + 1;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
        ans += curr;
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