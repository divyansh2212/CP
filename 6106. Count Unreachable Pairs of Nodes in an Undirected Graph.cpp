// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{

    void dfs(int vtx, vector<int> &cc, vector<vector<int>> &graph, vector<bool> &visited)
    {
        visited[vtx] = true;
        cc.push_back(vtx);

        for (auto &child : graph[vtx])
        {
            if (!visited[child])
                dfs(child, cc, graph, visited);
        }
    }

public:
    long long countPairs(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> graph(n);
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0], v = edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        long long ans = (n * 1LL * (n - 1)) / 2;

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                vector<int> cc;
                dfs(i, cc, graph, visited);
                ll sz = cc.size();
                ans -= ((sz * (sz - 1)) / 2);
            }
        }

        return ans;
    }
};