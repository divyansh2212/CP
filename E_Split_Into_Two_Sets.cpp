// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int vtx, vector<int> graph[], bool &flag, vector<int> &color)
{
    if (!flag)
        return;
    for (auto &child : graph[vtx])
    {
        if (color[child] == -1)
        {
            color[child] = !color[vtx];
            dfs(child, graph, flag, color);
        }
        else if (color[child] == color[vtx])
            flag = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool flag = true;
        vector<int> graph[n + 1];
        for (int i = 0; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            if (u == v)
                flag = false;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for (int i = 1; i < n + 1; i++)
            if (graph[i].size() != 2)
                flag = 0;

        if (!flag)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> color(n + 1, -1);

        for (int i = 1; i < n + 1; i++)
        {
            if (color[i] != -1)
                continue;
            color[i] = 0;
            dfs(i, graph, flag, color);
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}