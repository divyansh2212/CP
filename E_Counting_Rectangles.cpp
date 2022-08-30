// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<pair<ll, ll>> rectangles(n);
    for (int i = 0; i < n; i++)
        cin >> rectangles[i].first >> rectangles[i].second;

    sort(rectangles.begin(), rectangles.end());

    vector<ll> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
        prefix[i] += prefix[i - 1] + (rectangles[i - 1].first * rectangles[i - 1].second);

    while (q--)
    {
        ll ans = 0;
        int hs, ws, hb, wb;
        cin >> hs >> ws >> hb >> wb;

        
        
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