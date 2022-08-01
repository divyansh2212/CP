// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    if (grid[0][0] == '1')
    {
        cout << -1 << "\n";
        return;
    }

    vector<vector<int>> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (grid[i][j] == '1')
            {
                if (j == 0)
                {
                    ans.push_back({i, j + 1, i + 1, j + 1});
                    continue;
                }
                int x1 = i + 1, y1 = j, x2 = i + 1, y2 = j + 1;
                ans.push_back({x1, y1, x2, y2});
            }
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << " " << ans[i][3] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}