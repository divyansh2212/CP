// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void helper(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> &curr, int vtx)
    {
        if (vtx == graph.size() - 1)
        {
            curr.push_back(vtx);
            ans.push_back(curr);
            curr.pop_back();
            return;
        }

        curr.push_back(vtx);
        for (auto &child : graph[vtx])
            helper(graph, ans, curr, child);

        curr.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        vector<vector<int>> ans;
        vector<int> curr;

        helper(graph, ans, curr, 0);

        return ans;
    }
};