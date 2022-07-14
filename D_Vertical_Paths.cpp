// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(vector<int> graph[], int vtx, vector<int> &ans, vector<int> &curr)
{
    curr.push_back(vtx);
    if (curr.size() >= ans.size())
        ans = curr;

    for (auto &child : graph[vtx])
        dfs(graph, child, ans, curr);

    curr.pop_back();
}

void dfs2(vector<int> graph[], int vtx, vector<bool> &visited, vector<int> &curr)
{
    visited[vtx] = true;
    curr.push_back(vtx);

    for (auto &child : graph[vtx])
    {
        if (visited[child])
            continue;
        dfs2(graph, child, visited, curr);
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

        vector<int> graph[n + 1];
        int root = -1;

        for (int i = 1; i < n + 1; i++)
        {
            int x;
            cin >> x;
            if (x == i)
                root = i;
            else
                graph[x].push_back(i);
        }

        vector<int> ans;
        vector<int> curr;
        dfs(graph, root, ans, curr);

        vector<bool> visited(n + 1, false);
        for (int i = 0; i < ans.size(); i++)
            visited[ans[i]] = true;

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;

        vector<vector<int>> finalans;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i])
                continue;
            curr.clear();
            dfs2(graph, i, visited, curr);
            cout << curr.size() << endl;
            for (int i = 0; i < curr.size(); i++)
                cout << curr[i] << " ";

            cout << endl;
        }
        cout << endl;
    }
    return 0;
}