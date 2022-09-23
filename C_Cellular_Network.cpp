// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> cities(n), towers(m);
    for (int i = 0; i < n; i++)
        cin >> cities[i];

    for (int i = 0; i < m; i++)
        cin >> towers[i];

    ll ans = 0, curr = 0, i = 0, j = 0;

    while (i < n)
    {
        curr = abs(cities[i] - towers[j]);
        while (j + 1 < m && abs(cities[i] - towers[j + 1]) <= curr)
        {
            curr = abs(cities[i] - towers[j + 1]);
            j++;
        }
        i++;
        ans = max(ans, curr);
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}