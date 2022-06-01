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
        ll n, k;
        cin >> n >> k;

        if (k == 1 || (n % 2 == 0))
        {
            cout << "Yes\n";
            continue;
        }

        if ((n % 2) && k == 0)
        {
            cout << "No\n";
            continue;
        }
    }
    return 0;
}