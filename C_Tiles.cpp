// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 998244353;

int main()
{
    int w, h;
    cin >> w >> h;

    ll ans = 1;
    while (w--)
        ans = (ans * 2) % mod;
    while (h--)
        ans = (ans * 2) % mod;

    cout << ans << endl;

    return 0;
}