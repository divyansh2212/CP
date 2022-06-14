// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll n_copy = n, a_copy = a, b_copy = b;

        if (n > 0)
        {
            ll to_sub = min(n, a - x);
            n -= to_sub;
            a -= to_sub;
        }
        if (n > 0)
        {
            ll to_sub = min(n, b - y);
            n -= to_sub;
            b -= to_sub;
        }
        ll ans = a * b;

        if (n_copy > 0)
        {
            ll to_sub = min(n_copy, b_copy - y);
            n_copy -= to_sub;
            b_copy -= to_sub;
        }
        if (n_copy > 0)
        {
            ll to_sub = min(n_copy, a_copy - x);
            n_copy -= to_sub;
            a_copy -= to_sub;
        }
        ans = min(ans, a_copy * b_copy);

        cout << ans << endl;
    }

    return 0;
}
