// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> grid(n, vector<char>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        }

        int idx = -1, idy = -1, diff = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 'R')
                {
                    if (i + j <= diff)
                    {
                        diff = i + j;
                        idx = i, idy = j;
                    }
                }
            }
        }

        int leftRight = 0 - idy, topDown = 0 - idx;

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 'R')
                {
                    if (i + topDown > n || i + topDown < 0 || j + leftRight < 0 || j + leftRight > m)
                        flag = true;
                }
            }
        }

        if (flag)
            cout << "NO\n";

        else
            cout << "YES\n";
    }
    return 0;
}