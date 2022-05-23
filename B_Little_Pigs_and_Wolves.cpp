// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int PinfrontW = 0, WinfrontP = 0, pigCount = 0, wolfCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'W')
            {
                bool flag = true;
                wolfCount++;
                if (i - 1 >= 0 && grid[i - 1][j] == 'P')
                    PinfrontW++, flag = false;
                if (j - 1 >= 0 && grid[i][j - 1] == 'P')
                    PinfrontW++, flag = false;
                if (i + 1 < n && grid[i + 1][j] == 'P')
                    PinfrontW++, flag = false;
                if (j + 1 < m && grid[i][j + 1] == 'P')
                    PinfrontW++, flag = false;
                if (flag)
                    wolfCount--;
            }
            else if (grid[i][j] == 'P')
            {
                bool flag = true;
                pigCount++;
                if (i - 1 >= 0 && grid[i - 1][j] == 'W')
                    WinfrontP++, flag = false;
                if (j - 1 >= 0 && grid[i][j - 1] == 'W')
                    WinfrontP++, flag = false;
                if (i + 1 < n && grid[i + 1][j] == 'W')
                    WinfrontP++, flag = false;
                if (j + 1 < m && grid[i][j + 1] == 'W')
                    WinfrontP++, flag = false;
                if (flag)
                    pigCount--;
            }
        }
    }

    cout << min(min(PinfrontW, WinfrontP), min(wolfCount, pigCount));

    return 0;
}