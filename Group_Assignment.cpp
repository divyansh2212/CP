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

        ll ans;

        ans = abs((2 * n) - x) + 1;
        cout << ans << endl;
    }
    return 0;
}