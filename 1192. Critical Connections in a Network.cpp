// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void dfs(vector<bool> &visited, vector<int> &t_insert, vector<int> &min_time, int &timer, vector<int> graph[], int vtx, int parent, vector<vector<int>> &ans)
    {
        visited[vtx] = true;
        t_insert[vtx] = timer, min_time[vtx] = timer;
        timer++;

        for (auto &child : graph[vtx])
        {
            if (child == parent)
                continue;
            if (!visited[child])
            {
                dfs(visited, t_insert, min_time, timer, graph, child, vtx, ans);
                min_time[vtx] = min(min_time[vtx], min_time[child]);
                if (min_time[child] > t_insert[vtx])
                    ans.push_back({child, vtx});
            }
            else
                min_time[vtx] = min(min_time[vtx], t_insert[child]);
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        vector<vector<int>> ans;

        int m = connections.size();
        vector<int> graph[n];
        for (int i = 0; i < m; i++)
        {
            int u = connections[i][0], v = connections[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<bool> visited(n, false);
        vector<int> t_insert(n, -1), min_time(n, -1);
        int timer = 0;

        for (int i = 0; i < n; i++)
            if (!visited[i])
                dfs(visited, t_insert, min_time, timer, graph, i, i, ans);

        return ans;
    }
};