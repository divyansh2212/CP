// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int M = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> graph[n + 1];

    ll ans = inf;
    vector<pair<int, int>> pairs;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        pairs.push_back({x, y});
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    if (m % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < pairs.size(); i++)
    {
        int x = pairs[i].first, y = pairs[i].second;
        if (graph[x].size() % 2 == 0 && graph[y].size() % 2 == 0)
            ans = min(ans, arr[x] + arr[y]);
    }

    for (int i = 1; i <= n; i++)
        if (graph[i].size() % 2)
            ans = min(ans, arr[i]);

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}