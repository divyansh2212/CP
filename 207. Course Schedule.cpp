// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void dfs(vector<vector<int>> &prerequisites, int vtx, vector<bool> &visited, bool &flag)
    {
        visited[vtx] = true;

        for (auto &child : prerequisites[vtx])
        {
            if (visited[child])
                flag = false;
            else
                dfs(prerequisites, child, visited, flag);
        }
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<bool> visited(numCourses, false);

        vector<vector<int>> graph(numCourses);

        for (int i = 0; i < prerequisites.size(); i++)
        {
            int u = prerequisites[i][0], v = prerequisites[i][1];
            graph[v].push_back(u);
        }

        bool flag = true;
        for (int i = 0; i < numCourses; i++)
        {
            if (!visited[i])
                dfs(graph, i, visited, flag);
        }

        return flag;
    }
};