// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<bool> is_prime(1e6 + 1, true);
    is_prime[0] = false, is_prime[1] = false;

    for (int i = 2; i <= 1e6; i++)
        if (is_prime[i])
            for (int j = 2 * i; j <= 1e6; j += i)
                is_prime[j] = false;

    unordered_map<ll, int> t_primes;
    for (ll i = 0; i < is_prime.size(); i++)
        if (is_prime[i])
            t_primes[i * i]++;

    int n;
    cin >> n;

    while (n--)
    {
        ll x;
        cin >> x;
        if (t_primes[x])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}