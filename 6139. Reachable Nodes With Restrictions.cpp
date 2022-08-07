// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(int vtx, vector<int> graph[], vector<bool> &visited, map<int, bool> &restric)
    {
        visited[vtx] = true;
        for (auto &child : graph[vtx])
        {
            if (child == vtx || visited[child] || restric.find(child) != restric.end())
                continue;
            f(child, graph, visited, restric);
        }
    }

public:
    int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
    {
        vector<int> graph[n];
        for (int i = 0; i < edges.size(); i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        map<int, bool> restric;
        for (int i = 0; i < restricted.size(); i++)
            restric[restricted[i]] = true;

        vector<bool> visited(n, false);

        f(0, graph, visited, restric);

        int ans = 0;
        for (int i = 0; i < visited.size(); i++)
            if (visited[i])
                ans++;

        return ans;
    }
};