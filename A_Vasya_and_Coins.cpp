// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == 0)
        {
            cout << 1 << endl;
            continue;
        }

        if (b == 0)
        {
            cout << a + 1 << endl;
            continue;
        }

        ll ans = a + (2 * b) + 1;   

        ll lo = 2 * b + 1, hi = a + (2 * b) + 1, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            ll reqd = mid;
            reqd -= (2 * b);
            if (reqd <= a)
                lo = mid + 1;
            else
            {
                ans = mid;
                hi = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}