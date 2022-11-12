// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    bool dfs(int vtx, vector<bool> &visited, vector<int> graph[], vector<int> &bobPath)
    {
        visited[vtx] = true;
        bobPath.push_back(vtx);
        if (vtx == 0)
            return true;
        for (auto &child : graph[vtx])
        {
            if (visited[child] == false)
            {
                if (dfs(child, visited, graph, bobPath))
                    return true;
            }
        }
        visited[vtx] = false;
        bobPath.pop_back();
        return false;
    }

    int maxProfit(int vtx, vector<int> graph[], unordered_map<int, int> &mp, vector<bool> &visited, vector<int> &amount, int idx)
    {
        visited[vtx] = true;
        int currProfit = amount[vtx];
        if (mp.find(vtx) != mp.end())
        {
            if (idx == mp[vtx])
                currProfit /= 2;
            else if (mp[vtx] < idx)
                currProfit = 0;
        }

        if (graph[vtx].size() == 1 && vtx != 0)
            return currProfit;

        int newProfit = -1e9;
        for (auto &child : graph[vtx])
        {
            if (visited[child] == false)
            {
                newProfit = max(newProfit, maxProfit(child, graph, mp, visited, amount, idx + 1));
            }
        }
        return currProfit + newProfit;
    }

public:
    int mostProfitablePath(vector<vector<int>> &edges, int bob, vector<int> &amount)
    {
        int n = edges.size() + 1;
        vector<int> graph[n];
        for (int i = 0; i < edges.size(); i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        vector<bool> bobPath(n, false);
        vector<int> bobRoad;
        dfs(bob, bobPath, graph, bobRoad);

        unordered_map<int, int> mp;
        for (int i = 0; i < bobRoad.size(); i++)
            mp[bobRoad[i]] = i;

        vector<bool> visited(n, false);
        return maxProfit(0, graph, mp, visited, amount, 0);
    }
};