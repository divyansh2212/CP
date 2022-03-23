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
        int x, y, d;
        cin >> x >> y >> d;

        if (abs(x - y) <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}