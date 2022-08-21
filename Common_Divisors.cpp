// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> hsh(1e6 + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hsh[x]++;
    }

    ll ans = 1;
    for (int i = 1e6; i >= 2; i--)
    {
        int cnt = 0;
        for (int j = i; j <= 1e6; j += i)
            if (hsh[j])
                cnt += hsh[j];
        if (cnt > 1)
        {
            ans = i;
            break;
        }
    }

    cout << ans;
}
int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}