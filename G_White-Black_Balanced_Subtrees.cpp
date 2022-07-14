// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dfs(vector<int> graph[], vector<char> &color, int vtx, int &ans)
{
    int currpoint = 0;
    if (color[vtx] == 'B')
        currpoint++;
    else
        currpoint--;

    // int ans = 0;
    for (auto &child : graph[vtx])
        currpoint += dfs(graph, color, child, ans);

    if (currpoint == 0)
        ans++;

    return currpoint;
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
        for (int i = 2; i < n + 1; i++)
        {
            int x;
            cin >> x;
            graph[x].push_back(i);
        }

        vector<char> color(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> color[i];

        int ans = 0;
        int points = dfs(graph, color, 1, ans);

        cout << ans << endl;
    }
    return 0;
}