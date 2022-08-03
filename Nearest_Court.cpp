// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int x, y;
    cin >> x >> y;

    int ans = inf;

    for (int i = 1; i < 10000; i++)
        ans = min(ans, max(abs(x - i), abs(y - i)));

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