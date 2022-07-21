// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void dfs(vector<int> graph[], vector<bool> &visited, vector<vector<int>> &ans, vector<int> &curr, int vtx)
{
    visited[vtx] = true;
    curr.push_back(vtx);

    if (graph[vtx].size() == 0)
        ans.push_back(curr);

    int i = 0;
    for (auto &child : graph[vtx])
    {
        if (i > 0)
            curr.clear();
        if (visited[child])
            continue;
        dfs(graph, visited, ans, curr, child);
        i++;
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n + 1);
    vector<int> graph[n + 1];
    int root;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i == x)
            root = x;
        else
            graph[x].push_back(i);
    }

    vector<bool> visited(n + 1, false);
    vector<vector<int>> ans;
    vector<int> curr;

    dfs(graph, visited, ans, curr, root);

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].size() << "\n";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}