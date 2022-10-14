// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (grid[i][j] == '*')
            {
                int x = i, y = j;

                int delx = x - 1, dely1 = y + 1, dely2 = y - 1, cnt = 0;
                while (delx >= 0 && dely1 < m && dely2 >= 0 && grid[delx][dely1] == '*' && grid[delx][dely2] == '*')
                    cnt++, delx--, dely1++, dely2--;

                if (cnt >= k)
                {
                    delx = x, dely1 = y, dely2 = y;
                    while (delx >= 0 && dely1 < m && dely2 >= 0 && grid[delx][dely1] == '*' && grid[delx][dely2] == '*')
                    {
                        visited[delx][dely1] = true, visited[delx][dely2] = true;
                        delx--, dely1++, dely2--;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '*' && !visited[i][j])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}