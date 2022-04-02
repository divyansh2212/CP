// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int test = 0;
    while (t--)
    {
        test++;
        vector<ll> c(3), m(3), y(3), k(3);
        for (int i = 0; i < 3; i++)
            cin >> c[i] >> m[i] >> y[i] >> k[i];

        ll minc = INT_MAX;
        for (int i = 0; i < 3; i++)
            minc = min(minc, c[i]);

        ll minmag = INT_MAX;
        for (int i = 0; i < 3; i++)
            minmag = min(minmag, m[i]);

        ll miny = INT_MAX;
        for (int i = 0; i < 3; i++)
            miny = min(miny, y[i]);

        ll mink = INT_MAX;
        for (int i = 0; i < 3; i++)
            mink = min(mink, k[i]);

        if (minc + minmag + miny + mink < 1e6)
            cout << "Case #" << test << ": IMPOSSIBLE" << endl;
        else
        {
            ll diff = minc + minmag + miny + mink - 1e6;

            while (diff > 0)
            {
                if (minc > 0 && diff > 0)
                {
                    ll to_sub = min(minc, diff);
                    diff -= to_sub, minc -= to_sub;
                }
                if (minmag > 0 && diff > 0)
                {
                    ll to_sub = min(minmag, diff);
                    diff -= to_sub, minmag -= to_sub;
                }
                if (miny > 0 && diff > 0)
                {
                    ll to_sub = min(miny, diff);
                    diff -= to_sub, miny -= to_sub;
                }
                if (mink > 0 && diff > 0)
                {
                    ll to_sub = min(mink, diff);
                    diff -= to_sub, mink -= to_sub;
                }
            }
            cout << "Case #" << test << ": " << minc << " " << minmag << " " << miny << " " << mink << endl;
        }
    }
    return 0;
}