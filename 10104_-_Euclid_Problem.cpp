// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll eea(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }

    ll x1, y1;
    ll d = eea(b, a % b, x1, y1);

    x = y1;
    y = x1 - (y1 * (a / b));

    return d;
}

int main()
{
    while (1)
    {
        ll a, b;
        if (cin >> a)
        {
            cin >> b;
            ll g, x, y;
            g = eea(a, b, x, y);
            cout << x << " " << y << " " << g << endl;
        }
        else
            return 0;
    }

    return 0;
}