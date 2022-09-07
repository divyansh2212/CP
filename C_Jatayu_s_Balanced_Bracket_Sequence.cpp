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

    ll ans = n, curr = 0, have = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == '(')
        {
            curr++;
            if (curr <= have)
                ans--;
            have = curr;
        }
        else
            curr--;
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}