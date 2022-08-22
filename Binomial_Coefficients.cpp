// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int binExp(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * 1LL * a) % mod;
        a = (a * 1LL * a) % mod;
        b = (b >> 1);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    vector<int> fact(1e6 + 1, 0);
    fact[0] = 1;
    for (int i = 1; i < 1000000 + 1; i++)
        fact[i] = (fact[i - 1] * 1LL * i) % mod;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int ans = fact[a];
        int deno = (fact[a - b] * 1LL * fact[b]) % mod;

        ans = (ans * 1LL * binExp(deno, mod - 2)) % mod;

        cout << ans << endl;
    }

    return 0;
}