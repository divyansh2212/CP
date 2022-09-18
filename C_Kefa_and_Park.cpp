// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void dfs(int vtx, vector<int> &isCat, vector<int> graph[], int currCat, int &m, int &ans, vector<bool> &visited)
{
    if (currCat > m)
        return;
    visited[vtx] = true;

    int cnt = 0;

    for (auto &child : graph[vtx])
    {
        if (visited[child])
            continue;
        cnt++;
        if (isCat[child])
            dfs(child, isCat, graph, currCat + 1, m, ans, visited);
        else
            dfs(child, isCat, graph, 0, m, ans, visited);
    }
    if (cnt == 0)
        ans++;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> isCat(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> isCat[i];

    vector<int> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int currCat = 0, ans = 0;
    vector<bool> visited(n + 1, false);
    if (isCat[1])
        currCat++;

    dfs(1, isCat, graph, currCat, m, ans, visited);
    cout << ans;
}
int main()
{
    solve();
    return 0;
}