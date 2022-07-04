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
        ll x;
        cin >> x;

        bool flag = false;
        for (ll i = 1; i < 1e4; i++)
        {
            ll target = x - (i * i * i);
            ll lo = i, hi = 1e4, mid;
            while (lo <= hi)
            {
                mid = (lo + hi) / 2;
                if (mid * mid * mid == target)
                {
                    flag = true;
                    break;
                }
                if (mid * mid * mid > target)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            if (flag)
                break;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}