// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b;
    cin >> a >> b;

    int ans = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ans++;
    }

    cout << ans;

    return 0;
}