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
        ll a, b, c;
        cin >> a >> b >> c;

        ll x, y, z;
        z = c;
        y = z + b;
        x = y + a;

        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}