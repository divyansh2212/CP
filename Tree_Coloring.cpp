// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> graph[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    ll ans = c, level = 0;
    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        level++;

        int top = q.front();
        q.pop();

        if (level == 1)
        {
            int color = c - 1;
            for (auto &child : graph[top])
            {
                ans = (ans * color) % mod;
                q.push(child);
                color--;
            }
        }
        else
        {
            int color = c - 2;
            for (auto &child : graph[top])
            {
                ans = (ans * color) % mod;
                q.push(child);
                color--;
            }
        }
    }

    cout << ans << endl;
}
int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}