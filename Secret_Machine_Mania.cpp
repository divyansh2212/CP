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
        ll x, c;
        cin >> x >> c;

        if (x == 1)
        {
            cout << x << endl;
            continue;
        }

        ll curr = 1;
        while (1)
        {
            ll currno = pow(curr, c);
            if ((currno / __gcd(currno, x)) > x)
                break;

            if (x > (currno / __gcd(currno, x)) * (x / __gcd(currno, x)))
            {
                x = min(x, (currno / __gcd(currno, x)) * (x / __gcd(currno, x)));
                curr = 0;
            }

            curr++;
        }
        cout << x << endl;
    }
    return 0;
}