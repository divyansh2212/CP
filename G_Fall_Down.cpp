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
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];

        int k;
        for (int j = 0; j < m; j++)
        {
            int stones = 0;
            for (int i = 0; i < n; i++)
            {
                if (grid[i][j] == '*')
                    stones++, grid[i][j] = '.';

                else if (grid[i][j] == 'o')
                {
                    k = i - 1;
                    while (stones--)
                        grid[k][j] = '*', k--;
                    stones = 0;
                }
            }
            k = n - 1;
            while (stones--)
                grid[k][j] = '*', k--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << grid[i][j];
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}