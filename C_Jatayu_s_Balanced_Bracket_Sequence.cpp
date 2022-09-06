// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;
#define endl "\n"

void dfs(int vtx, vector<int> &visited, vector<int> graph[])
{
    visited[vtx] = true;
    for (auto &child : graph[vtx])
    {
        if (visited[child])
            continue;
        dfs(child, visited, graph);
    }
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> prefix(2 * n, 0);
    vector<int> points[2 * n];
    points[1].push_back(0);
    prefix[0] = 1;
    for (int i = 1; i < s.length(); i++)
    {
        prefix[i] += prefix[i - 1];
        if (s[i] == '(')
            prefix[i]++;
        else
            prefix[i]--;
        points[prefix[i]].push_back(i);
    }

    vector<int> graph[2 * n];
    vector<int> visited(2 * n, false);
    for (int i = 0; i < s.length(); i++)
    {
        if (prefix[i] == 0)
            continue;
        for (auto &child : points[prefix[i] - 1])
        {
            if (visited[child])
                continue;
            graph[i].push_back(child);
            visited[child] = true;
        }
    }

    visited.clear();
    int cnt = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (visited[i])
            continue;
        dfs(i, visited, graph);
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}