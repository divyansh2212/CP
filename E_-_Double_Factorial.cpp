// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

ll values(ll n, ll &fives, ll &twos)
{
    if (n == 0 || n == 1)
        return 1;
    ll ans1 = values(n - 2, fives, twos), ans2 = n;
    ll ans = ans1 * ans2;
    while (ans1 % 5 == 0)
        fives++, ans1 /= 5;
    while (ans2 % 5 == 0)
        fives++, ans2 /= 5;
    while (ans1 % 2 == 0)
        twos++, ans1 /= 2;
    while (ans2 % 2 == 0)
        twos++, ans2 /= 2;

    return ans % mod;
}

void solve()
{
    ll n;
    cin >> n;

    if (n % 2)
        cout << 0;

    else
    {
        ll result = 0;
        n /= 2;
        for (long long i = 5; n / i > 0; i *= 5)
            result += (n / i);
        cout << result;
    }

}
int main()
{
    solve();
    return 0;
}