#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll get(ll x)
{
    return (x * (x + 1)) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, x, ans = 0;
        cin >> k >> x;

        ans = 2 * k - 1;

        ll lo = 1, hi = 2 * k - 1, mid, flag = 0;

        while (lo <= hi)
        {
            mid = (lo + hi) / 2;

            if (mid <= k)
                flag = (get(mid) >= x);
            else
                flag = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);

            if (flag)
                hi = mid - 1, ans = mid;
            else
                lo = mid + 1;
        }

        cout << ans << endl;
    }
    return 0;
}