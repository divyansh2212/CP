// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 10;

int main()
{
    vector<vector<ll>> hsh(N, vector<ll>(32, 0));
    for (ll n = 1; n < N; n++)
    {
        for (int i = 0; i < 32; i++)
        {
            hsh[n][i] = hsh[n - 1][i];
            if ((n & (1 << i)) != 0)
                hsh[n][i]++;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        ll curr = 0;

        for (int i = 0; i < 32; i++)
            curr = max(curr, hsh[r][i] - hsh[l - 1][i]);

        cout << r - l + 1 - curr << endl;
    }
    return 0;
}