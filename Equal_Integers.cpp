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
        ll x, y;
        cin >> x >> y;

        if (x == y)
            cout << 0 << endl;

        else if (x < y)
            cout << y - x << endl;

        else
        {
            ll diff = x - y;
            if (diff % 2 == 0)
                cout << diff / 2 << endl;
            else
                cout << ((diff + 1) / 2) + 1 << endl;
        }
    }
    return 0;
}