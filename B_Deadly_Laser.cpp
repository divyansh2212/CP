// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;

    if ((abs(1 - x) + abs(1 - y) <= d) || (abs(n - x) + abs(m - y) <= d))
        cout << -1 << endl;
    else if (d == 0)
        cout << n - 1 + m - 1 << endl;
    else
    {
        int pt1 = abs(1 - y), pt2 = abs(x - n);
        if (pt1 > d && pt2 > d)
        {
            cout << n - 1 + m - 1 << endl;
            return;
        }

        pt1 = abs(1 - x), pt2 = abs(m - y);
        if (pt1 > d && pt2 > d)
        {
            cout << n - 1 + m - 1 << endl;
            return;
        }
        cout << -1 << endl;
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