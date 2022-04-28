// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:

    void dfs()

    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
    {
       vector<vector<int>> graph(s.size());

        for (int i = 0; i < pairs.size(); i++)
        {
            graph[pairs[i][0]].push_back(pairs[i][1]);
            graph[pairs[i][1]].push_back(pairs[i][0]);
        }
        
        vector<bool> visited(s.size(), false);

        for (int i = 0; i < graph.size(); i++)
        {
            if(!visited[i])
        }
        

    }
};