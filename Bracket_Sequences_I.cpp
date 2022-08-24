// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll binExp(int a, int b, int m)
{
    ll ans = 1;
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
    int n;
    cin >> n;

    vector<int> fact(1e6 + 1, 0);
    fact[0] = 1;
    for (int i = 1; i < fact.size(); i++)
        fact[i] = (fact[i - 1] * 1LL * i) % mod;

    if (n % 2)
        cout << 0;
    else
    {
        int k = n / 2;
        int firstTerm = fact[2 * k];
        int deno = (fact[k] * 1LL * fact[k]) % mod;
        firstTerm = (firstTerm * 1LL * binExp(deno, mod - 2, mod)) % mod;
        firstTerm = (firstTerm * 1LL * binExp(k + 1, mod - 2, mod)) % mod;

        cout << firstTerm;
    }

    return 0;
}