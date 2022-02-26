#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll M = 1e9 + 7;

ll binExp(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * 1LL * a) % M;

        a = (a * 1LL * a) % M;
        b = (b >> 1);
    }
    return ans % M;
}

int main()
{
    ll k;
    cin >> k;
    if (k == 1)
        cout << 6;
    else
    {
        ll ans = 6;
        k--;
        ll pow = 2;
        while (k--)
        {
            ans = (ans * binExp(4, pow)) % M;
            pow *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}