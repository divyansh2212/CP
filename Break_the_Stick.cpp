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
        ll n, x;
        cin >> n >> x;

        if (x == 1 || (n % 2 == 0) || (x == n) || ((n % 2) && (x % 2)))
        {
            cout << "YES\n";
            continue;
        }

        else
            cout << "NO\n";
    }
    return 0;
}