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
        int n;
        cin >> n;

        vector<ll> bits(40, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            bits[log2(x) + 1]++;
        }

        ll ans = 0;
        for (int i = 0; i < 40; i++)
            ans += (bits[i] * (bits[i] - 1)) / 2;
        cout << ans << endl;
    }
    return 0;
}