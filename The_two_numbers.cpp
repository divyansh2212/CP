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
        ll n;
        cin >> n;

        ll a = n / 2, b = n / 2;

        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }

        if (n % 2)
            b += 1;
        else
        {
            if ((n / 2) % 2 == 0)
                a--, b++;

            else
                a -= 2, b += 2;
        }

        cout << ((a * b) / __gcd(a, b)) - __gcd(a, b) << endl;
    }
    return 0;
}