// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int f(vector<int> graph[], vector<bool> &visited, int vtx)
    {
        visited[vtx] = true;

        for (auto &child : graph[vtx])
        {
            if (visited[child])
                return child;
            f(graph, visited, child);
        }
        return -1;
    }

public:
    int longestCycle(vector<int> &edges)
    {
        int n = edges.size();
        vector<int> graph[n];
        for (int i = 0; i < n; i++)
        {
            if (edges[i] == -1)
                continue;
            graph[edges[i]].push_back(i);
        }

        vector<bool> visited(n, false);

        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (visited[i])
                continue;
            int x = f(graph, visited, i);

            if (x != -1)
            {
                int curr = 0, vtx = i;
                do
                {
                    vtx = edges[vtx];
                    curr++;
                } while (vtx != i);
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};