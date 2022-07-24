// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

ll dfs(vector<ll> &arr, vector<int> graph[], int vtx, int bonds, vector<bool> &visited)
{
    ll ans = arr[vtx];
    visited[vtx] = true;
    bonds -= graph[vtx].size();

    for (auto &child : graph[vtx])
        if (visited[child])
            bonds++;
            
    if (bonds % 2 == 0)
        return ans;
    ll curr = INF;
    for (auto &child : graph[vtx])
    {
        if (visited[child])
            continue;
        curr = min(curr, dfs(arr, graph, child, bonds, visited));
    }
    return ans + curr;
}

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

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    if (m % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = INF, curr = 0;
    for (int i = 1; i <= n; i++)
    {
        ll bonds = m;
        if (graph[i].size())
        {
            vector<bool> visited(n + 1, false);
            curr = dfs(arr, graph, i, bonds, visited);
            ans = min(ans, curr);
        }
    }

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