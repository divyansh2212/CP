// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 0 && c == 0)
        cout << 0 << endl;
    else if (a == 0 || c == 0)
        cout << 1 << endl;
    else if ((a * 1.0) / b == (c * 1.0) / d)
        cout << 0 << endl;
    else
    {
        if ((a * d) % (b * c) == 0)
            cout << 1 << endl;
        else if ((b * c) % (a * d) == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
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