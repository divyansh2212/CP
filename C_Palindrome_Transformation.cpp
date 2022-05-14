// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, p;
    cin >> n >> p;

    string s;
    cin >> s;

    ll ans = 0;

    ll firstpnt = INT_MAX, lastpnt = INT_MIN;
    for (ll i = 1; i <= n / 2; i++)
    {
        if (s[i - 1] == s[n - i])
            continue;
        firstpnt = min(firstpnt, i);
        lastpnt = max(lastpnt, i);
        ll curr = abs(s[n - i] - s[i - 1]);

        if (26 - curr < curr)
            curr = 26 - curr;
        ans += curr;
    }

    if (p > n / 2)
        p = n + 1 - p;

    if (lastpnt == INT_MIN)
        ans = ans;
    else if (p - firstpnt > lastpnt - p)
    {
        ans += abs(lastpnt - p);
        ans += lastpnt - firstpnt;
    }
    else
    {
        ans += abs(p - firstpnt);
        ans += lastpnt - firstpnt;
    }

    cout << ans;

    return 0;
}