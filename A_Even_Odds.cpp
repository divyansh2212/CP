// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (k <= n / 2)
            cout << 2 * k - 1;
        else
        {
            k -= n / 2;
            cout << 2 * k;
        }
    }

    else
    {
        if (k <= n / 2)
            cout << 2 * k - 1;
        else if (k == (n + 1) / 2)
            cout << n;
        else
        {
            k -= (n + 1) / 2;
            cout << 2 * k;
        }
    }

    return 0;
}