// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int x, y, a, b, c;
    cin >> x >> y;

    b = y;
    int ACsum = (x * 3) - y;

    for (int tempa = -1000; tempa <= b; tempa++)
    {
        int tempc = ACsum - tempa;
        if (tempc > 1000 || tempc < -1000)
            continue;
        if (tempa <= b && b <= tempc)
        {
            a = tempa, c = tempc;
            break;
        }
    }

    cout << a << " " << b << " " << c << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}