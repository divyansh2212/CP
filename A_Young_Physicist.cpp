// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    ll netx = 0, nety = 0, netz = 0;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        netx += x, nety += y, netz += z;
    }
    if (netx == 0 && nety == 0 && netz == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}