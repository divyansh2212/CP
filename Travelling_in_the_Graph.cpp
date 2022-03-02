#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;

void dfs(int vtx, vector<bool> &visited, vector<vector<int>> &g)
{
    visited[vtx] = true;

    for (auto child : g[vtx])
    {
        if (visited[child])
            continue;
        dfs(child, visited, g);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> g(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        vector<bool> visited(n + 1, false);
        dfs(1, visited, g);
        if (visited[n])
        {
            cout << 0 << endl;
            continue;
        }
        int ans = INT_MAX, mx1, mx2;
        for (int i = 1; i < n; i++)
        {
            if (visited[i])
            {
                ans = min(ans, n - i);
                mx1 = i;
            }
        }

        vector<bool> visited2(n + 1, false);
        dfs(n, visited2, g);
        for (int i = n; i > 1; i--)
        {
            if (visited2[i])
            {
                ans = min(ans, i - 1);
                mx2 = i;
            }
        }
        for (int i = 1; i < n; i++)
            if ((visited[i] && visited2[i + 1]) || (visited2[i] && visited[i + 1]))
                ans = 1;

        ans = min(ans, abs(mx1 - mx2));
        cout << ans << endl;
    }
    return 0;
}