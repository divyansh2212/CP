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
    int a, b;
    cin >> a >> b;

    vector<int> fact(a + b + 1, 0);
    fact[0] = 1;
    for (int i = 1; i < fact.size(); i++)
        fact[i] = (fact[i - 1] * 1LL * i) % mod;

    int ans = fact[a + b - 1];
    int denominator = (fact[b] * 1LL * fact[a - 1]) % mod;
    ans = (ans * 1LL * binExp(denominator, mod - 2)) % mod;

    cout << ans << endl;

    return 0;
}