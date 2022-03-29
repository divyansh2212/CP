// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, t;
    cin >> n >> t;

    vector<int> times(n);
    for (int i = 0; i < n; i++)
        cin >> times[i];

    ll maxmBooks = 0;

    vector<ll> forward(n + 1, 0);
    forward[0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        forward[i] = forward[i - 1] + times[i - 1];
        if (forward[i] <= t)
            maxmBooks = i;
    }

    for (int i = 1; i < n + 1; i++)
    {
        ll to_sub = forward[i];
        ll lo = i + 1, hi = n, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (forward[mid] - to_sub > t)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        if (lo >= 1 && lo <= n)
        {
            if (forward[lo] - to_sub <= t)
                maxmBooks = max(maxmBooks, lo - i);
        }
        if (hi >= 1 && hi <= n)
        {
            if (forward[hi] - to_sub <= t)
                maxmBooks = max(maxmBooks, hi - i);
        }
    }

    cout << maxmBooks;

    return 0;
}